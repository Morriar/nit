# `signals` - ANSI C signal handling

Common usage imply 5 steps:

1. Implement the `SignalHandler` interface
2. `redef receive_signal_unsafe` to handle `sigsegv`
3. `redef receive_signal` to handle other signals safely
   4, Notify what signals to handle with `handle_signal`
4. If using the safe handler method, routinely call `check_signals`

Usage example:

~~~~
class MyReceiver
	super SignalHandler

	redef fun receive_signal(signal)
	do
		print "received safely {signal}"
		if signal == sigalarm then print "Alarm!"
	end
	redef fun receive_signal_unsafe( signal ) do print "received unsafely {signal}"
end

var r = new MyReceiver

# Handle `sigsegv` signal unsafely (the only way for this one)
r.handle_signal(sigsegv, false)

# Handle `sigint` and `sigalarm` safely
r.handle_signal(sigint, true)
r.handle_signal(sigalarm, true)

# Ask system to receive a `sigalarm` signal in 1 second
set_alarm(1)

loop
	# Check signals and callback `receive_signal`
	var hit = check_signals

	if hit then break
end
~~~~

## Features

* `SignalHandler` - Receives the callback from system when a given signal arise

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
