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

module api_metrics

import web_base
import metrics

redef class APIRouter
	redef init do
		super
		use("/metrics/structural", new APIModelMetrics(config))
		use("/metrics/structural/:id", new APIStructuralMetrics(config))
		use("/metrics/doc", new APIDocMetrics(config))
	end
end

class APIDocMetrics
	super APIHandler

	redef fun get(req, res) do
		var filters = new Array[String]
		var farg = req.string_arg("filters")
		if farg != null then
			filters.add_all farg.split(',')
		end
		var target = req.string_arg("target")
		if target == "all" then target = null
		var metrics = config.model.collect_doc_metrics(self, filters, target)
		if metrics == null then
			res.api_error(404, "No metric for this model")
			return
		end
		res.json metrics
	end
end

class APIStructuralMetrics
	super APIHandler

	private fun mclasses_metrics: MetricSet do
		var mainmodule = config.mainmodule
		var metrics = new MetricSet
		metrics.register(new CNOA(mainmodule, config.view))
		metrics.register(new CNOP(mainmodule, config.view))
		metrics.register(new CNOC(mainmodule, config.view))
		metrics.register(new CNOD(mainmodule, config.view))
		metrics.register(new CNOAC(mainmodule, config.view))
		metrics.register(new CNOAA(mainmodule, config.view))
		metrics.register(new CNOAI(mainmodule, config.view))
		metrics.register(new CDIT(mainmodule, config.view))
		metrics.register(new CNBAP(mainmodule, config.view))
		metrics.register(new CNBAPA(mainmodule, config.view))
		metrics.register(new CNBAPM(mainmodule, config.view))
		metrics.register(new CNBAPI(mainmodule, config.view))
		metrics.register(new CNBAPVT(mainmodule, config.view))
		metrics.register(new CNBIP(mainmodule, config.view))
		metrics.register(new CNBIPA(mainmodule, config.view))
		metrics.register(new CNBIPM(mainmodule, config.view))
		metrics.register(new CNBIPI(mainmodule, config.view))
		metrics.register(new CNBIPVT(mainmodule, config.view))
		metrics.register(new CNBRP(mainmodule, config.view))
		metrics.register(new CNBHP(mainmodule, config.view))
		metrics.register(new CNBLP(mainmodule, config.view))
		return metrics
	end

	private fun mmodules_metrics: MetricSet do
		var mainmodule = config.mainmodule
		var metrics = new MetricSet
		metrics.register(new MNBIC(mainmodule, config.view))
		metrics.register(new MNBRC(mainmodule, config.view))
		metrics.register(new MNBICC(mainmodule, config.view))
		metrics.register(new MNBIAC(mainmodule, config.view))
		metrics.register(new MNBII(mainmodule, config.view))
		metrics.register(new MNBIE(mainmodule, config.view))
		metrics.register(new MNBIP(mainmodule, config.view))
		metrics.register(new MNBRP(mainmodule, config.view))
		metrics.register(new MNBIPA(mainmodule, config.view))
		metrics.register(new MNBIPI(mainmodule, config.view))
		metrics.register(new MNBIPM(mainmodule, config.view))
		metrics.register(new MNBIPVT(mainmodule, config.view))
		return metrics
	end

	private fun mpackages_metrics: MetricSet do
		var metrics = new MetricSet
		metrics.register(new PNBM(config.view))
		metrics.register(new PNBIC(config.view))
		metrics.register(new PNBRC(config.view))
		metrics.register(new PNBICC(config.view))
		metrics.register(new PNBIAC(config.view))
		metrics.register(new PNBII(config.view))
		metrics.register(new PNBIE(config.view))
		metrics.register(new PNBIP(config.view))
		metrics.register(new PNBRP(config.view))
		metrics.register(new PNBIPA(config.view))
		metrics.register(new PNBIPI(config.view))
		metrics.register(new PNBIPM(config.view))
		metrics.register(new PNBIPVT(config.view))
		return metrics
	end

	private fun model_metrics: MetricSet do
		var metrics = new MetricSet
		metrics.register(new NBP(config.view))
		metrics.register(new NBM(config.view))
		metrics.register(new NBIC(config.view))
		metrics.register(new NBIP(config.view))
		return metrics
	end

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		var metrics = mentity.collect_metrics(self)
		if metrics == null then
			res.api_error(404, "No metric for mentity `{mentity.full_name}`")
			return
		end
		res.json metrics
	end
end

class APIModelMetrics
	super APIStructuralMetrics

	redef fun get(req, res) do
		var metrics = config.model.collect_metrics(self)
		if metrics == null then
			res.api_error(404, "No metric for this model")
			return
		end
		res.json metrics
	end
end

redef class MEntity
	private fun collect_metrics(h: APIStructuralMetrics): nullable JsonObject do return null

	private fun collect_doc_metrics(h: APIDocMetrics, filters: Array[String], target: nullable String): nullable JsonObject do return null
end

redef class Model
	redef fun collect_metrics(h) do
		var mpackages = collect_mpackages(h.config.view)
		var mpackages_metrics = h.mpackages_metrics
		mpackages_metrics.collect(mpackages)

		var model_metrics = h.model_metrics
		model_metrics.collect(new HashSet[Model].from([self]))

		var metrics = new JsonObject
		metrics["mpackages"] = mpackages_metrics
		metrics["model"] = model_metrics
		return metrics
	end

	redef fun collect_doc_metrics(h, filters, target) do
		var doc_metrics = new DocMetricSet(h.config.view)

		var mentities = new HashSet[MEntity]
		for mpackage in model.collect_mpackages(h.config.view) do
			if target != null and target != mpackage.full_name then continue
			if filters.has("MPackage") then mentities.add mpackage
			for mgroup in mpackage.mgroups do
				if filters.has("MGroup") then mentities.add mgroup
			end
			for mmodule in mpackage.collect_mmodules(h.config.view) do
				if filters.has("MModule") then mentities.add mmodule
				for mclass in mmodule.collect_intro_mclasses(h.config.view) do
					if filters.has("MClass") then mentities.add mclass
					for mprop in mclass.collect_intro_mproperties(h.config.view) do
						if filters.has("MProperty") then mentities.add mprop
					end
				end
			end
		end
		doc_metrics.collect(mentities)

		var metrics = new JsonObject
		metrics["doc"] = doc_metrics
		return metrics
	end
end

redef class MPackage
	redef fun collect_metrics(h) do
		var mmodules = collect_mmodules(h.config.view)
		var mmodules_metrics = h.mmodules_metrics
		mmodules_metrics.collect(mmodules)

		var mpackage_metrics = h.mpackages_metrics
		mpackage_metrics.collect(new HashSet[MPackage].from([self]))

		var metrics = new JsonObject
		metrics["mmodules"] = mmodules_metrics
		metrics["mpackage"] = mpackage_metrics
		return metrics
	end
end

redef class MGroup
	redef fun collect_metrics(h) do
		var mmodules_metrics = h.mmodules_metrics
		mmodules_metrics.collect(new HashSet[MModule].from(mmodules))

		var metrics = new JsonObject
		metrics["mmodules"] = mmodules_metrics
		return metrics
	end
end

redef class MModule
	redef fun collect_metrics(h) do
		var mclasses = collect_intro_mclasses(h.config.view)
		var mclasses_metrics = h.mclasses_metrics
		mclasses_metrics.collect(mclasses)

		var mmodule_metrics = h.mmodules_metrics
		mmodule_metrics.collect(new HashSet[MModule].from([self]))

		var metrics = new JsonObject
		metrics["mclasses"] = mclasses_metrics
		metrics["mmodule"] = mmodule_metrics
		return metrics
	end
end

redef class MClass
	redef fun collect_metrics(h) do
		var mclass_metrics = h.mclasses_metrics
		mclass_metrics.collect(new HashSet[MClass].from([self]))

		var metrics = new JsonObject
		metrics["mclass"] = mclass_metrics
		return metrics
	end
end

redef class MetricSet
	super Jsonable

	redef fun core_serialize_to(v) do
		for metric in metrics do
			v.serialize_attribute(metric.name, metric)
		end
	end
end

redef class Metric
	super Jsonable

	redef fun core_serialize_to(v) do
		v.serialize_attribute("name", name)
		v.serialize_attribute("desc", desc)
		v.serialize_attribute("empty", values.is_empty)
		if values.not_empty then v.serialize_attribute("avg", avg)
		if values.not_empty then v.serialize_attribute("std_dev", std_dev)
		if values.not_empty then v.serialize_attribute("threshold", threshold)
	end
end

redef class IntMetric
	redef fun core_serialize_to(v) do
		super
		if values.not_empty then v.serialize_attribute("sum", sum)
	end
end

redef class FloatMetric
	redef fun core_serialize_to(v) do
		super
		if values.not_empty then v.serialize_attribute("sum", sum)
	end
end

redef class StringMetric
	redef fun core_serialize_to(v) do
		v.serialize_attribute("name", name)
		v.serialize_attribute("desc", desc)
		v.serialize_attribute("empty", values.is_empty)
	end
end

redef class MPackageMetric
	redef fun core_serialize_to(v) do
		super
		if values.not_empty then v.serialize_attribute("min", min.full_name)
		if values.not_empty then v.serialize_attribute("max", max.full_name)
		var values = new JsonArray
		for value in sort do
			values.add new MetricEntry(value, self[value].as(Jsonable))
		end
		v.serialize_attribute("values", values)
	end
end

redef class MModuleMetric
	redef fun core_serialize_to(v) do
		super
		if values.not_empty then v.serialize_attribute("min", min.full_name)
		if values.not_empty then v.serialize_attribute("max", max.full_name)
		var values = new JsonArray
		for value in sort do
			values.add new MetricEntry(value, self[value].as(Jsonable))
		end
		v.serialize_attribute("values", values)
	end
end

redef class MClassMetric
	redef fun core_serialize_to(v) do
		super
		if values.not_empty then v.serialize_attribute("min", min.full_name)
		if values.not_empty then v.serialize_attribute("max", max.full_name)
		var values = new JsonArray
		for value in sort do
			values.add new MetricEntry(value, self[value].as(Jsonable))
		end
		v.serialize_attribute("values", values)
	end
end

redef class MDocMetric
	redef fun core_serialize_to(v) do
		super
		if values.not_empty then v.serialize_attribute("min", min.full_name)
		if values.not_empty then v.serialize_attribute("max", max.full_name)
		var values = new JsonArray
		for value in sort do
			values.add new MetricEntry(value, self[value].as(Jsonable))
		end
		v.serialize_attribute("values", values)
	end
end

redef class KindMetric
	redef fun core_serialize_to(v) do
		super
		var values = new JsonArray
		for value in sort do
			values.add new MetricEntry(value, self[value])
		end
		v.serialize_attribute("values", values)
	end
end


private class MetricEntry
	super Jsonable

	var mentity: MEntity
	var value: Jsonable

	redef fun core_serialize_to(v) do
		v.serialize_attribute("mentity", mentity.full_name)
		v.serialize_attribute("value", value)
	end
end
