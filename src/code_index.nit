import frontend
import vsm
import parser_util

redef class ToolContext

	var code_index_phase: Phase = new CodeIndexPhase(self, [typing_phase])

	var code_index = new CodeIndex
end

# Phase that builds the model and wait for http request to serve pages.
private class CodeIndexPhase
	super Phase

	redef fun process_nmodule(nmodule) do
	end

	redef fun process_nclassdef(nclassdef) do
	end

	redef fun process_npropdef(npropdef) do
		var mpropdef = npropdef.mpropdef
		if mpropdef == null then return

		toolcontext.code_index.index_mentity_code(mpropdef, npropdef)
	end
end

class CodeIndex
	super VSMIndex

	fun index_mentity_code(mentity: MEntity, code: ANode): Document do
		print mentity
		var terms = code_vector(code)
		print terms
		var doc = new Document(mentity.full_name, mentity.location.to_s, terms)
		index_document doc
		return doc
	end

	fun code_vector(code: ANode): Vector do
		var v = new IndexVisitor
		v.enter_visit(code)
		return v.vector
	end

	fun match_code(code: ANode): Array[IndexMatch] do
		var vector = code_vector(code)
		print vector
		return match_vector(vector)
	end
end

class IndexVisitor
	super Visitor

	var vector = new Vector

	redef fun visit(node) do
		node.accept_index_visitor(self)
	end
end

redef class ANode
	fun accept_index_visitor(v: IndexVisitor) do
		print self.class_name
		self.visit_all v
	end
end

redef class ASendExpr
	redef fun accept_index_visitor(v) do
		var callsite = self.callsite
		print callsite or else "NULL"
		if callsite != null then
			print callsite
			v.vector[callsite.mpropdef.mproperty.full_name] += 1.0
		end
		super
	end
end

# build toolcontext
var toolcontext = new ToolContext
var tpl = new Template
tpl.add "Usage: nitweb [OPTION]... <file.nit>...\n"
tpl.add "Run a webserver based on nitcorn that serves pages about model."
toolcontext.tooldescription = tpl.write_to_string

# process options
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

# process
if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)

var q1 = """
var array = [1, 2, 3, 4]
for a in array do
	print a
end
"""

var q2 = """
import test

var a = new A
a.foo
"""

var q = q2

var node = toolcontext.parse_module(q)
print node.class_name

print "Query:"
print "~~~"
print q
print "~~~"

print "Matches:"
for match in toolcontext.code_index.match_code(node) do
	print match
end
