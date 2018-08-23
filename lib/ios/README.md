# `ios` - iOS support for _app.nit_

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

* `app` - _app.nit_, a framework for portable applications
* `cocoa` - Cocoa API, the development layer of OS X
* `core` - Nit common library of core classes and methods
* `json` - read and write JSON formatted text

### Run `app`

![Diagram for `ios`](uml-ios-2.svg)

Compile `app` with the following command:

~~~bash
nitc ./app.nit
~~~

Then run it with:

~~~bash
./app
~~~

## System configuration

Configure your system for OS X by installing Xcode and brew.
Follow the instructions in `README.md` at the root of the repository.

Optionally, install ios-sim to run compiled apps in the simulator: `brew install ios-sim`

## Compile and run a simple application

Let's use the `hello_ios` example in the folder `lib/ios/examples/`.

Compile with: `nitc hello_world.nit`

Run in the simulator with: `ios-sim hello_world.app`

## Sample portable applications

See the calculator example at `examples/calculator` and the Tnitter client at `contrib/tnitter/`
for portable applications working on GNU/Linux, OS X, iOS and Android.

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

## Application icon

To associate icons to your application, create the directory `ios/AppIcon.appiconset` and fill it with standard icons and `Contents.json`.
These files can be generated in a number of different ways:

* Using the tool `svg_to_icons` packaged with the Nit repository at `contrib/inkscape_tools/bin/svg_to_icons`.

* Using Xcode to assign images to each slot, create the folder and the file `Contents.json`.

* Write or modify the file `Contents.json` manually.
  It is in Json format and easily readable.

## `uikit`

> Partial wrapper of basic UIKit services.

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
