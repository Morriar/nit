# iOS support for _app.nit_

> match: ios>ui>
> match: ios::NitViewController
> match: ios::platform
> match: ios
> match: ios::AppDelegate
> match: ios::UIScrollView
> match: ios::TableView
> match: ios::hello_ios
> match: ios::http_request
> match: ios::audio
> match: ios::app
> match: ios::glkit

## System configuration

> match: ios::UIButtonType::system
> match: ios

Configure your system for OS X by installing Xcode and brew.
Follow the instructions in `README.md` at the root of the repository.

> match: ios
> match: ios::UITableViewDelegate
> match: ios::AppDelegate

Optionally, install ios-sim to run compiled apps in the simulator: `brew install ios-sim`

> match: ios::AppDelegate
> match: ios::app
> match: ios
> match: ios>ui>
> match: ios::UIWindow
> match: ios::hello_ios
> match: ios::http_request
> match: ios::data_store
> match: ios::assets
> match: ios::audio

## Compile and run a simple application

> match: ios
> match: ios::AppDelegate
> match: ios::UIApplication
> match: ios::TableView
> match: ios::hello_ios

Let's use the `hello_ios` example in the folder `lib/ios/examples/`.

> match: ios::hello_ios
> match: ios>examples>
> match: ios

Compile with: `nitc hello_world.nit`

> match: ios::NitGLKView
> match: ios::NitViewController
> match: ios
> match: ios::app

Run in the simulator with: `ios-sim hello_world.app`

> match: ios::AppDelegate
> match: ios::app
> match: ios
> match: ios>ui>
> match: ios::UIWindow
> match: ios::hello_ios
> match: ios::http_request
> match: ios::data_store
> match: ios::assets
> match: ios::audio

## Sample portable applications

> match: ios
> match: ios::AppDelegate
> match: ios::UIApplication

See the calculator example at `examples/calculator` and the Tnitter client at `contrib/tnitter/`
for portable applications working on GNU/Linux, OS X, iOS and Android.

> match: ios>examples>
> match: ios
> match: ios::AppDelegate
> match: ios::TableView
> match: ios>ui>
> match: ios::platform
> match: ios::UIApplication
> match: ios::hello_ios
> match: ios::http_request
> match: ios::audio
> match: ios::app
> match: ios::glkit

## Application icon

> match: ios
> match: ios::AppDelegate
> match: ios::UIApplication

To associate icons to your application, create the directory `ios/AppIcon.appiconset` and fill it with standard icons and `Contents.json`.
These files can be generated in a number of different ways:

> match: ios
> match: ios::AppDelegate
> match: ios::UIApplication
> match: ios::NitViewController
> match: ios::uikit
> match: ios::audio::AVAudioPlayer
> match: ios::glkit

* Using the tool `svg_to_icons` packaged with the Nit repository at `contrib/inkscape_tools/bin/svg_to_icons`.

* Using Xcode to assign images to each slot, create the folder and the file `Contents.json`.

* Write or modify the file `Contents.json` manually.
  It is in Json format and easily readable.

> match: ios::NitGLKView
> match: ios::NitViewController
> match: ios
> match: ios::app
> match: ios
> match: ios::audio::AVAudioPlayer
> match: ios::uikit
> match: ios::glkit
> match: ios
> match: ios::audio::AVAudioPlayer
> match: ios::uikit

