# `cocoa` - Cocoa API, the development layer of OS X

This module is only compatible with OS X.

This wrapper of the Cocoa API regroups the Foundation Kit and the
Application Kit.

Example from `cocoa::cocoa_extern_types`:

~~~
# Test extern classes from the Cocoa framework and extern factories
module cocoa_extern_types is example

import cocoa

in "ObjC Header" `{
	// for `NSString::hello`
	#import <Foundation/Foundation.h>
`}

redef extern class NSString

	# Additionnal factory
	new hello in "ObjC" `{ return @"Factory Hello"; `}
end

# Print a custom string to the log
fun nslog(text: NSString) in "ObjC" `{
	NSLog(text);
`}

nslog "Hello using to_nsstring".to_nsstring
nslog new NSString.hello

var msg_box = new NSAlert
msg_box.message_text = "From Nit".to_nsstring
if "NIT_TESTING".environ != "true" then msg_box.run_modal
~~~

## Features

![Diagram for `cocoa`](uml-cocoa.svg)

* `app_kit` - The Application Kit provides services to create GUI
* `foundation` - The Foundation Kit provides basic Objective-C classes and structures

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
