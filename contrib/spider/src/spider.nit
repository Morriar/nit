import curl

# The Spider explores a site from a root URL.
#
# It follows all links that point to a subpage of `root_url`.
class Spider

	# Curl instance used to retrieve pages.
	private var curl = new Curl

	fun load_pages(root_url: String) do
		# Already visited pages
		var done = new HashSet[String]
		# To visit pages
		var todo = new Array[String]
		# Start from root
		todo.add root_url

		while not todo.is_empty do
			var url = todo.pop
			if done.has(url) then continue
			done.add url
			var page = load_page(url)
			if page == null then continue
			for link in page.links do
				if not link.has_prefix(root_url) then continue
				link = strip_link(link)
				if done.has(link) then continue
				todo.add link
			end
		end
	end

	# Load a single `Page` from it's `page_url`.
	fun load_page(page_url: String): nullable Page do
		info("Load page at {page_url}")
		var request = new CurlHTTPRequest(page_url, curl)
		var response = request.execute

		if response isa CurlResponseFailed then
			var code = response.error_code
			var msg = response.error_msg
			warning("{msg} (code {code})")
			return null
		else if response isa CurlResponseSuccess then
			return new Page(page_url, response.body_str)
		else
			print "Unexpected response state {response.class_name}."
			abort
		end
	end

	# Remove query and anchor from URL.
	private fun strip_link(url: String): String do
		var pos = url.index_of('?')
		if pos >= 0 then return url.substring(0, pos)
		pos = url.index_of('#')
		if pos >= 0 then return url.substring(0, pos)
		return url
	end

	# Displays an info message (used for debug).
	private fun info(msg: String) do
		print "[INFO] {msg}"
	end

	# Displays a warning message.
	private fun warning(msg: String) do
		print "[WARN] {msg}"
	end
end

class Page
	var url: String
	var body: String

	init do
		if not url.has_suffix("/") then url = "{url}/"
	end

	var titles: Array[PageHeader] is lazy do
		# print body
		var titles = new Array[PageHeader]
		var i = 0
		var intag = true
		while i < body.length do
			var c = body[i]
			if c == '<' and i + 1 < body.length and body[i + 1] != '/' then
				intag = true
			else if intag then
				var tag = new FlatBuffer
				i = read_until(tag, body, i, ' ', '>')
				if i == -1 then
					print "Error: Can't find end of tag name"
					abort
				else if body[i] == ' ' then
					var tmp = new FlatBuffer
					i = read_until(tmp, body, i, '>')
					if i == -1 then
						print "Error: Can't find end of tag name"
						abort
					end
				end
				i += 1
				# print tag.to_s
				if tag.to_s.has("[hH][1-6]".to_re) then
					print tag.to_s
					var lvl = tag.last.to_i
					var txt = new FlatBuffer
					i = read_until(txt, body, i + 1, '<')
					if i == -1 then
						print "Error: Can't read tag content"
						abort
					end
					print txt.to_s
					titles.add new PageHeader(lvl, txt.to_s)
				end
				intag = false
			end
			i += 1
		end
		return titles
	end

	# List of links found in the body of the page.
	#
	# Returns the strings that match the regexp `"href=([\"'])[^\"']*\\1"`.
	var links: Set[String] is lazy do
		var links = new HashSet[String]
		var re = "href=([\"'])[^\"']*\\1".to_re
		var matches = body.search_all(re)
		for match in matches do
			# print match.to_s
			var link = match.to_s.substring(6, match.length - 7)
			link = expand_link(link)
			# print link
			links.add link
		end
		return links
	end

	private fun expand_link(url: String): String do
		if url.has("^(http|https|ftp)\\://".to_re) then
			return url
		else if url.has_prefix("/") then
			return "{self.url}{url.substring_from(1)}"
		else if url.has_prefix("./") then
			return "{self.url}{url.substring_from(2)}"
		else if url.has_prefix("../") then
			var parts = self.url.split("/")
			parts.pop # remove last empty part
			parts.pop # remove last part
			return "{parts.join("/")}/{url.substring_from(3)}"
		end
		return "{self.url}{url}"
	end

	# Reads `source` from position `from` until one of `until` is encountered.
	#
	# Chars read are appended to `buffer`.
	#
	# Returns the position where the reading stopped or -1 in no char from
	# `until` was found.
	private fun read_until(buffer: FlatBuffer, source: Text, from: Int, until: Char...): Int do
		var i = from
		while i < source.length do
			var c = source[i]
			if until.has(c) then return i
			buffer.add c
			i += 1
		end
		return -1
	end
end

class PageHeader
	var lvl: Int
	var text: String
end

fun usage do
	print "usage:\n"
	print "spider <root_url>"
end

if args.is_empty then
	usage
	exit 1
end

var root = args.first
var spider = new Spider

# spider.load_pages(root)

print "Loading titles from {root}"
var page = spider.load_page(root)

print "Page summary: "
print ""
for title in page.titles do
	printn "#" * title.lvl
	printn " "
	print title.text
end

print ""

#options:
	#save pages
	#out dir
	# timeout
	# wait beetween pages
	# utiliser une liste de root en fiochier d'entrée

# get metrics
# graph
