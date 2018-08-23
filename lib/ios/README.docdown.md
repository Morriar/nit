# `ios` - iOS support for _app.nit_

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

[[parents: ios]]

### Run `app`

[[uml: ios | format: svg, mentities: ios::platform;ios::ios;ios::http_request;ios::assets;ios::data_store;ios::app;ios::audio;ios::glkit;ios::uikit;ios::ui]]

Compile `app` with the following command:

[[main-compile: ios::app]]

Then run it with:

[[main-run: ios::app]]

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

[[code: ios::hello_ios]]

## Application icon

To associate icons to your application, create the directory `ios/AppIcon.appiconset` and fill it with standard icons and `Contents.json`.
These files can be generated in a number of different ways:

* Using the tool `svg_to_icons` packaged with the Nit repository at `contrib/inkscape_tools/bin/svg_to_icons`.

* Using Xcode to assign images to each slot, create the folder and the file `Contents.json`.

* Write or modify the file `Contents.json` manually.
  It is in Json format and easily readable.

## [[sign: ios::uikit]]

> [[doc: ios::uikit]]

## Authors

This project is maintained by [[ini-maintainer: ios]].
