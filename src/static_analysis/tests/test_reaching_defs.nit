import test_phase
import frontend
import reaching_defs

redef class ToolContext
	var opt_noimport = new OptionBool("do not analyze imported modules", "--no-import")
	var opt_nointer = new OptionBool("do not perform inter-procedural analysis", "--no-inter")

	redef init do
		super
		self.option_context.add_option(opt_noimport, opt_nointer)
	end
end

redef fun do_work(mainmodule, given_mmodules, modelbuilder)
do
	var toolcontext = modelbuilder.toolcontext
	var model = modelbuilder.model
	var analysis = new ReachingDefsAnalysis(modelbuilder)
	if toolcontext.opt_nointer.value then analysis.no_inter = true

	if toolcontext.opt_noimport.value then
		var nmainmodule = modelbuilder.mmodule2nmodule[mainmodule]
		analysis.start_analysis(nmainmodule)
	else
		for mmodule in model.mmodules do
			if not modelbuilder.mmodule2nmodule.has_key(mmodule) then continue
			var nmodule = modelbuilder.mmodule2nmodule[mmodule]
			analysis.start_analysis(nmodule)
		end
	end
	analysis.pretty_print
end
