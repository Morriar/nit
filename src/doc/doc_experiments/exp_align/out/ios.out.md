# iOS support for _app.nit_

> match: ios::ios
> match: ios
> match: app
> match: ios::app
> match: ios::NitViewController
> match: ios::UIScrollView
> match: ios::ui::TextView::ios_points
> match: ios::NitGLKView::multiple_touch_enabled

## System configuration

> match: ios::UIButtonType::system
> match: ios::UIView::new
> match: ios::UILabel::new
> match: ios::UISwitch::new
> match: ios>
> match: ios

Configure your system for OS X by installing Xcode and brew.
Follow the instructions in `README.md` at the root of the repository.

> match: ios::UIButtonType::system
> match: ios>
> match: ios
> match: ios::AppDelegate
> match: ios::UITableViewDelegate
> match: ios::app::App::app_delegate

Optionally, install ios-sim to run compiled apps in the simulator: `brew install ios-sim`

> match: ios
> match: ios::ios
> match: ios>
> match: ios::UIWindow
> match: ios>ui>
> match: ios::hello_ios

## Compile and run a simple application

> match: ios>
> match: ios
> match: ios::app::App::did_enter_background
> match: ios::app::App::did_become_active
> match: ios::AppDelegate

Let's use the `hello_ios` example in the folder `lib/ios/examples/`.

> match: ios::hello_ios
> match: ios>examples>
> match: ios>
> match: ios
> match: ios::data_store::DataStore::user_defaults

Compile with: `nitc hello_world.nit`

> match: ios>
> match: ios
> match: ios::app::App::register_args

Run in the simulator with: `ios-sim hello_world.app`

> match: ios>
> match: ios
> match: ios::UIWindow
> match: ios>ui>
> match: ios::hello_ios

## Sample portable applications

> match: ios>
> match: ios
> match: ios::app::App::did_enter_background
> match: ios::app::App::did_become_active
> match: ios::AppDelegate

See the calculator example at `examples/calculator` and the Tnitter client at `contrib/tnitter/`
for portable applications working on GNU/Linux, OS X, iOS and Android.

> match: ios
> match: ios::UISwitch::on
> match: android
> match: ios::ios
> match: linux
> match: ios>examples>
> match: ios>
> match: ios::app::App::did_enter_background
> match: ios::app::App::did_become_active
> match: ios::AppDelegate

## Application icon

> match: ios::app::App::did_enter_background
> match: ios::app::App::did_become_active
> match: ios>
> match: ios
> match: ios::AppDelegate

To associate icons to your application, create the directory `ios/AppIcon.appiconset` and fill it with standard icons and `Contents.json`.
These files can be generated in a number of different ways:

> match: ios::UIStackViewDistribution::fill
> match: ios::UIStackViewAlignment::fill
> match: ios>
> match: ios
> match: ios::app::App::did_enter_background
> match: ios::app::App::did_become_active
> match: ios::ui::AppDelegate::window

* Using the tool `svg_to_icons` packaged with the Nit repository at `contrib/inkscape_tools/bin/svg_to_icons`.

* Using Xcode to assign images to each slot, create the folder and the file `Contents.json`.

* Write or modify the file `Contents.json` manually.
  It is in Json format and easily readable.

> match: json
> match: ios>
> match: ios
> match: ios::audio::AVAudioPlayer
> match: ios::ui::UITableView::assign_delegate_and_data_source
> match: ios::app::App::register_globally
> match: ios::app::App::register_args
> match: ios::app::App::did_enter_background

