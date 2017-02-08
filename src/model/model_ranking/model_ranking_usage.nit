# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# TOC generation approaches based on module/type/method usage.
#
# TODO usage in documentation and examples
module model_ranking_usage

import model_ranking_base
import semantize::typing

# Weight concerns based on the number of usage inside the concern.
class UsageRanker
	super ModelRanker

	# Modelbuilder to find AST nodes
	var modelbuilder: ModelBuilder

	redef fun rank_mmodule(mmodule) do
		var nmodule = modelbuilder.mmodule2node(mmodule)
		if nmodule == null then return 0.0
		var visitor = new ModuleUsageVisitor(self, mmodule)
		visitor.enter_visit(nmodule)
		return visitor.rank
	end

	redef fun rank_mclassdef(mclassdef) do
		var nclassdef = modelbuilder.mclassdef2node(mclassdef)
		if nclassdef == null then return 0.0
		var visitor = new ClassUsageVisitor(self, mclassdef)
		visitor.enter_visit(nclassdef)
		return visitor.rank
	end

	redef fun rank_mpropdef(mpropdef) do
		var npropdef = modelbuilder.mpropdef2node(mpropdef)
		if npropdef == null then return 0.0
		var visitor = new CallUsageVisitor(self, mpropdef)
		visitor.enter_visit(npropdef)
		return visitor.rank
	end
end

# Weight module based on the number of import clauses
private class ModuleUsageVisitor
	super Visitor

	var ranker: UsageRanker

	var mmodule: MModule

	var rank = 0.0

	redef fun visit(n)
	do
		if n isa AStdImport then
			visit_import(n)
		else if n isa AType then
			visit_type(n)
		end
		n.visit_all(self)
	end

	fun visit_import(n: AStdImport) do
		# if ranker.toolcontext.opt_usage_no_imports.value then return
		var mod = n.mmodule
		if mod != null then rank += 1.0
	end

	fun visit_type(n: AType) do
		# if ranker.toolcontext.opt_usage_no_types.value then return
		var mtype = n.mtype
		if mtype == null then return
		if mtype isa MNullableType then mtype = mtype.mtype
		if not mtype isa MClassType then return
		var mmodule = mtype.mclass.intro.mmodule
		if mmodule == self.mmodule then return
		rank += 1.0
	end
end

# Weight classes based on the number of type references
private class ClassUsageVisitor
	super Visitor

	var ranker: UsageRanker

	var mclassdef: MClassDef

	var rank = 0.0

	redef fun visit(n) do
		if n isa ANewExpr then
			visit_new(n)
			visit_expr(n)
		else if n isa AExpr then
			visit_expr(n)
		else if n isa AType then
			visit_type(n)
		end
		n.visit_all(self)
	end

	fun visit_new(n: ANewExpr) do
		# if ranker.toolcontext.opt_usage_no_news.value then return
		increment_mtype(n.n_type.mtype)
	end

	fun visit_expr(n: AExpr) do
		# if ranker.toolcontext.opt_usage_no_exprs.value then return
		increment_mtype(n.mtype)
	end


	fun visit_type(n: AType) do
		# if ranker.toolcontext.opt_usage_no_types.value then return
		increment_mtype(n.mtype)
	end

	fun increment_mtype(mtype: nullable MType) do
		if mtype == null then return
		if mtype isa MNullableType then mtype = mtype.mtype
		if not mtype isa MClassType then return
		var mclass = mtype.mclass
		if mclass == self.mclassdef.mclass then return
		rank += 1.0
	end
end

private class CallUsageVisitor
	super Visitor

	var ranker: UsageRanker

	var mpropdef: MPropDef

	var rank = 0.0

	redef fun visit(n) do
		if n isa ACallExpr then
			var callsite = n.callsite
			if callsite != null then
				rank += 1.0
			end
		end
		n.visit_all(self)
	end
end
