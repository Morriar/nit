# iOS support for _app.nit_

> theme: api
> theme: title

## System configuration

> theme: features

Configure your system for OS X by installing Xcode and brew.
Follow the instructions in `README.md` at the root of the repository.

> theme: usage

Optionally, install ios-sim to run compiled apps in the simulator: `brew install ios-sim`

> theme: usage

## Compile and run a simple application

> theme: usage

Let's use the `hello_ios` example in the folder `lib/ios/examples/`.

> theme: api
> theme: examples

Compile with: `nitc hello_world.nit`

> theme: usage

Run in the simulator with: `ios-sim hello_world.app`

> theme: usage

## Sample portable applications

> theme: features
> struct: example

See the calculator example at `examples/calculator` and the Tnitter client at `contrib/tnitter/`
for portable applications working on GNU/Linux, OS X, iOS and Android.

> theme: api
> theme: examples

## Application icon

> theme: features

To associate icons to your application, create the directory `ios/AppIcon.appiconset` and fill it with standard icons and `Contents.json`.
These files can be generated in a number of different ways:

> theme: api
> theme: features

* Using the tool `svg_to_icons` packaged with the Nit repository at `contrib/inkscape_tools/bin/svg_to_icons`.

* Using Xcode to assign images to each slot, create the folder and the file `Contents.json`.

* Write or modify the file `Contents.json` manually.
  It is in Json format and easily readable.

> theme: api
> theme: features