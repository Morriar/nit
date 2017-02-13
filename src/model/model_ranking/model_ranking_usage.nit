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
import model_views
import counter

# Weight concerns based on the number of usage inside the concern.
class UsageRanker
	super ModelRanker

	# View to find modules
	var view: ModelView

	# Modelbuilder to find AST nodes
	var modelbuilder: ModelBuilder

	# Count all kind of usage or only imports, news and calls
	var all_usages: Bool

	# Usage visitor to collect things
	private var visitor = new UsageVisitor(self)

	init do
		for mmodule in view.mmodules do
			var nmodule = modelbuilder.mmodule2node(mmodule)
			visitor.enter_visit(nmodule)
		end
	end

	redef fun rank_mpackage(mpackage) do
		var res = 0.0
		for mgroup in mpackage.mgroups do
			for mmodule in mgroup.mmodules do
				res += rank_mmodule(mmodule)
			end
		end
		return res
	end

	redef fun rank_mmodule(mmodule) do
		if all_usages then
			return visitor.mmodule_uses[mmodule].to_f
		end
		return visitor.mmodule_imports[mmodule].to_f
	end

	redef fun rank_mclass(mclass) do
		if all_usages then
			return visitor.mclass_uses[mclass].to_f
		end
		return visitor.mclass_news[mclass].to_f
	end

	redef fun rank_mclassdef(mclassdef) do return rank_mclass(mclassdef.mclass)

	redef fun rank_mproperty(mprop) do
		if all_usages then
			return visitor.mprop_uses[mprop].to_f
		end
		return visitor.mprop_calls[mprop].to_f
	end

	redef fun rank_mpropdef(mpropdef) do return rank_mproperty(mpropdef.mproperty)
end

#
private class UsageVisitor
	super Visitor

	var ranker: UsageRanker

	# all modules usages
	var mmodule_uses = new Counter[MModule]

	# nb times a module is imported
	var mmodule_imports = new Counter[MModule]

	# all classes usages
	var mclass_uses = new Counter[MClass]

	# nb times a class is newed
	var mclass_news = new Counter[MClass]

	# all mprop uses
	var mprop_uses = new Counter[MProperty]

	# nb times a prop is called
	var mprop_calls = new Counter[MProperty]

	fun get_mclass(mtype: nullable MType): nullable MClass do
		if mtype == null then return null
		if mtype isa MNullableType then mtype = mtype.mtype
		if not mtype isa MClassType then return null
		return mtype.mclass
	end

	redef fun visit(n) do
		n.accept_usage_visit(self)
		n.visit_all(self)
	end
end

redef class ANode
	private fun accept_usage_visit(v: UsageVisitor) do visit_all(v)
end

redef class AExpr
	redef fun accept_usage_visit(v) do
		var mclass = v.get_mclass(mtype)
		if mclass == null then return
		v.mclass_uses.inc(mclass)
		# TODO inc modules
	end
end

redef class AStdImport
	redef fun accept_usage_visit(v) do
		var mmodule = self.mmodule
		if mmodule == null then return
		v.mmodule_imports.inc(mmodule)
		v.mmodule_uses.inc(mmodule)
	end
end

redef class ANewExpr
	redef fun accept_usage_visit(v) do
		var mclass = v.get_mclass(n_type.mtype)
		if mclass == null then return
		v.mclass_news.inc(mclass)
		v.mclass_uses.inc(mclass)
		# TODO inc module
	end
end

redef class ACallExpr
	redef fun accept_usage_visit(v) do
		var callsite = self.callsite
		if callsite == null then return
		v.mprop_calls.inc(callsite.mpropdef.mproperty)
		v.mprop_uses.inc(callsite.mpropdef.mproperty)
		# TODO inc class
		# TODO inc module
	end
end

redef class AType
	redef fun accept_usage_visit(v) do
		var mclass = v.get_mclass(mtype)
		if mclass == null then return
		v.mclass_uses.inc(mclass)
		# TODO inc module
	end
end
