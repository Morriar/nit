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

# TODO doc, use desc from spec
# TODO parse
# TODO headers to fullstring

module http

# A HttpRequest
#
# ~~~
# var request = new HttpRequest("GET", "http://nitlanguage.org")
# ~~~
class HttpRequest

	# Request method (`GET`, `POST`, ...)
	var method: String is writable

	# Uniform Resource Indentifier that identifies the resource targeted by the request
	var uri: String is writable

	# Request header fields
	#
	# Contains all the fields of the general, request and entity headers.
	var header = new HttpHeader is optional, writable

	# Request body if any
	var body: nullable String = null is optional, writable

	# HTTP version used (default is `HTTP/1.1`)
	var version: String = "HTTP/1.1" is optional, writable

	fun source: String do
		var b = new Buffer
		b.append "{method} {uri} {version}\r\n"
		b.append header.source
		b.append "\r\n"
		b.append body or else ""
		return b.to_s
	end
end

class HttpResponse
	# HTTP status code
	#
	# See `status_codes` for the full list and associated messages.
	var code: Int

	# Http status message or reason
	#
	# See `status_codes` for the full list and associated codes.
	var message: String = sys.status_code(code) or else "NO MESSAGE" is optional

	# Request header fields
	#
	# Contains all the fields of the general, request and entity headers.
	var header = new HttpHeader is optional, writable

	# Request body if any
	var body: nullable String = null is optional, writable

	# HTTP version used (default is `HTTP/1.1`)
	var version: String = "HTTP/1.1" is optional, writable

	fun source: String do
		var b = new Buffer
		b.append "{version} {code} {message}\r\n"
		b.append header.source
		b.append "\r\n"
		b.append body or else ""
		return b.to_s
	end
end

class HttpHeader
	super Map[String, nullable String]

	# All the fields contained in the header
	#
	# ~~~
	# var header = new HttpHeader
	# header.add_field(new HttpField("Field-1", "value1"))
	# header.add_field(new HttpField("Field-2", "value2"))
	# header.add_field(new HttpField("Field-3", "value3"))
	# header.add_field(new HttpField("Field-3", "value4"))
	#
	# var fields = header.fields
	# assert fields.length == 4
	# assert fields.first.value == "value1"
	# assert fields.last.value == "value4"
	# ~~~
	var fields: Array[HttpField] = new Array[HttpField]

	# Append a new field with `name` and `value` to the header
	#
	# ~~~
	# var header = new HttpHeader
	# header.add("Field-1", "value1")
	# header.add("Field-2", "value2")
	#
	# assert header.length == 2
	# ~~~
	#
	# Multiple fields with the same `name` can be added to the same header.
	#
	# ~~~
	# header.add("Field-3", "value3")
	# header.add("Field-3", "value4")
	#
	# assert header.length == 4
	# ~~~
	fun add(name, value: String) do add_field new HttpField(name, value)

	# Append a new `field` to the header
	#
	# ~~~
	# var header = new HttpHeader
	# header.add_field(new HttpField("Field-1", "value1"))
	# header.add_field(new HttpField("Field-2", "value2"))
	# header.add_field(new HttpField("Field-2", "value2"))
	# header.add_field(new HttpField("Field-3", "value4"))
	#
	# assert header.length == 4
	# ~~~
	fun add_field(field: HttpField) do fields.add field

	# Does this header contain a field with `name`?
	#
	# ~~~
	# var header = new HttpHeader
	# header.add_field(new HttpField("Field-1", "value1"))
	# header.add_field(new HttpField("Field-1", "value2"))
	# header.add_field(new HttpField("Field-2", "value3"))
	#
	# assert header.has("Field-1")
	# assert header.has("Field-2")
	# assert not header.has("Not-Found")
	# ~~~
	fun has(name: String): Bool do
		for field in fields do
			if field.name == name then return true
		end
		return false
	end

	redef fun has_key(key) do
		if key == null then return false
		return has(key.to_s)
	end

	# Return all fields with `name` in this header
	#
	# ~~~
	# var header = new HttpHeader
	# header.add_field(new HttpField("Field-1", "value1"))
	# header.add_field(new HttpField("Field-2", "value2"))
	# header.add_field(new HttpField("Field-2", "value2"))
	# header.add_field(new HttpField("Field-3", "value4"))
	#
	# assert header.get("Field-1").length == 1
	# assert header.get("Field-2").length == 2
	# ~~~
	fun get(name: String): Array[HttpField] do
		var res = new Array[HttpField]
		for field in fields do
			if field.name == name then res.add field
		end
		return res
	end

	# Remove the first field with `name` from the header
	#
	# No-op if no field with `name` is found.
	#
	# ~~~
	# var header = new HttpHeader
	# header.add_field(new HttpField("Field-1", "value1"))
	# header.add_field(new HttpField("Field-2", "value2"))
	# header.add_field(new HttpField("Field-3", "value3"))
	# header.add_field(new HttpField("Field-3", "value4"))
	#
	# assert header.length == 4
	#
	# header.remove("Field-1")
	# assert not header.has("Field-1")
	# assert header.length == 3
	#
	# header.remove("Field-3")
	# assert header.has("Field-3")
	# assert header["Field-3"] == "value4"
	# assert header.length == 2
	#
	# header.remove("Not-Found")
	# assert header.length == 2
	# ~~~
	fun remove(name: String) do fields.remove_at(index_of(name))

	# Get the index of the first field with `name`
	private fun index_of(name: String): Int do
		var index = 0
		for field in fields do
			if field.name == name then return index
			index += 1
		end
		return -1
	end

	# Remove all fields with `name` from the header
	#
	# No-op if no field with `name` is found.
	#
	# ~~~
	# var header = new HttpHeader
	# header.add_field(new HttpField("Field-1", "value1"))
	# header.add_field(new HttpField("Field-2", "value2"))
	# header.add_field(new HttpField("Field-2", "value3"))
	#
	# assert header.length == 3
	#
	# header.remove_all("Field-2")
	# assert not header.has("Field-2")
	# assert header.length == 1
	#
	# header.remove("Not-Found")
	# assert header.length == 1
	# ~~~
	fun remove_all(name: String) do
		loop
			var index = index_of(name)
			if index < 0 then return
			fields.remove_at(index)
			index = index_of(name)
		end
	end

	# Return the value of the first field with `name`
	#
	# This method returns only the first HttpField with `name` in the header.
	# Since multiple fields with the same name can be present in the same header,
	# you should use `get_fields` to get all the fields with `name`.
	#
	# ~~~
	# var header = new HttpHeader
	# header.add_field(new HttpField("Field-1", "value1"))
	# header.add_field(new HttpField("Field-2", "value2"))
	# header.add_field(new HttpField("Field-2", "value3"))
	#
	# assert header["Field-1"] == "value1"
	# assert header["Field-2"] == "value2"
	# ~~~
	#
	# If no field with `name` is found, the method returns null.
	#
	# ~~~
	# assert header["Not-Found"] == null
	# ~~~
	redef fun [](name) do
		if name == null then return null
		name = name.to_s
		if not has(name) then return null
		return get(name).first.value
	end

	# Set the `value` of the first field with `name`
	#
	# This method sets `value` as the value of the first HttpField found in the header.
	# If no field with `name` is found, a new one is appended to the header.
	#
	# If the header contains multiple field with the same name, each one can be
	# accessed and modified through the `get_fields` method.
	# Headers can also be appended manually with `add_field`.
	#
	# If `value` is null then the first field with `name` is removed (see `remove`).
	#
	# ~~~
	# var header = new HttpHeader
	# header["Field-1"] = "value1"
	# header["Field-1"] = "value2"
	#
	# assert header.length == 1
	# assert header["Field-1"] == "value2"
	#
	# header["Field-1"] = null
	# assert header.is_empty
	# ~~~
	redef fun []=(name, value) do
		if value == null then
			remove(name)
			return
		end
		if has(name) then
			get(name).first.value = value
			return
		end
		add(name, value)
	end

	# Return all the field names used in the header
	#
	# If multiple fields have the same name, the name is only returned once.
	#
	# ~~~
	# var header = new HttpHeader
	# header.add_field(new HttpField("Field-1", "value1"))
	# header.add_field(new HttpField("Field-2", "value2"))
	# header.add_field(new HttpField("Field-3", "value3"))
	# header.add_field(new HttpField("Field-3", "value4"))
	#
	# assert header.names.to_a == ["Field-1", "Field-2", "Field-3"]
	# ~~~
	fun names: Set[String] do
		var res = new Set[String]
		for field in fields do res.add field.name
		return res
	end

	redef fun keys do return names

	# Return all the field values in the header
	#
	# ~~~
	# var header = new HttpHeader
	# header.add_field(new HttpField("Field-1", "value1"))
	# header.add_field(new HttpField("Field-2", "value2"))
	# header.add_field(new HttpField("Field-3", "value3"))
	# header.add_field(new HttpField("Field-3", "value4"))
	#
	# assert header.values == ["value1", "value2", "value3", "value4"]
	# ~~~
	redef fun values do
		var res = new Array[String]
		for field in fields do res.add field.value
		return res
	end

	redef fun length do return fields.length
	redef fun is_empty do return fields.is_empty

	fun source: String do
		var b = new Buffer
		for field in fields do
			b.append "{field.name}: {field.value}\r\n"
		end
		return b.to_s
	end
end

class HttpField
	var name: String
	var value: String

	redef fun to_s do return "{name}: {value}"
end

redef class Sys
	fun status_code(code: Int): nullable String do
		if not status_codes.has_key(code) then return null
		return status_codes[code]
	end

	var status_codes: Map[Int, String] do
		var codes = new Map[Int, String]
		codes[100] = "Continue"
		codes[101] = "Switching Protocols"
		codes[200] = "OK"
		codes[201] = "Created"
		codes[202] = "Accepted"
		codes[203] = "Non-Authoritative Information"
		codes[204] = "No Content"
		codes[205] = "Reset Content"
		codes[206] = "Partial Content"
		codes[300] = "Multiple Choices"
		codes[301] = "Moved Permanently"
		codes[302] = "Found"
		codes[303] = "See Other"
		codes[304] = "Not Modified"
		codes[305] = "Use Proxy"
		codes[307] = "Temporary Redirect"
		codes[400] = "Bad Request"
		codes[401] = "Unauthorized"
		codes[402] = "Payment Requred"
		codes[403] = "Forbidden"
		codes[404] = "Not Found"
		codes[405] = "Method Not Allowed"
		codes[406] = "Not Acceptable"
		codes[407] = "Proxy Authentication Required"
		codes[408] = "Request Timeout"
		codes[409] = "Conflict"
		codes[410] = "Gone"
		codes[411] = "Length Required"
		codes[412] = "Precondition Failed"
		codes[413] = "Request Entity Too Large"
		codes[414] = "Request-URI Too Long"
		codes[415] = "Unsupported Media Type"
		codes[416] = "Requested Range Not Satisfiable"
		codes[417] = "Expectation Failed"
		codes[500] = "Internal Server Error"
		codes[501] = "Not Implemented"
		codes[502] = "Bad Gateway"
		codes[503] = "Service Unavailable"
		codes[504] = "Gateway Timeout"
		codes[505] = "HTTP Version Not Supported"
		return codes
	end
end