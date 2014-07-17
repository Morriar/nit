module test_analysis

import test_phase
import frontend
#import ast_printer
#import static_analysis
#import useless_nullables_analysis
import unused_properties_analysis

redef class ToolContext
	var opt_noimport = new OptionBool("do not analyze imported modules", "--no-import")
	var opt_nointer = new OptionBool("do not perform inter-procedural analysis", "--no-inter")
	#var opt_nogetget = new OptionBool("do not generate definition on get following the same get", "--no-getget")

	redef init do
		super
		#self.option_context.add_option(opt_noimport, opt_nointer, opt_nogetget)
		self.option_context.add_option(opt_noimport, opt_nointer)
	end
end

redef fun do_work(mainmodule, given_mmodules, modelbuilder)
do
	var toolcontext = modelbuilder.toolcontext
	var model = modelbuilder.model

	# we need rta to find live callsite
	var rta = new RapidTypeAnalysis(modelbuilder, mainmodule)
	rta.run_analysis

	# set analysis options
	var analysis = new UnusedPropertiesAnalysis(rta)
	#if toolcontext.opt_nointer.value then isset_analysis.no_inter = true
	#if toolcontext.opt_nogetget.value then isset_analysis.no_getget = true

	if toolcontext.opt_noimport.value then
		var nmainmodule = modelbuilder.mmodule2nmodule[mainmodule]
		analysis.start_analysis(nmainmodule)
		#print nmainmodule.pretty_print
	else
		for mmodule in model.mmodules do
			if not modelbuilder.mmodule2nmodule.has_key(mmodule) then continue
			# we need the module source to perform the analysis
			var nmodule = modelbuilder.mmodule2nmodule[mmodule]
			analysis.start_analysis(nmodule)
		end
	end
	analysis.pretty_print
end

#TODO
# implement ud/du chains
# never accessed private properties
# never read local var
# isset checks removal
# finir report
