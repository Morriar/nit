# `websocket` - Adds support for a websocket connection in Nit

* [Features](#Features)
* [`WebsocketServer` - Websocket compatible server](#`WebsocketServer`---Websocket-compatible-server)
* [`WebsocketConnection` - Connection to a websocket client](#`WebsocketConnection`---Connection-to-a-websocket-client)
* [Authors](#Authors)

## Features

### `WebsocketServer` - Websocket compatible server

Produces Websocket client-server connections

Properties:

* `WebsocketServer::accept` - Accepts an incoming connection
* `WebsocketServer::close` - Close the server and the socket below it
* `WebsocketServer::with_infos` - Creates a new Websocket server listening on given port

### `WebsocketConnection` - Connection to a websocket client

Can be used to communicate with a client

Properties:

* `WebsocketConnection::can_read` - Is there some data available to be read ?
* `WebsocketConnection::connected` - Checks if a connection to a client is available

Example from `websocket::websocket_server`:

~~~
# Sample module for a minimal chat server using Websockets on port 8088
module websocket_server is example

import websocket

var sock = new WebsocketServer.with_infos(8088, 1)

var msg: String

if sock.listener.closed then
	print sys.errno.strerror
end

var cli: WebsocketConnection

while not sock.closed do
	cli = sock.accept
	while cli.connected do
		if sys.stdin.poll_in then
			msg = gets
			printn "Sending message : {msg}"
			if msg == "disconnect" then cli.close
			cli.write(msg)
		end
		if cli.can_read(10) then
			msg = ""
			while cli.can_read(0) do msg += cli.read(100)
			if msg != "" then print msg
		end
	end
end
~~~

## Authors

This project is maintained by **Lucas Bajolet <mailto:r4pass@hotmail.com>**.
