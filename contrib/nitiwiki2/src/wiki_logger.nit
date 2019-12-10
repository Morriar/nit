# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module wiki_logger

import wiki_base
import logger
import counter

redef class Wiki
	var no_color = false
	private var logger = new Logger

	var counters = new Counter[String]

	fun print(level: Int, message: String, location: nullable Location) do
		if location != null then
			if no_color then
				logger.add_raw(level, location.location_string)
			else
				logger.add_raw(level, location.location_string.yellow)
			end
			logger.add_raw(level, ": ")
		end
		logger.add_raw(level, message)
		logger.add_raw(level, "\n")
		if location != null then
			# TODO show code
			logger.add_raw(level, message)
		end
	end

	fun error(message: String, location: nullable Location) do
		print(error_level, message, location)
	end

	fun warn(message: String, location: nullable Location) do
		print(warn_level, message, location)
	end

	fun info(message: String, location: nullable Location) do
		print(info_level, message, location)
	end

	fun debug(message: String, location: nullable Location) do
		print(debug_level, message, location)
	end
end

class Location
	var path: nullable String = null is optional
	var source: nullable String = null is optional
	var line_start: nullable String = null is optional
	var line_end: nullable String = null is optional
	var column_start: nullable String = null is optional
	var column_end: nullable String = null is optional

	fun location_string: String do
		return "TODO"
	end
	fun show_source do end
end
