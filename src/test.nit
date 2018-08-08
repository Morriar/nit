# import doc::down

# import model_collect
# import index_phase
import mdoc_phase

var toolcontext = new ToolContext
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)

# var mpackages = model.collect_mmodules
var mpackages = model.index.find_by_name("popcorn")
for mpackage in mpackages do
	print mpackage.mentity.mdoc_or_fallback.mdoc_synopsis or else "NULL"
	# var mdoc = mpackage.mdoc_or_fallback
	# if mdoc == null then
		# print "{mpackage}: NULL"
	# else
		# print "{mpackage}: {mdoc.mdoc_synopsis or else "NULL"}"
	# end
end
