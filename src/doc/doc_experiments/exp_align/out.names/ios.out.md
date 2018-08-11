# iOS support for _app.nit_

> name: ios
> name: app

## System configuration

> name: ios::UIButtonType::system

Configure your system for OS X by installing Xcode and brew.
Follow the instructions in `README.md` at the root of the repository.

> name: ios::UIButtonType::system

Optionally, install ios-sim to run compiled apps in the simulator: `brew install ios-sim`

> name: ios
> name: app
> name: ios>
> name: app>
> name: android>nit_compile>android>app>
> name: ios::ios
> name: ios::app
> name: app::app
> name: app::App

## Compile and run a simple application

Let's use the `hello_ios` example in the folder `lib/ios/examples/`.

> name: ios>examples>
> name: app>examples>
> name: cocoa>examples>
> name: android>examples>
> name: serialization>examples>
> name: pthreads>examples>
> name: ios>examples>
> name: app>examples>
> name: cocoa>examples>
> name: android>examples>
> name: serialization>examples>
> name: pthreads>examples>

Compile with: `nitc hello_world.nit`

Run in the simulator with: `ios-sim hello_world.app`

## Sample portable applications

See the calculator example at `examples/calculator` and the Tnitter client at `contrib/tnitter/`
for portable applications working on GNU/Linux, OS X, iOS and Android.

> name: linux
> name: ios
> name: android
> name: ios>examples>
> name: app>examples>
> name: cocoa>examples>
> name: android>examples>
> name: serialization>examples>
> name: pthreads>examples>
> name: linux>
> name: ios>
> name: android>
> name: android>nit_compile>android>
> name: linux::linux
> name: ios::ios
> name: android::android
> name: ios>examples>
> name: app>examples>
> name: cocoa>examples>
> name: android>examples>
> name: serialization>examples>
> name: pthreads>examples>

## Application icon

To associate icons to your application, create the directory `ios/AppIcon.appiconset` and fill it with standard icons and `Contents.json`.
These files can be generated in a number of different ways:

> name: core::file
> name: core::file

* Using the tool `svg_to_icons` packaged with the Nit repository at `contrib/inkscape_tools/bin/svg_to_icons`.

* Using Xcode to assign images to each slot, create the folder and the file `Contents.json`.

* Write or modify the file `Contents.json` manually.
  It is in Json format and easily readable.

> name: json
> name: json>
> name: core::file
> name: core::file
> name: json::json
> name: json
> name: json>
> name: core::file
> name: core::file
> name: json::json
> name: core::file
> name: core::file
> name: core::file
> name: json
> name: json>
> name: core::file
> name: json::json
> name: json
> name: json>
> name: core::file
> name: json::json
> name: json
> name: json>
> name: core::file
> name: json::json

