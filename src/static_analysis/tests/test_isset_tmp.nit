import test_phase
import frontend
import isset_checks_analysis_removal

redef class ToolContext
	var opt_noimport = new OptionBool("do not analyze imported modules", "--no-import")
	var opt_nointer = new OptionBool("do not perform inter-procedural analysis", "--no-inter")
	var opt_nogetget = new OptionBool("do not generate definition on get following the same get", "--no-getget")
	var opt_novarinit = new OptionBool("do not use variable declarations with initial values", "--no-varinit")

	redef init do
		super
		self.option_context.add_option(opt_noimport, opt_nointer, opt_nogetget, opt_novarinit)
	end
end

redef fun do_work(mainmodule, given_mmodules, modelbuilder)
do
	var toolcontext = modelbuilder.toolcontext
	var model = modelbuilder.model

	var rta = new RapidTypeAnalysis(modelbuilder, mainmodule)
	rta.run_analysis

	var analysis = new IssetCheckAnalysis(rta)
	if toolcontext.opt_nointer.value then analysis.no_inter = true
	if toolcontext.opt_nogetget.value then analysis.no_getget = true
	if toolcontext.opt_novarinit.value then analysis.no_varinit = true

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
