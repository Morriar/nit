# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Separate compilation of a Nit program
module separate_compiler


import global_compiler # TODO better separation of concerns
intrude import coloring
redef class ToolContext
	# --separate
	var opt_separate: OptionBool = new OptionBool("Use separate compilation", "--separate")

	redef init
	do
		super
		self.option_context.add_option(self.opt_separate)
	end
end

redef class ModelBuilder
	redef fun run_global_compiler(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis)
	do
		# Hijack the run_global_compiler to run the separate one if requested.
		if self.toolcontext.opt_separate.value then
			run_separate_compiler(mainmodule, runtime_type_analysis)
		else
			super
		end
	end

	fun run_separate_compiler(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis)
	do
		var time0 = get_time
		self.toolcontext.info("*** COMPILING TO C ***", 1)

		var compiler = new SeparateCompiler(mainmodule, runtime_type_analysis, self)
		var v = new SeparateCompilerVisitor(compiler)
		compiler.header = v
		v.add_decl("#include <stdlib.h>")
		v.add_decl("#include <stdio.h>")
		v.add_decl("#include <string.h>")
		v.add_decl("#include <gc/gc.h>")
		v.add_decl("typedef void(*nitmethod_t)(void); /* general C type representing a Nit method. */")
		v.add_decl("typedef void* nitattribute_t; /* general C type representing a Nit attribute. */")

		# Class abstract representation
		v.add_decl("struct class \{ nitmethod_t vft[1]; \}; /* general C type representing a Nit class. */")
		# Type abstract representation
		v.add_decl("struct type \{ int id; int color; int livecolor; short int is_nullable; struct vts_table *vts_table; struct fts_table *fts_table; int table_size; int type_table[1]; \}; /* general C type representing a Nit type. */")
		v.add_decl("struct fts_table \{ struct type *fts[1]; \}; /* fts list of a C type representation. */")
		v.add_decl("struct vts_table \{ struct type *vts[1]; \}; /* vts list of a C type representation. */")
		# Instance abstract representation
		v.add_decl("typedef struct \{ struct type *type; struct class *class; nitattribute_t attrs[1]; \} val; /* general C type representing a Nit instance. */")

		# Declare global instances
		v.add_decl("extern int glob_argc;")
		v.add_decl("extern char **glob_argv;")
		v.add_decl("extern val *glob_sys;")

		# The main function of the C

		v = new SeparateCompilerVisitor(compiler)
		v.add_decl("int glob_argc;")
		v.add_decl("char **glob_argv;")
		v.add_decl("val *glob_sys;")
		v.add_decl("int main(int argc, char** argv) \{")
		v.add("glob_argc = argc; glob_argv = argv;")
		var main_type = mainmodule.sys_type
		if main_type == null then return # Nothing to compile
		var glob_sys = v.init_instance(main_type)
		v.add("glob_sys = {glob_sys};")
		var main_init = mainmodule.try_get_primitive_method("init", main_type)
		if main_init != null then
			v.send(main_init, [glob_sys])
		end
		var main_method = mainmodule.try_get_primitive_method("main", main_type)
		if main_method != null then
			v.send(main_method, [glob_sys])
		end
		v.add("\}")

		# compile class structures
		for m in mainmodule.in_importation.greaters do
			for mclass in m.intro_mclasses do
				compiler.compile_class_to_c(mclass)
			end
		end

		# compile methods
		for m in mainmodule.in_importation.greaters do
			compiler.compile_module_to_c(m)
		end

		# compile live & cast type structures
		var mtypes = compiler.do_global_type_coloring
		for t in mtypes do
			compiler.compile_type_to_c(t)
		end

		# compile live generic types selection structures
		for mclass in model.mclasses do
			compiler.compile_live_gentype_to_c(mclass)
		end

		# for the class_name and output_class_name methods
		compiler.compile_class_names

		write_and_make(compiler)
	end
end

# Singleton that store the knowledge about the separate compilation process
class SeparateCompiler
	super GlobalCompiler # TODO better separation of concerns

	private var undead_types: Set[MType] = new HashSet[MType]
	protected var typeids: HashMap[MType, Int] = new HashMap[MType, Int]

	private var type_colors: Map[MType, Int] = typeids
	private var type_tables: nullable Map[MType, Array[nullable MType]] = null

	private var livetypes_colors: nullable Map[MType, Int]
	private var livetypes_tables: nullable Map[MClass, Array[nullable Object]]
	private var livetypes_tables_sizes: nullable Map[MClass, Array[Int]]

	private var class_colors: Map[MClass, Int]

	private var method_colors: Map[MMethod, Int]
	private var method_tables: Map[MClass, Array[nullable MMethodDef]]

	private var attr_colors: Map[MAttribute, Int]
	private var attr_tables: Map[MClass, Array[nullable MAttributeDef]]

	private var vt_colors: Map[MVirtualTypeProp, Int]
	private var vt_tables: Map[MClass, Array[nullable MVirtualTypeDef]]

	private var ft_colors: Map[MParameterType, Int]
	private var ft_tables: Map[MClass, Array[nullable MParameterType]]

	init(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis, mmbuilder: ModelBuilder) do
		# classes coloration
		var class_coloring = new ClassColoring(mainmodule)
		self.class_colors = class_coloring.colorize(mmbuilder.model.mclasses)

		# methods coloration
		var method_coloring = new MethodColoring(class_coloring)
		self.method_colors = method_coloring.colorize
		self.method_tables = method_coloring.build_property_tables

		# attributes coloration
		var attribute_coloring = new AttributeColoring(class_coloring)
		self.attr_colors = attribute_coloring.colorize
		self.attr_tables = attribute_coloring.build_property_tables

		# vt coloration
		var vt_coloring = new VTColoring(class_coloring)
		self.vt_colors = vt_coloring.colorize
		self.vt_tables = vt_coloring.build_property_tables

		# fts coloration
		var ft_coloring = new FTColoring(class_coloring)
		self.ft_colors = ft_coloring.colorize
		self.ft_tables = ft_coloring.build_ft_tables
	end

	private fun compile_class_names do

		# Build type names table
		var type_array = new Array[nullable MType]
		for t, i in typeids do
			if i >= type_array.length then
				type_array[i] = null
			end
			type_array[i] = t
		end

		var v = new SeparateCompilerVisitor(self)
		self.header.add_decl("extern const char const * class_names[];")
		v.add("const char const * class_names[] = \{")
		for t in type_array do
			if t == null then
				v.add("NULL,")
			else
				v.add("\"{t}\",")
			end
		end
		v.add("\};")
	end

	# colorize live types of the program
	private fun do_global_type_coloring: Set[MType] do
		var mtypes = new HashSet[MType]
		mtypes.add_all(self.runtime_type_analysis.live_types)
		mtypes.add_all(self.runtime_type_analysis.live_cast_types)
		mtypes.add_all(self.undead_types)

		self.undead_types.clear
		for mtype in mtypes do
			# add formal types arguments to mtypes
			if mtype isa MGenericType then
				for ft in mtype.arguments do
					if ft.need_anchor then
						print("Why do we need anchor here ?")
						abort
					end
					self.undead_types.add(ft)
				end
			end
			var mclass_type: MClassType
			if mtype isa MNullableType then
				mclass_type = mtype.mtype.as(MClassType)
			else
				mclass_type = mtype.as(MClassType)
			end
			# add virtual types to mtypes
			for vt in self.vt_tables[mclass_type.mclass] do
				if vt != null then
					var anchored = vt.bound.anchor_to(self.mainmodule, mclass_type)
					self.undead_types.add(anchored)
				end
			end
		end
		mtypes.add_all(self.undead_types)

		# set type unique id
		for mtype in mtypes do
			self.typeids[mtype] = self.typeids.length
		end


		# colorize live entries
		var entries_coloring = new LiveEntryColoring
		self.livetypes_colors = entries_coloring.colorize(mtypes)
		self.livetypes_tables = entries_coloring.build_livetype_tables(mtypes)
		self.livetypes_tables_sizes = entries_coloring.livetypes_tables_sizes

		# colorize types
		var type_coloring = new TypeColoring(self.mainmodule, mtypes)
		self.type_colors = type_coloring.colorize(mtypes)
		self.type_tables = type_coloring.build_type_tables(mtypes, type_colors)

		return mtypes
	end



	# declare live generic types tables selection
	private fun compile_live_gentype_to_c(mclass: MClass) do
		if mclass.arity > 0 then
			if self.livetypes_tables.has_key(mclass) then
				var table = self.livetypes_tables[mclass]
				var sign = self.livetypes_tables_sizes[mclass]
				var table_buffer = new Buffer.from("const struct type *livetypes_{mclass.c_name}[{sign.join("][")}] = \{\n")
				compile_livetype_table(table, table_buffer, 1, mclass.arity)
				table_buffer.append("\};")

				var v = new SeparateCompilerVisitor(self)
				self.header.add_decl("extern const struct type *livetypes_{mclass.c_name}[{sign.join("][")}];")
				v.add_decl(table_buffer.to_s)
			else
				var sign = new Array[Int].filled_with(0, mclass.arity)
				var v = new SeparateCompilerVisitor(self)
				self.header.add_decl("extern const struct type *livetypes_{mclass.c_name}[{sign.join("][")}];")
				v.add_decl("const struct type *livetypes_{mclass.c_name}[{sign.join("][")}];")
			end
		end
	end

	private fun compile_livetype_table(table: Array[nullable Object], buffer: Buffer, depth: Int, max: Int) do
		for obj in table do
			if obj == null then
				if depth == max then
					buffer.append("NULL,\n")
				else
					buffer.append("\{\},\n")
				end
			else if obj isa MClassType then
				buffer.append("(struct type*) &type_{obj.c_name}, /* {obj} */\n")
			else if obj isa Array[nullable Object] then
				buffer.append("\{\n")
				compile_livetype_table(obj, buffer, depth + 1, max)
				buffer.append("\},\n")
			end
		end
	end

	# Separately compile all the method definitions of the module
	fun compile_module_to_c(mmodule: MModule)
	do
		for cd in mmodule.mclassdefs do
			for pd in cd.mpropdefs do
				if not pd isa MMethodDef then continue
				#print "compile {pd} @ {cd} @ {mmodule}"
				var r = new SeparateRuntimeFunction(pd)
				r.compile_to_c(self)
				if true or cd.bound_mtype.ctype != "val*" then
					var r2 = new VirtualRuntimeFunction(pd)
					r2.compile_to_c(self)
				end
			end
		end
	end

	# Globaly compile the type structure of a live type
	fun compile_type_to_c(mtype: MType)
	do
		var c_name = mtype.c_name
		var v = new SeparateCompilerVisitor(self)
		v.add_decl("/* runtime type {mtype} */")

		var mclass_type: MClassType
		if mtype isa MNullableType then
			mclass_type = mtype.mtype.as(MClassType)
		else
			mclass_type = mtype.as(MClassType)
		end

		# extern const struct type_X
		self.header.add_decl("extern const struct type_{c_name} type_{c_name};")
		self.header.add_decl("struct type_{c_name} \{")
		self.header.add_decl("int id;")
		self.header.add_decl("int color;")
		self.header.add_decl("int livecolor;")
		self.header.add_decl("short int is_nullable;")
		self.header.add_decl("const struct vts_table_{c_name} *vts_table;")
		self.header.add_decl("const struct fts_table_{c_name} *fts_table;")
		self.header.add_decl("int table_size;")
		self.header.add_decl("int type_table[{self.type_tables[mtype].length}];")
		self.header.add_decl("\};")

		# extern const struct vts_table_X vts_table_X
		self.header.add_decl("extern const struct vts_table_{c_name} vts_table_{c_name};")
		self.header.add_decl("struct vts_table_{c_name} \{")
		self.header.add_decl("struct type *vts[{self.vt_tables[mclass_type.mclass].length}];")
		self.header.add_decl("\};")

		# extern const struct fst_table_X fst_table_X
		self.header.add_decl("extern const struct fts_table_{c_name} fts_table_{c_name};")
		self.header.add_decl("struct fts_table_{c_name} \{")
		self.header.add_decl("struct type *fts[{self.ft_tables[mclass_type.mclass].length}];")
		self.header.add_decl("\};")

		# const struct type_X
		v.add_decl("const struct type_{c_name} type_{c_name} = \{")
		v.add_decl("{self.typeids[mtype]},")
		v.add_decl("{self.type_colors[mtype]},")
		v.add_decl("{self.livetypes_colors[mtype]},")
		if mtype isa MNullableType then
			v.add_decl("1,")
		else
			v.add_decl("0,")
		end
		v.add_decl("&vts_table_{c_name},")
		v.add_decl("&fts_table_{c_name},")
		v.add_decl("{self.type_tables[mtype].length},")
		v.add_decl("\{")
		for stype in self.type_tables[mtype] do
			if stype == null then
				v.add_decl("-1, /* empty */")
			else
				v.add_decl("{self.typeids[stype]}, /* {stype} */")
			end
		end
		v.add_decl("\},")
		v.add_decl("\};")

		build_fts_table(mtype, v)
		build_vts_table(mtype, v)
	end

	# const struct fst_table_X fst_table_X
	private fun build_fts_table(mtype: MType, v: SeparateCompilerVisitor) do
		v.add_decl("const struct fts_table_{mtype.c_name} fts_table_{mtype.c_name} = \{")
		v.add_decl("\{")

		var mclass_type: MClassType
		if mtype isa MNullableType then
			mclass_type = mtype.mtype.as(MClassType)
		else
			mclass_type = mtype.as(MClassType)
		end

		for ft in self.ft_tables[mclass_type.mclass] do
			if ft == null then
				v.add_decl("NULL, /* empty */")
			else
				var ntype: MType
				if ft.mclass == mclass_type.mclass then
					ntype = mclass_type.arguments[ft.rank]
				else
					ntype = ft.anchor_to(self.mainmodule, mclass_type)
				end
				if self.typeids.has_key(ntype) then
					v.add_decl("(struct type*)&type_{ntype.c_name}, /* {ft} ({ntype}) */")
				else
					v.add_decl("NULL, /* empty ({ft} not a live type) */")
				end
			end
		end
		v.add_decl("\},")
		v.add_decl("\};")
	end

	# const struct vts_table_X vts_table_X
	private fun build_vts_table(mtype: MType, v: SeparateCompilerVisitor) do
		v.add_decl("const struct vts_table_{mtype.c_name} vts_table_{mtype.c_name} = \{")
		v.add_decl("\{")

		var mclass_type: MClassType
		if mtype isa MNullableType then
			mclass_type = mtype.mtype.as(MClassType)
		else
			mclass_type = mtype.as(MClassType)
		end

		for vt in self.vt_tables[mclass_type.mclass] do
			if vt == null then
				v.add_decl("NULL, /* empty */")
			else
				var bound = vt.bound
				if bound == null then
					#FIXME how can a bound be null here ?
					print "No bound found for virtual type {vt} ?"
					abort
				else
					var ntype = bound
					if ntype isa MNullableType then ntype = ntype.mtype
					if ntype isa MVirtualType then
						bound = ntype.anchor_to(self.mainmodule, mclass_type)
					else if ntype isa MParameterType then
						bound = ntype.anchor_to(self.mainmodule, mclass_type)
					else if ntype isa MGenericType and bound.need_anchor then
						bound = ntype.anchor_to(self.mainmodule, mclass_type)
					else if ntype isa MClassType then
					else
						print "NOT YET IMPLEMENTED: mtype_to_livetype with type: {ntype}"
						abort
					end

					if self.typeids.has_key(bound) then
						v.add_decl("(struct type*)&type_{bound.c_name}, /* {ntype} */")
					else
						v.add_decl("NULL, /* dead type {ntype} */")
					end
				end
			end
		end
		v.add_decl("\},")
		v.add_decl("\};")
	end

	# Globally compile the table of the class mclass
	# In a link-time optimisation compiler, tables are globally computed
	# In a true separate compiler (a with dynamic loading) you cannot do this unfortnally
	fun compile_class_to_c(mclass: MClass)
	do
		var mtype = mclass.intro.bound_mtype
		var c_name = mclass.c_name

		var vft = self.method_tables[mclass]
		var attrs = self.attr_tables[mclass]
		var v = new SeparateCompilerVisitor(self)

		v.add_decl("/* runtime class {c_name} */")
		var idnum = classids.length
		var idname = "ID_" + c_name
		self.classids[mtype] = idname
		#self.header.add_decl("#define {idname} {idnum} /* {c_name} */")

		self.header.add_decl("struct class_{c_name} \{")
		self.header.add_decl("nitmethod_t vft[{vft.length}];")

		if mtype.ctype != "val*" then
			# Is the Nit type is native then the struct is a box with two fields:
			# * the `vft` to be polymorph
			# * the `value` that contains the native value.
			self.header.add_decl("{mtype.ctype} value;")
		end

		# Collect all attributes and associate them a field in the structure.
		# Note: we do not try to optimize the order and helps CC to optimize the client code.
		for cd in mtype.collect_mclassdefs(self.mainmodule) do
			for p in cd.intro_mproperties do
				if not p isa MAttribute then continue
				var t = p.intro.static_mtype.as(not null)
				t = t.anchor_to(self.mainmodule, mtype)
				self.header.add_decl("{t.ctype} {p.intro.c_name}; /* {p}: {t} */")
			end
		end
		self.header.add_decl("\};")

		# Build class vft
		self.header.add_decl("extern const struct class_{c_name} class_{c_name};")
		v.add_decl("const struct class_{c_name} class_{c_name} = \{")
		v.add_decl("\{")
		for i in [0 .. vft.length[ do
			var mpropdef = vft[i]
			if mpropdef == null then
				v.add_decl("NULL, /* empty */")
			else
				if true or mpropdef.mclassdef.bound_mtype.ctype != "val*" then
					v.add_decl("(nitmethod_t)VIRTUAL_{mpropdef.c_name}, /* pointer to {mclass.intro_mmodule}:{mclass}:{mpropdef} */")
				else
					v.add_decl("(nitmethod_t){mpropdef.c_name}, /* pointer to {mclass.intro_mmodule}:{mclass}:{mpropdef} */")
				end
			end
		end
		v.add_decl("\}")
		v.add_decl("\};")

		if mtype.ctype != "val*" then
			#Build instance struct
			self.header.add_decl("struct instance_{c_name} \{")
			self.header.add_decl("const struct type *type;")
			self.header.add_decl("const struct class *class;")
			self.header.add_decl("{mtype.ctype} value;")
			self.header.add_decl("\};")

			self.header.add_decl("val* BOX_{c_name}({mtype.ctype}, struct type*);")
			v.add_decl("/* allocate {mtype} */")
			v.add_decl("val* BOX_{mtype.c_name}({mtype.ctype} value, struct type* type) \{")
			v.add("struct instance_{c_name}*res = GC_MALLOC(sizeof(struct instance_{c_name}));")
			v.add("res->type = type;")
			v.add("res->class = (struct class*) &class_{c_name};")
			v.add("res->value = value;")
			v.add("return (val*)res;")
			v.add("\}")
			return
		end

		var is_native_array = mclass.name == "NativeArray"

		var sig
		if is_native_array then
			sig = "int length, struct type* type"
		else
			sig = "struct type* type"
		end

		#Build instance struct
		#extern const struct instance_array__NativeArray instance_array__NativeArray;
		self.header.add_decl("struct instance_{c_name} \{")
		self.header.add_decl("const struct type *type;")
		self.header.add_decl("const struct class *class;")
		self.header.add_decl("nitattribute_t attrs[{attrs.length}];")
		if is_native_array then
			# NativeArrays are just a instance header followed by an array of values
			self.header.add_decl("val* values[0];")
		end
		self.header.add_decl("\};")


		self.header.add_decl("{mtype.ctype} NEW_{c_name}({sig});")
		v.add_decl("/* allocate {mtype} */")
		v.add_decl("{mtype.ctype} NEW_{c_name}({sig}) \{")
		var res = v.new_named_var(mtype, "self")
		res.is_exact = true
		if is_native_array then
			var mtype_elt = mtype.arguments.first
			v.add("{res} = GC_MALLOC(sizeof(struct instance_{c_name}) + length*sizeof({mtype_elt.ctype}));")
		else
			v.add("{res} = GC_MALLOC(sizeof(struct instance_{c_name}));")
		end
		#v.add("{res} = calloc(sizeof(struct instance_{c_name}), 1);")
		v.add("{res}->type = type;")
		v.add("{res}->class = (struct class*) &class_{c_name};")

		for cd in mtype.collect_mclassdefs(self.mainmodule)
		do
			var n = self.modelbuilder.mclassdef2nclassdef[cd]
			for npropdef in n.n_propdefs do
				if npropdef isa AAttrPropdef then
					npropdef.init_expr(v, res)
				end
			end
		end
		v.add("return {res};")
		v.add("\}")
	end
end

# The C function associated to a methoddef separately compiled
class SeparateRuntimeFunction
	super AbstractRuntimeFunction

	redef fun build_c_name: String
	do
		return "{mmethoddef.c_name}"
	end

	redef fun to_s do return self.mmethoddef.to_s

	redef fun compile_to_c(compiler)
	do
		var mmethoddef = self.mmethoddef

		var recv = self.mmethoddef.mclassdef.bound_mtype
		var v = new SeparateCompilerVisitor(compiler)
		var selfvar = new RuntimeVariable("self", recv, recv)
		var arguments = new Array[RuntimeVariable]
		var frame = new Frame(v, mmethoddef, recv, arguments)
		v.frame = frame

		var sig = new Buffer
		var comment = new Buffer
		var ret = mmethoddef.msignature.return_mtype
		if ret != null then
			ret = v.resolve_for(ret, selfvar)
			sig.append("{ret.ctype} ")
		else if mmethoddef.mproperty.is_new then
			ret = recv
			sig.append("{ret.ctype} ")
		else
			sig.append("void ")
		end
		sig.append(self.c_name)
		sig.append("({selfvar.mtype.ctype} {selfvar}")
		comment.append("(self: {selfvar}")
		arguments.add(selfvar)
		for i in [0..mmethoddef.msignature.arity[ do
			var mtype = mmethoddef.msignature.mparameters[i].mtype
			if i == mmethoddef.msignature.vararg_rank then
				mtype = v.get_class("Array").get_mtype([mtype])
			end
			mtype = v.resolve_for(mtype, selfvar)
			comment.append(", {mtype}")
			sig.append(", {mtype.ctype} p{i}")
			var argvar = new RuntimeVariable("p{i}", mtype, mtype)
			arguments.add(argvar)
		end
		sig.append(")")
		comment.append(")")
		if ret != null then
			comment.append(": {ret}")
		end
		compiler.header.add_decl("{sig};")

		v.add_decl("/* method {self} for {comment} */")
		v.add_decl("{sig} \{")
		if ret != null then
			frame.returnvar = v.new_var(ret)
		end
		frame.returnlabel = v.get_name("RET_LABEL")

		if recv != arguments.first.mtype then
			#print "{self} {recv} {arguments.first}"
		end
		mmethoddef.compile_inside_to_c(v, arguments)

		v.add("{frame.returnlabel.as(not null)}:;")
		if ret != null then
			v.add("return {frame.returnvar.as(not null)};")
		end
		v.add("\}")
	end
end

# The C function associated to a methoddef on a primitive type, stored into a VFT of a class
# The first parameter (the reciever) is always typed by val* in order to accept an object value
class VirtualRuntimeFunction
	super AbstractRuntimeFunction

	redef fun build_c_name: String
	do
		return "VIRTUAL_{mmethoddef.c_name}"
	end

	redef fun to_s do return self.mmethoddef.to_s

	redef fun compile_to_c(compiler)
	do
		var mmethoddef = self.mmethoddef

		var recv = self.mmethoddef.mclassdef.bound_mtype
		var v = new SeparateCompilerVisitor(compiler)
		var selfvar = new RuntimeVariable("self", v.object_type, recv)
		var arguments = new Array[RuntimeVariable]
		var frame = new Frame(v, mmethoddef, recv, arguments)
		v.frame = frame

		var sig = new Buffer
		var comment = new Buffer

		# Because the function is virtual, the signature must match the one of the original class
		var intromclassdef = self.mmethoddef.mproperty.intro.mclassdef
		var msignature = mmethoddef.mproperty.intro.msignature.resolve_for(intromclassdef.bound_mtype, intromclassdef.bound_mtype, intromclassdef.mmodule, true)
		var ret = msignature.return_mtype
		if ret != null then
			sig.append("{ret.ctype} ")
		else if mmethoddef.mproperty.is_new then
			ret = recv
			sig.append("{ret.ctype} ")
		else
			sig.append("void ")
		end
		sig.append(self.c_name)
		sig.append("({selfvar.mtype.ctype} {selfvar}")
		comment.append("(self: {selfvar}")
		arguments.add(selfvar)
		for i in [0..msignature.arity[ do
			var mtype = msignature.mparameters[i].mtype
			if i == msignature.vararg_rank then
				mtype = v.get_class("Array").get_mtype([mtype])
			end
			comment.append(", {mtype}")
			sig.append(", {mtype.ctype} p{i}")
			var argvar = new RuntimeVariable("p{i}", mtype, mtype)
			arguments.add(argvar)
		end
		sig.append(")")
		comment.append(")")
		if ret != null then
			comment.append(": {ret}")
		end
		compiler.header.add_decl("{sig};")

		v.add_decl("/* method {self} for {comment} */")
		v.add_decl("{sig} \{")
		if ret != null then
			frame.returnvar = v.new_var(ret)
		end
		frame.returnlabel = v.get_name("RET_LABEL")

		if recv != arguments.first.mtype then
			#print "{self} {recv} {arguments.first}"
		end
		mmethoddef.compile_inside_to_c(v, arguments)

		v.add("{frame.returnlabel.as(not null)}:;")
		if ret != null then
			v.add("return {frame.returnvar.as(not null)};")
		end
		v.add("\}")
	end

	redef fun call(v, arguments)
	do
		abort
		# TODO ?
	end
end

# A visitor on the AST of property definition that generate the C code of a separate compilation process.
class SeparateCompilerVisitor
	super GlobalCompilerVisitor # TODO better separation of concerns

	redef fun adapt_signature(m: MMethodDef, args: Array[RuntimeVariable])
	do
		var recv = args.first
		if recv.mtype.ctype != m.mclassdef.mclass.mclass_type.ctype then
			args.first = self.autobox(args.first, m.mclassdef.mclass.mclass_type)
		end
		for i in [0..m.msignature.arity[ do
			var t = m.msignature.mparameters[i].mtype
			if i == m.msignature.vararg_rank then
				t = args[i+1].mtype
			end
			t = self.resolve_for(t, recv)
			args[i+1] = self.autobox(args[i+1], t)
		end
	end

	# Box or unbox a value to another type iff a C type conversion is needed
	# ENSURE: result.mtype.ctype == mtype.ctype
	redef fun autobox(value: RuntimeVariable, mtype: MType): RuntimeVariable
	do
		if value.mtype.ctype == mtype.ctype then
			return value
		else if value.mtype.ctype == "val*" then
			return self.new_expr("((struct instance_{mtype.c_name}*){value})->value; /* autounbox from {value.mtype} to {mtype} */", mtype)
		else if mtype.ctype == "val*" then
			var valtype = value.mtype.as(MClassType)
			var res = self.new_var(mtype)
			if not compiler.runtime_type_analysis.live_types.has(valtype) then
				self.add("/*no autobox from {value.mtype} to {mtype}: {value.mtype} is not live! */")
				self.add("printf(\"Dead code executed!\\n\"); exit(1);")
				return res
			end
			var totype = value.mtype
			if totype isa MNullableType then totype = totype.mtype
			self.add("{res} = BOX_{valtype.c_name}({value}, (struct type*) &type_{totype.c_name}); /* autobox from {value.mtype} to {mtype} */")
			return res
		else
			# Bad things will appen!
			var res = self.new_var(mtype)
			self.add("/* {res} left unintialized (cannot convert {value.mtype} to {mtype}) */")
			self.add("printf(\"Cast error: Cannot cast %s to %s.\\n\", \"{value.mtype}\", \"{mtype}\"); exit(1);")
			return res
		end
	end

	redef fun send(mmethod, arguments)
	do
		if arguments.first.mtype.ctype != "val*" then
			assert arguments.first.mtype == arguments.first.mcasttype
			return self.monomorphic_send(mmethod, arguments.first.mtype, arguments)
		end

		var res: nullable RuntimeVariable
		var msignature = mmethod.intro.msignature.resolve_for(mmethod.intro.mclassdef.bound_mtype, mmethod.intro.mclassdef.bound_mtype, mmethod.intro.mclassdef.mmodule, true)
		var ret = msignature.return_mtype
		if mmethod.is_new then
			ret = arguments.first.mtype
			res = self.new_var(ret)
		else if ret == null then
			res = null
		else
			ret = self.resolve_for(ret, arguments.first)
			res = self.new_var(ret)
		end

		var s = new Buffer
		var ss = new Buffer

		var recv = arguments.first
		s.append("val*")
		ss.append("{recv}")
		self.varargize(msignature, arguments)
		for i in [0..msignature.arity[ do
			var a = arguments[i+1]
			var t = msignature.mparameters[i].mtype
			if i == msignature.vararg_rank then
				t = arguments[i+1].mcasttype
			end
			s.append(", {t.ctype}")
			a = self.autobox(a, t)
			ss.append(", {a}")
		end

		var maybenull = recv.mcasttype isa MNullableType
		if maybenull then
			self.add("if ({recv} == NULL) \{")
			if mmethod.name == "==" then
				assert res != null
				var arg = arguments[1]
				if arg.mcasttype isa MNullableType then
					self.add("{res} = ({arg} == NULL);")
				else if arg.mcasttype isa MNullType then
					self.add("{res} = 1; /* is null */")
				else
					self.add("{res} = 0; /* {arg.inspect} cannot be null */")
				end
			else if mmethod.name == "!=" then
				assert res != null
				var arg = arguments[1]
				if arg.mcasttype isa MNullableType then
					self.add("{res} = ({arg} != NULL);")
				else if arg.mcasttype isa MNullType then
					self.add("{res} = 0; /* is null */")
				else
					self.add("{res} = 1; /* {arg.inspect} cannot be null */")
				end
			else
				self.add_abort("Reciever is null")
			end
			self.add("\} else \{")
		end

		var color = self.compiler.as(SeparateCompiler).method_colors[mmethod]
		var r
		if ret == null then r = "void" else r = ret.ctype
		var call = "(({r} (*)({s}))({arguments.first}->class->vft[{color}]))({ss}) /* {mmethod} on {arguments.first.inspect}*/"

		if res != null then
			self.add("{res} = {call};")
		else
			self.add("{call};")
		end

		if maybenull then
			self.add("\}")
		end

		return res
	end

	redef fun call(mmethoddef, recvtype, arguments)
	do
		var res: nullable RuntimeVariable
		var ret = mmethoddef.msignature.return_mtype
		if mmethoddef.mproperty.is_new then
			ret = arguments.first.mtype
			res = self.new_var(ret)
		else if ret == null then
			res = null
		else
			ret = self.resolve_for(ret, arguments.first)
			res = self.new_var(ret)
		end

		# Autobox arguments
		self.adapt_signature(mmethoddef, arguments)

		if res == null then
			self.add("{mmethoddef.c_name}({arguments.join(", ")});")
			return null
		else
			self.add("{res} = {mmethoddef.c_name}({arguments.join(", ")});")
		end

		return res
	end

	redef fun isset_attribute(a, recv)
	do
		# FIXME: Here we inconditionally return boxed primitive attributes
		var res = self.new_var(bool_type)
		self.add("{res} = {recv}->attrs[{self.compiler.as(SeparateCompiler).attr_colors[a]}] != NULL; /* {a} on {recv.inspect}*/")
		return res
	end

	redef fun read_attribute(a, recv)
	do
		# FIXME: Here we inconditionally return boxed primitive attributes
		var ret = a.intro.static_mtype.as(not null)
		ret = self.resolve_for(ret, recv)
		var cret = self.object_type.as_nullable
		var res = self.new_var(cret)
		res.mcasttype = ret
		self.add("{res} = {recv}->attrs[{self.compiler.as(SeparateCompiler).attr_colors[a]}]; /* {a} on {recv.inspect} */")
		if not ret isa MNullableType then
			self.add("if ({res} == NULL) \{")
			self.add_abort("Uninitialized attribute {a.name}")
			self.add("\}")
		end

		return res
	end

	redef fun write_attribute(a, recv, value)
	do
		# FIXME: Here we inconditionally box primitive attributes
		value = self.autobox(value, self.object_type.as_nullable)
		self.add("{recv}->attrs[{self.compiler.as(SeparateCompiler).attr_colors[a]}] = {value}; /* {a} on {recv.inspect} */")
	end

	# Build livetype structure retrieving
	#ENSURE: mtype.need_anchor
	fun retrieve_anchored_livetype(mtype: MGenericType, buffer: Buffer) do
		assert mtype.need_anchor
		var compiler = self.compiler.as(SeparateCompiler)
		for ft in mtype.arguments do

			var ntype = ft
			var s: String = ""
			if ntype isa MNullableType then
				ntype = ntype.mtype
			end

			if ntype isa MParameterType then
				var ftcolor = compiler.ft_colors[ntype]
				buffer.append("[self->type->fts_table->fts[{ftcolor}]->livecolor]")
			else if ntype isa MVirtualType then
				var vtcolor = compiler.vt_colors[ntype.mproperty.as(MVirtualTypeProp)]
				buffer.append("[self->type->vts_table->vts[{vtcolor}]->livecolor]")
			else if ntype isa MGenericType and ntype.need_anchor then
				var bbuff = new Buffer
				retrieve_anchored_livetype(ntype, bbuff)
				buffer.append("[livetypes_{ntype.mclass.c_name}{bbuff.to_s}->livecolor]")
			else if ntype isa MClassType then
				buffer.append("[type_{ft.c_name}.livecolor]")
			else
				self.add("printf(\"NOT YET IMPLEMENTED: init_instance(%s, {mtype}).\\n\", \"{ft}\"); exit(1);")
			end
		end
	end

	redef fun init_instance(mtype)
	do
		var compiler = self.compiler.as(SeparateCompiler)
		if mtype isa MGenericType and mtype.need_anchor then
			var buff = new Buffer
			retrieve_anchored_livetype(mtype, buff)
			mtype = self.anchor(mtype).as(MClassType)
			return self.new_expr("NEW_{mtype.mclass.c_name}((struct type *) livetypes_{mtype.mclass.c_name}{buff.to_s})", mtype)
		end
		compiler.undead_types.add(mtype)
		return self.new_expr("NEW_{mtype.mclass.c_name}((struct type *) &type_{mtype.c_name})", mtype)
	end

	redef fun type_test(value, mtype)
	do
		var compiler = self.compiler.as(SeparateCompiler)
		var res = self.new_var(bool_type)

		var cltype = self.get_name("cltype")
		self.add_decl("short int {cltype};")
		var idtype = self.get_name("idtype")
		self.add_decl("short int {idtype};")
		var is_nullable = self.get_name("is_nullable")
		self.add_decl("short int {is_nullable};")

		var boxed = self.autobox(value, self.object_type)

		var ntype = mtype
		var s: String = ""
		if ntype isa MNullableType then
			ntype = ntype.mtype
		end

		if ntype isa MParameterType then
			var ftcolor = compiler.ft_colors[ntype]
			self.add("{cltype} = self->type->fts_table->fts[{ftcolor}]->color;")
			self.add("{idtype} = self->type->fts_table->fts[{ftcolor}]->id;")
			self.add("{is_nullable} = self->type->fts_table->fts[{ftcolor}]->is_nullable;")
		else if ntype isa MGenericType and ntype.need_anchor then
			var buff = new Buffer
			retrieve_anchored_livetype(ntype, buff)
			self.add("{cltype} = livetypes_{ntype.mclass.c_name}{buff.to_s}->color;")
			self.add("{idtype} = livetypes_{ntype.mclass.c_name}{buff.to_s}->id;")
			self.add("{is_nullable} = livetypes_{ntype.mclass.c_name}{buff.to_s}->is_nullable;")
		else if ntype isa MClassType then
			compiler.undead_types.add(mtype)
			self.add("{cltype} = type_{mtype.c_name}.color;")
			self.add("{idtype} = type_{mtype.c_name}.id;")
			self.add("{is_nullable} = type_{mtype.c_name}.is_nullable;")
		else if ntype isa MVirtualType then
			var vtcolor = compiler.vt_colors[ntype.mproperty.as(MVirtualTypeProp)]
			self.add("{cltype} = self->type->vts_table->vts[{vtcolor}]->color;")
			self.add("{idtype} = self->type->vts_table->vts[{vtcolor}]->id;")
			self.add("{is_nullable} = self->type->vts_table->vts[{vtcolor}]->is_nullable;")
		else
			self.add("printf(\"NOT YET IMPLEMENTED: type_test(%s, {mtype}).\\n\", \"{boxed.inspect}\"); exit(1);")
		end

		# check color is in table
		self.add("if({boxed} == NULL) \{")
		self.add("{res} = {is_nullable};")
		self.add("\} else \{")
		self.add("if({cltype} >= {boxed}->type->table_size) \{")
		self.add("{res} = 0;")
		self.add("\} else \{")
		self.add("{res} = {boxed}->type->type_table[{cltype}] == {idtype};")
		self.add("\}")
		self.add("\}")

		return res
	end

	redef fun is_same_type_test(value1, value2)
	do
		var res = self.new_var(bool_type)
		# Swap values to be symetric
		if value2.mtype.ctype != "val*" and value1.mtype.ctype == "val*" then
			var tmp = value1
			value1 = value2
			value2 = tmp
		end
		if value1.mtype.ctype != "val*" then
			if value2.mtype.ctype == value1.mtype.ctype then
				self.add("{res} = 1; /* is_same_type_test: compatible types {value1.mtype} vs. {value2.mtype} */")
			else if value2.mtype.ctype != "val*" then
				self.add("{res} = 0; /* is_same_type_test: incompatible types {value1.mtype} vs. {value2.mtype}*/")
			else
				var mtype1 = value1.mtype.as(MClassType)
				self.add("{res} = ({value2} != NULL) && ({value2}->class == (struct class*) &class_{mtype1.c_name}); /* is_same_type_test */")
			end
		else
			self.add("{res} = ({value1} == {value2}) || ({value1} != NULL && {value2} != NULL && {value1}->class == {value2}->class); /* is_same_type_test */")
		end
		return res
	end

	redef fun class_name_string(value1)
	do
		var res = self.get_name("var_class_name")
		self.add_decl("const char* {res} = class_names[self->type->id];")
		return res
	end

	redef fun equal_test(value1, value2)
	do
		var res = self.new_var(bool_type)
		if value2.mtype.ctype != "val*" and value1.mtype.ctype == "val*" then
			var tmp = value1
			value1 = value2
			value2 = tmp
		end
		if value1.mtype.ctype != "val*" then
			if value2.mtype.ctype == value1.mtype.ctype then
				self.add("{res} = {value1} == {value2};")
			else if value2.mtype.ctype != "val*" then
				self.add("{res} = 0; /* incompatible types {value1.mtype} vs. {value2.mtype}*/")
			else
				var mtype1 = value1.mtype.as(MClassType)
				self.add("{res} = ({value2} != NULL) && ({value2}->class == (struct class*) &class_{mtype1.c_name});")
				self.add("if ({res}) \{")
				self.add("{res} = ({self.autobox(value2, value1.mtype)} == {value1});")
				self.add("\}")
			end
		else
			var s = new Array[String]
			# This is just ugly on so many level. this works but must be rewriten
			for t in self.compiler.live_primitive_types do
				if not t.is_subtype(self.compiler.mainmodule, null, value1.mcasttype) then continue
				if not t.is_subtype(self.compiler.mainmodule, null, value2.mcasttype) then continue
				s.add "({value1}->class == (struct class*)&class_{t.c_name} && ((struct instance_{t.c_name}*){value1})->value == ((struct instance_{t.c_name}*){value2})->value)"
			end
			if s.is_empty then
				self.add("{res} = {value1} == {value2};")
			else
				self.add("{res} = {value1} == {value2} || ({value1} != NULL && {value2} != NULL && {value1}->class == {value2}->class && ({s.join(" || ")}));")
			end
		end
		return res
	end

	redef fun array_instance(array, elttype)
	do
		var compiler = self.compiler.as(SeparateCompiler)
		var nclass = self.get_class("NativeArray")
		elttype = self.anchor(elttype)
		var arraytype = self.get_class("Array").get_mtype([elttype])
		var res = self.init_instance(arraytype)
		self.add("\{ /* {res} = array_instance Array[{elttype}] */")
		var nat = self.new_var(self.get_class("NativeArray").get_mtype([elttype]))
		nat.is_exact = true
		compiler.undead_types.add(nat.mtype.as(MClassType))
		self.add("{nat} = NEW_{nclass.c_name}({array.length}, (struct type *) &type_{nat.mtype.c_name});")
		for i in [0..array.length[ do
			var r = self.autobox(array[i], self.object_type)
			self.add("((struct instance_{nclass.c_name}*){nat})->values[{i}] = (val*) {r};")
		end
		var length = self.int_instance(array.length)
		self.send(self.get_property("with_native", arraytype), [res, nat, length])
		self.check_init_instance(res)
		self.add("\}")
		return res
	end

	redef fun native_array_def(pname, ret_type, arguments)
	do
		var elttype = arguments.first.mtype
		var nclass = self.get_class("NativeArray")
		var recv = "((struct instance_{nclass.c_name}*){arguments[0]})->values"
		if pname == "[]" then
			self.ret(self.new_expr("{recv}[{arguments[1]}]", ret_type.as(not null)))
			return
		else if pname == "[]=" then
			self.add("{recv}[{arguments[1]}]={arguments[2]};")
			return
		else if pname == "copy_to" then
			var recv1 = "((struct instance_{nclass.c_name}*){arguments[1]})->values"
			self.add("memcpy({recv1}, {recv}, {arguments[2]}*sizeof({elttype.ctype}));")
			return
		end
	end

	redef fun calloc_array(ret_type, arguments)
	do
		var ret = ret_type.as(MClassType)
		var compiler = self.compiler.as(SeparateCompiler)
		compiler.undead_types.add(ret)
		self.ret(self.new_expr("NEW_{ret.mclass.c_name}({arguments[1]}, (struct type*) &type_{ret_type.c_name})", ret_type))
	end
end

redef class MClass
	# Return the name of the C structure associated to a Nit class
	fun c_name: String do
		var res = self.c_name_cache
		if res != null then return res
		res = "{intro_mmodule.name.to_cmangle}__{name.to_cmangle}"
		self.c_name_cache = res
		return res
	end
	private var c_name_cache: nullable String
end
