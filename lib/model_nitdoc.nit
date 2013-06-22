module model_nitdoc

import modelbuilder
import exprbuilder
import abstract_compiler


abstract class AModelNitdoc

	var toolcontext = new ToolContext
	var model = new Model
	var modelbuilder: ModelBuilder
	private var arguments: Array[String]
	private var program: nullable String
	private var main: nullable MModule
	var modules: nullable Array[MModule]

	init do
		toolcontext.process_options
		modelbuilder = new ModelBuilder(model, toolcontext)
		arguments = toolcontext.option_context.rest
		if arguments.is_empty or toolcontext.opt_help.value then
			toolcontext.option_context.usage
			return
		end
		program = arguments.first
		modules = new Array[MModule]
	end
	
	# Return all modules included in the program
	fun get_modules: Array[MModule] do
		modules = modelbuilder.parse_and_build([program.as(not null)])
		modelbuilder.full_propdef_semantic_analysis
		return modules.as(not null)
	end

	fun process do
		if self.program is null then return
	end

	# Return all classes and their properties
	fun l_mclasses(mmodule: MModule): HashMap[MClass, Set[MProperty]] do
		var mclasses = new HashMap[MClass, Set[MProperty]]
		for mclassdef in mmodule.mclassdefs do mclasses[mclassdef.mclass] = mmodule.properties(mclassdef.mclass)
		return mclasses
	end

end

redef class MClass

	# All parents of classdef
	fun parents: HashSet[MClass] do
		var l_parents = new HashSet[MClass]
		for mclassdef in self.mclassdefs
		do
			for parent in mclassdef.in_hierarchy.greaters
			do
				if parent is mclassdef or l_parents.has(parent.mclass) then continue
				l_parents.add(parent.mclass)
			end
		end
		return l_parents
	end

	# All subclasses of classdef
	fun sub_classes: HashSet[MClass] do
		var l_sub_classes = new HashSet[MClass]
		for mclassdef in self.mclassdefs
		do
			for sub in mclassdef.in_hierarchy.smallers
			do
				if sub is mclassdef or l_sub_classes.has(sub.mclass) then continue
				l_sub_classes.add(sub.mclass)
			end
		end
		return l_sub_classes
	end

	# Return in which MModule classdef is refine
	fun refineds(mmodule: MModule): HashSet[MModule] do
		var l_refineds = new HashSet[MModule]
		mmodule.linearize_mclassdefs(self.mclassdefs)
		for refine in mclassdefs
		do
			if refine is self.mclassdefs.first then continue
			l_refineds.add(refine.mmodule)
		end
		return l_refineds
	end
end

redef class MProperty
	fun local_class: MClass do
		var classdef = self.intro_mclassdef
		return classdef.mclass
	end
end

redef class TComment
	# Delete comment char of text
	fun text_nitdoc: String do return text.replace("#", " ")
end

redef class AClassdef
	
	# Return all constructors in self
	fun get_constructors: HashMap[MProperty, APropdef] do
		var l_constructors = new HashMap[MProperty, APropdef]
		for mproperty, apropdef in self.mprop2npropdef
		do
			if mproperty isa MMethod then
				var mmethod: MMethod = mproperty
				if mmethod.is_init then l_constructors[mproperty] = apropdef
			end
		end
		return l_constructors
	end

	# Return all methods in self
	fun get_methods: HashMap[MProperty, APropdef] do
		var l_methods = new HashMap[MProperty, APropdef]
		for mproperty, apropdef in self.mprop2npropdef
		do
			if not get_constructors.has_key(mproperty) then l_methods[mproperty] = apropdef
		end
		return l_methods
	end
end
