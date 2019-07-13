# var string = args.first.to_path.read_all
# string = string.replace("\n", "\r\n")
# string.write_to_file(args.first)

"""
POST /post HTTP/1.1\r
Host: nitlanguage.org\r
Connection: close\r
Accept: */*\r
User-Agent: Mozilla/4.0 (compatible; esp8266 Lua; Windows NT 5.1)\r
Content-Type: application/json\r
Content-Length: 25\r
\r
{\r
	"hello": "éworld"\r
}
""".write_to_file("test.req")
