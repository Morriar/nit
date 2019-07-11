import json
import json::static
import template

class ApiMap

	fun run do
		var files = new HashMap[String, String]
		files["User"] = "contrib/api_map/examples/user.json"
		files["Issue"] = "contrib/api_map/examples/issue.json"

		var model = new ApiModel
		var mod = new ApiModule("test", ["json"])
		model.modules[mod.name] = mod

		for name, file in files do
			var json = file.to_path.read_all.parse_json
			if json isa JsonObject then
				var cls = gen_class(name, json)
				model.classes[name] = cls
				mod.classes.add cls
			end
		end

		model.resolve_types

		print mod.write_to_string
		mod.write_to_file("test.nit")
		sys.system "nitc test.nit -o test"
		sys.system "./test"
	end

	fun gen_class(name: String, schema: JsonObject): ApiClass do
		print schema
		var cls = new ApiClass(name, serializable = true)

		for k, v in schema do
			# TODO add comments
			var atype = if v == null then "Object" else v.class_name
			cls.attributes.add new ApiAttr(k, atype, "null", ["optional", "writable"])
			# TODO options
		end

		return cls
	end
end

class ApiModel
	var modules = new HashMap[String, ApiModule]
	var classes = new HashMap[String, ApiClass]

	var types_map: Map[String, String] do
		var map = new HashMap[String, String]
		map["ASCIIFlatString"] = "String"
		return map
	end

	var keywords_map: Map[String, String] do
		var map = new HashMap[String, String]
		map["type"] = "type_"
		return map
	end

	fun finalize do
		resolve_types
	end

	fun resolve_types do
		for name, cls in classes do
			cls.resolve_types(self)
		end
	end
end

class ApiModule
	super Template

	var name: String
	var imports = new Array[String] is optional
	var classes = new Array[ApiClass] is optional

	redef fun rendering do
		addn "module {name}"
		addn ""
		for parent in imports do
			addn "import {parent}"
		end
		for cls in classes do
			addn ""
			addn cls
		end
	end
end

class ApiClass
	super Template

	var name: String
	var parents = new Array[String] is optional
	var serializable: Bool = false is optional
	var attributes = new Array[ApiAttr] is optional

	fun resolve_types(model: ApiModel) do
		for attr in attributes do
			attr.resolve_type(model, self)
		end
	end

	redef fun rendering do
		addn "class {name}"
		for parent in parents do
			addn "\tsuper {parent}"
		end
		if serializable then
			addn "\tserialize"
		end
		for attr in attributes do
			addn ""
			addn attr
		end
		add "end"
	end
end

class ApiAttr
	super Template

	var name: String
	var static_type: String
	var default_value: nullable String = null is optional
	var annots = new Array[String] is optional

	redef fun rendering do
		# TODO add comments
		add "\tvar {name}: {static_type}"
		if default_value != null then
			add " = {default_value.as(not null)}"
		end
		if annots.not_empty then
			add " is {annots.join(", ")}"
		end
	end

	fun compile_name(model: ApiModel): String do
		if model.keywords_map.has_key(name) then
			name = model.keywords_map[name]
		end
		return name
	end


	fun resolve_type(model: ApiModel, cls: ApiClass) do
		var name = self.static_type

		if name == "JsonObject" then
			name = "TODO"
			# TODO link list from opts
			# TODO field name heuristic
			# TODO object heuristic
		end

		if name == "JsonArray" then
			name = "Array[TODO]"
			# TODO for each object heuristics
		end

		if model.types_map.has_key(name) then
			name = model.types_map[name]
		end

		self.static_type = "nullable {name}"
		self.name = compile_name(model) # TODO move
	end
end

var map = new ApiMap
map.run
