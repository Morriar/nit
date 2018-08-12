# iOS support for _app.nit_

> match: ios::NitGLKView::supported_interface_orientations

## System configuration

> match: ios::UIButtonType::system

Configure your system for OS X by installing Xcode and brew.
Follow the instructions in `README.md` at the root of the repository.

> match: ios::UIButtonType::system

Optionally, install ios-sim to run compiled apps in the simulator: `brew install ios-sim`

> match: ios::AppDelegate
> match: ios::app

## Compile and run a simple application

> match: ios::app::App::ui_application
> match: ios::app::App::ui_application_main

Let's use the `hello_ios` example in the folder `lib/ios/examples/`.

> match: ios::hello_ios

Compile with: `nitc hello_world.nit`

> match: ios::hello_ios::AppDelegate::hello_world

Run in the simulator with: `ios-sim hello_world.app`

> match: ios::AppDelegate

## Sample portable applications

> match: ios::app::App::ui_application
> match: ios::app::App::ui_application_main

See the calculator example at `examples/calculator` and the Tnitter client at `contrib/tnitter/`
for portable applications working on GNU/Linux, OS X, iOS and Android.

> match: ios>examples>
> match: ios::app::App::ui_application
> match: ios::app::App::ui_application_main

## Application icon

> match: ios::app::App::ui_application
> match: ios::app::App::ui_application_main

To associate icons to your application, create the directory `ios/AppIcon.appiconset` and fill it with standard icons and `Contents.json`.
These files can be generated in a number of different ways:

> match: ios::UIStackViewAlignment::fill
> match: ios::UIStackViewDistribution::fill

* Using the tool `svg_to_icons` packaged with the Nit repository at `contrib/inkscape_tools/bin/svg_to_icons`.

* Using Xcode to assign images to each slot, create the folder and the file `Contents.json`.

* Write or modify the file `Contents.json` manually.
  It is in Json format and easily readable.

> match: ios::NitGLKView
> match: ios::NitViewController
> match: ios::ui::UITableView::assign_delegate_and_data_source

