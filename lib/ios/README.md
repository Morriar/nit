# `ios` - iOS support for _app.nit_

* [Getting Started](#Getting-Started)
* [Dependencies](#Dependencies)
* [Run `app`](#Run-`app`)
* [Features](#Features)
* [Authors](#Authors)

Example from `ios::hello_ios`:

~~~
# Simple iOS app with a single label
module hello_ios is
	example
	app_name "Hello iOS"
	app_namespace "nit.app.hello_ios"
	app_version(0, 5, git_revision)
end

import ios

redef class App
	redef fun did_finish_launching_with_options
	do
		return app_delegate.hello_world
	end
end

redef class AppDelegate

	# Print and show "Hello World!"
	private fun hello_world: Bool in "ObjC" `{

		// Print to the console
		NSLog(@"Hello World!");

		// Display "Hello world!" on the screen
		CGRect frame = [[UIScreen mainScreen] bounds];
		self.window = [[UIWindow alloc] initWithFrame: frame];
		self.window.backgroundColor = [UIColor whiteColor];

		UILabel *label = [[UILabel alloc] init];
		label.text = @"Hello World!";
		label.center = CGPointMake(100, 100);
		[label sizeToFit];

		// As with `self.window` we must set a `rootViewController`
		self.window.rootViewController = [[UIViewController alloc]initWithNibName:nil bundle:nil];
		self.window.rootViewController.view = label;

		[self.window addSubview: label];
		[self.window makeKeyAndVisible];

		return YES;
	`}
end
~~~

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

* `app` - _app.nit_, a framework for portable applications
* `cocoa` - Cocoa API, the development layer of OS X
* `core` - Nit common library of core classes and methods
* `json` - read and write JSON formatted text

### Run `app`

Compile `app` with the following command:

~~~bash
nitc ./app.nit
~~~

## Features

![Diagram for `ios`](uml-ios.svg)

* `app` - Basic structure for Nit apps on iOS
* `assets` - Implementation of `app::assets`
* `audio` - iOS implementation of `app::audio` using `AVAudioPlayer`
* `data_store` - Implements `app::data_store` using `NSUserDefaults`
* `glkit` - GLKit services to create an OpenGL ES context on iOS
* `http_request` - Implementation of `app::http_request` for iOS
* `platform` - Triggers compilation for the iOS platform

Then run it with:

~~~bash
./app
~~~

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
