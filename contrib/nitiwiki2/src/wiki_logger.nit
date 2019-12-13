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

	var errors = 0
	var warnings = 0

	fun print(level: Int, message: String, location: nullable WikiLocation) do
		if location != null then
			if no_color then
				logger.append_raw(level, location.location_string)
			else
				var str = location.location_string
				if level == error_level then str = str.red
				if level == warn_level then str = str.yellow
				logger.append_raw(level, str)
			end
			logger.append_raw(level, ": ")
		end
		logger.add_raw(level, message)

		if location != null and location.source != null then
			logger.add_raw(level, "\n{location.show_source(no_color)}")
		end
	end

	fun error(message: String, location: nullable WikiLocation) do
		errors += 1
		print(error_level, message, location)
	end

	fun warn(message: String, location: nullable WikiLocation) do
		warnings += 1
		print(warn_level, message, location)
	end

	fun info(message: String, location: nullable WikiLocation) do
		print(info_level, message, location)
	end

	fun debug(message: String, location: nullable WikiLocation) do
		print(debug_level, message, location)
	end

	fun print_counters do
		if errors == 0 and warnings != 0 then
			logger.out.write "{warnings} warnings.\n\n"
		else if errors != 0 and warnings == 0 then
			logger.out.write "{errors} errors.\n\n"
		else if errors != 0 and warnings != 0 then
			logger.out.write "{errors} errors, {warnings} warnings.\n\n"
		end
	end
end

class WikiLocation
	var path: String
	var source: nullable String = null is optional
	var line_start: nullable Int = null is optional
	var line_end: nullable Int = null is optional
	var column_start: nullable Int = null is optional
	var column_end: nullable Int = null is optional

	fun location_string: String do
		var s = new Buffer
		var p = self.path
		var ls = self.line_start
		var le = self.line_end
		var cs = self.column_start
		var ce = self.column_end

		s.append "{p}:"
		if ls != null then
			s.append ls.to_s
		end
		if cs != null then
			if ls != null then s.append ","
			s.append cs.to_s
		end
		if le != null then
			if ls != null or cs != null then s.append "-"
			s.append le.to_s
		end
		if ce != null then
			if le != null then s.append ","
			s.append ce.to_s
		end

		return s.write_to_string
	end

	fun show_source(no_color: Bool): String do
		var src = self.source
		if src == null then return ""

		var s = new Buffer
		var ls = self.line_start
		var le = self.line_end
		var cs = self.column_start
		var ce = self.column_end

		var chars = src.chars
		var i = 0
		var l = 1
		var p = 1

		s.append "\t"

		while i < chars.length do
			var c = chars[i]

			if c == '\n' then
				i += 1
				l += 1
				p = 1
				continue
			end

			if ls != null and l < ls then
				i += 1
				continue
			end

			if le != null and l > le then
				break
			end

			if no_color then
				s.add c
			else
				if cs != null and ce != null then
					if p >= cs and p <= ce then
						s.append c.to_s.red.bold
					else
						s.add c
					end
				else
					s.add c
				end
			end

			i += 1
			p += 1
		end

		s.add '\n'

		if cs != null then
			s.add '\t'
			s.append "{" " * (cs - 1)}^\n"
		end

		return s.write_to_string
	end
end
