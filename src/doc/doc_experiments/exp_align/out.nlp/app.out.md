# _app.nit_, a framework for portable applications

> match: app
> match: app::AppComponent
> match: app::App
> match: app::assets
> match: app::app_base
> match: app::Asset
> match: app::SimpleAsyncHttpRequest
> match: app::ui

The framework provides services to manage common needs of modern mobile applications:

> match: app::AppComponent
> match: app
> match: app::App
> match: app::data_store
> match: app::assets
> match: app::Asset
> match: app::app_base
> match: app::SimpleAsyncHttpRequest
> match: app::AsyncHttpRequest
> match: app::http_request_example
> match: app::ui
> match: app::http_request

* Life-cycle
* User interface
* Persistence
* Async HTTP requests
* Package metadata
* Compilation and packaging

> match: app
> match: app::TextInput
> match: app::App
> match: app::HttpRequestResult
> match: app::AppComponent
> match: app
> match: app::ui_example
> match: app
> match: app::SimpleAsyncHttpRequest
> match: app::AsyncHttpRequest
> match: app::http_request_example
> match: app::http_request
> match: app::HttpRequestResult
> match: app::MyHttpRequest
> match: app
> match: app
> match: app::Asset
> match: app

The features offered by _app.nit_ are common to all platforms, but
may not be available on all devices.

> match: app
> match: app::AppComponent
> match: app::UiExampleWindow
> match: app::App
> match: app::app_base

## Application Life-Cycle

> match: app::AppComponent
> match: app
> match: app::App
> match: app::Asset
> match: app::SimpleAsyncHttpRequest

The _app.nit_ application life-cycle is compatible with all target platforms.
It relies on the following sequence of events, represented here by their callback method name:

> match: app::AppEvent
> match: app
> match: app::AppComponent
> match: app::App
> match: app::ViewEvent
> match: app::ButtonPressEvent
> match: app::AsyncHttpRequest
> match: app::Asset
> match: app::SimpleAsyncHttpRequest
> match: app::app_base

1. `on_create`: The application is being created.
   You should build the UI at this time and launch services.

2. `on_resume`: The app enters the active state, it is in the foreground and interactive.

3. `on_pause`: The app becomes inactive and it leaves the foreground.
   It may still be visible in the background.

4. `on_stop`: The app is completely hidden.
   It may then be destroyed (without warning) or go back to the active state with `on_restart`.

5. `on_restart`: The app goes back to the inactive state.
   You can revert what was done by `on_stop`.

> match: app::ui
> match: app::ui_example
> match: app
> match: app::AppComponent
> match: app::App
> match: app::Control
> match: app::data_store
> match: app::Asset
> match: app::audio
> match: app::assets
> match: app::SimpleAsyncHttpRequest
> match: app::Window
> match: app::AppEvent
> match: app::HttpRequestResult
> match: app::AsyncHttpRequest
> match: app::http_request_example
> match: app::http_request
> match: app::App
> match: app::AppEvent
> match: app::AppObserver
> match: app::AppComponent
> match: app::app_base
> match: app
> match: app::TextInput
> match: app::CheckBox
> match: app::data_store
> match: app::audio
> match: app::http_request_example
> match: app::ui_example
> match: app::ui
> match: app::App
> match: app::AppEvent
> match: app::AppObserver
> match: app::AppComponent
> match: app::app_base
> match: app
> match: app::View
> match: app::audio
> match: app::data_store
> match: app::http_request_example
> match: app::ui_example
> match: app::ui
> match: app::App
> match: app::AppEvent
> match: app::AppObserver
> match: app::AppComponent
> match: app::app_base
> match: app
> match: app::CheckBox
> match: app::data_store
> match: app::audio
> match: app::http_request_example
> match: app::ui_example
> match: app::ui
> match: app::App
> match: app::AppEvent
> match: app::AppObserver
> match: app::AppComponent
> match: app::app_base
> match: app
> match: app::CheckBox
> match: app::data_store
> match: app::audio
> match: app::http_request_example
> match: app::ui_example
> match: app::ui

![_app.nit_ life-cycle](path/resources/ab03b885463901ade4ae1a9adfaefeff.png)

> match: app
> match: app::AppComponent
> match: app::app_base

Life-cycle events related to saving and restoring the application state are provided by two special callback methods:

> match: app::AppEvent
> match: app
> match: app::AppComponent
> match: app::App
> match: app::ViewEvent
> match: app::CheckBox
> match: app::ButtonPressEvent
> match: app::AsyncHttpRequest
> match: app::Asset
> match: app::SimpleAsyncHttpRequest

* `on_save_state`: The app may be destroyed soon, save its state for a future `on_restore_state`.
  There is more on how it can be done in the `app::data_store` section.

* `on_restore_state`: The app is launching, restore its state from a previous `on_save_state`.

> match: app::App
> match: app::data_store
> match: app::AppEvent
> match: app::AppObserver
> match: app::AppComponent
> match: app
> match: app::app_base
> match: app::audio
> match: app::CheckBox
> match: app::http_request_example
> match: app::ui_example
> match: app::ui
> match: app::App
> match: app::AppEvent
> match: app::AppObserver
> match: app::AppComponent
> match: app::app_base
> match: app
> match: app::CheckBox
> match: app::data_store
> match: app::audio
> match: app::http_request_example
> match: app::ui_example
> match: app::ui

These events are synchronized to the native platforms applications
The `App` instance is the first to be notified of these events.
Other UI elements, from the `ui` submodule, are notified of the same events using a simple depth first visit.
So all UI elements can react separately to live-cycle events.

> match: app::AppEvent
> match: app::App
> match: app::app
> match: app
> match: app::AppObserver
> match: app::AppComponent
> match: app::SimpleAsyncHttpRequest
> match: app::app_base
> match: app::ui_example
> match: app::ui
> match: app::ViewEvent
> match: app::Control
> match: app::ButtonPressEvent
> match: app::Label
> match: app::audio
> match: app::HttpRequestResult
> match: app::ListLayout
> match: app::HttpRequestClientWindow
> match: app::data_store
> match: app::DataStore
> match: app::MyHttpRequest
> match: app::CompositeControl
> match: app::Asset
> match: app::http_request_example

## User Interface

> match: app::TextInput
> match: app::App
> match: app::HttpRequestResult
> match: app
> match: app::AppComponent
> match: app::ui_example

The `app::ui` module defines an abstract API to build a portable graphical application.
The API is composed of interactive `Control`s, visible `View`s and an active `Window`.

> match: app::App
> match: app::View
> match: app::app
> match: app::Window
> match: app::AppEvent
> match: app::AppObserver
> match: app
> match: app::AppComponent
> match: app::app_base
> match: app::ui
> match: app::ui_example
> match: app::Layout
> match: app::Control
> match: app::assets
> match: app::SecondWindow
> match: app::ViewEvent
> match: app::HttpRequestClientWindow
> match: app::UiExampleWindow
> match: app::ListLayout
> match: app::data_store
> match: app::MyHttpRequest
> match: app::Asset
> match: app::SimpleAsyncHttpRequest
> match: app::audio
> match: app::http_request_example

Here is a subset of the most useful controls and views:

> match: app::Control
> match: app::View
> match: app::Window
> match: app::CompositeControl
> match: app::TextView
> match: app
> match: app::ViewEvent
> match: app::TextInput
> match: app::ListLayout
> match: app::CheckBox
> match: app::UiExampleWindow
> match: app::AppComponent
> match: app::ui

* The classic pushable `Button` with text (usually rectangular).

* `TextInput` is a field for the user to enter text.

* `HorizontalLayout` and `VerticalLayout` organize other controls in order.

> match: app::Button
> match: app::TextInput
> match: app::TextView
> match: app::TextAsset
> match: app::Label
> match: app::HttpRequestClientWindow
> match: app::ButtonPressEvent
> match: app
> match: app::Window
> match: app::Asset
> match: app::HttpRequestResult
> match: app::http_request
> match: app::TextInput
> match: app::TextView
> match: app::TextAsset
> match: app::HttpRequestResult
> match: app::Label
> match: app
> match: app::App
> match: app::AppComponent
> match: app::ui_example
> match: app::http_request
> match: app::HorizontalLayout
> match: app::VerticalLayout
> match: app::Control
> match: app::CompositeControl
> match: app::Window
> match: app::TextView
> match: app::Layout
> match: app::SecondWindow
> match: app::View
> match: app::TextInput
> match: app
> match: app::CheckBox
> match: app::UiExampleWindow
> match: app::ui

Each control is notified of input events by callbacks to `on_event`.
All controls have observers that are also notified of the events.
So there is two ways  to customize the behavior on a given event:

> match: app::Control
> match: app::AppEvent
> match: app::TextInput
> match: app
> match: app::Window
> match: app::CompositeControl
> match: app::TextView
> match: app::ViewEvent
> match: app::ButtonPressEvent
> match: app::View
> match: app::CheckBox
> match: app::AppComponent
> match: app::UiExampleWindow
> match: app::AsyncHttpRequest
> match: app::App
> match: app::ToggleEvent
> match: app::ui

* Create a subclass of the wanted `Control`, let's say `Button`, and specialize `on_event`.

* Add an observer to a `Button` instance, and implement `on_event` in the observer.

> match: app::Control
> match: app::Button
> match: app::ButtonPressEvent
> match: app::Window
> match: app
> match: app::CompositeControl
> match: app::TextView
> match: app::View
> match: app::App
> match: app::TextInput
> match: app::CheckBox
> match: app::UiExampleWindow
> match: app::AppEvent
> match: app::AsyncHttpRequest
> match: app::SimpleAsyncHttpRequest
> match: app::ui
> match: app::Button
> match: app::ButtonPressEvent
> match: app
> match: app::Control
> match: app::AppComponent
> match: app::SimpleAsyncHttpRequest
> match: app::AsyncHttpRequest

### Usage Example

> match: app>examples>
> match: app::http_request_example
> match: app::ui_example
> match: app
> match: app::AsyncHttpRequest

The example at `examples/ui_example.nit` shows off most features of `app::ui` in a minimal program.
You can also take a look at the calculator (`../../examples/calculator/src/calculator.nit`) which is a concrete usage example.

> match: app::App
> match: app>examples>
> match: app::AppEvent
> match: app::AppObserver
> match: app::ui_example
> match: app
> match: app::AppComponent
> match: app::app_base
> match: app::http_request_example
> match: app::ui
> match: app::Control
> match: app::UiExampleWindow
> match: app::data_store
> match: app::CheckBox
> match: app::audio
> match: app::AsyncHttpRequest

### Platform-specific UI

> match: app::ui
> match: app::ui_example
> match: app::Control
> match: app

You can go beyond the portable UI API of _app.nit_ by using the natives services of a platform.

> match: app
> match: app::ui_example
> match: app::assets
> match: app::ui
> match: app::data_store
> match: app::App
> match: app::AppComponent
> match: app::app_base
> match: app::http_request_example
> match: app::http_request

The suggested approach is to use platform specific modules to customize the application on a precise platform.
See the calculator example for an adaptation of the UI on Android,
the interesting module is in this repository at ../../examples/calculator/src/android_calculator.nit

> match: app>examples>
> match: app
> match: app::ui_example
> match: app::ui
> match: app::http_request_example
> match: app::App
> match: app::AppComponent
> match: app::app
> match: app::Control
> match: app::AsyncHttpRequest
> match: app::TextView
> match: app::data_store
> match: app::Asset
> match: app::SimpleAsyncHttpRequest

## Persistent State with data_store

> match: app::data_store
> match: app
> match: app::CheckBox
> match: app::AppComponent

_app.nit_ offers the submodule `app::data_store` to easily save the application state and user preferences.
The service is accessible by the method `App::data_store`. The `DataStore` itself defines 2 methods:

> match: app::DataStore
> match: app::App
> match: app::data_store
> match: app::app
> match: app::AppEvent
> match: app::AppObserver
> match: app
> match: app::AppComponent
> match: app::app_base
> match: app::audio
> match: app::CheckBox
> match: app::TextInput
> match: app::assets
> match: app::http_request_example
> match: app::ui_example
> match: app::Asset
> match: app::HttpRequestResult
> match: app::SimpleAsyncHttpRequest
> match: app::AsyncHttpRequest
> match: app::ui
> match: app::http_request

* `DataStore::[]=` saves and associates any serializable instances to a `String` key.
  Pass `null` to clear the value associated to a key.

* `DataStore::[]` returns the object associated to a `String` key.
  It returns `null` if nothing is associated to the key.

> match: app::DataStore
> match: app
> match: app::data_store
> match: app::HttpRequestResult
> match: app::DataStore
> match: app
> match: app::data_store

### Usage Example

> match: app>examples>
> match: app::http_request_example
> match: app::ui_example
> match: app
> match: app::AsyncHttpRequest

~~~
import app::data_store

redef class App
	var user_name: String

	redef fun on_save_state
	do
		app.data_store["first run"] = false
		app.data_store["user name"] = user_name

		super # call `on_save_state` on all attached instances of `AppComponent`
	end

	redef fun on_restore_state
	do
		var first_run = app.data_store["first run"]
		if first_run != true then
			print "It's the first run of this application"
		end

		var user_name = app.data_store["user name"]
		if user_name isa String then
			self.user_name = user_name
		else self.user_name = "Undefined"

		super
	end
end
~~~

## Async HTTP request

> match: app::SimpleAsyncHttpRequest
> match: app::AsyncHttpRequest
> match: app::http_request_example
> match: app::http_request
> match: app::HttpRequestResult
> match: app::MyHttpRequest
> match: app

The module `app::http_request` provides services to execute asynchronous HTTP request.
The class `AsyncHttpRequest` hides the complex parallel logic and
lets the user implement methods acting only on the UI thread.
See the documentation of `AsyncHttpRequest` for more information and
the full example at `examples/http_request_example.nit`.

> match: app::AsyncHttpRequest
> match: app::App
> match: app::app
> match: app>examples>
> match: app::http_request
> match: app::http_request_example
> match: app::AppEvent
> match: app::AppObserver
> match: app
> match: app::ui_example
> match: app::AppComponent
> match: app::app_base
> match: app::ui
> match: app::SimpleAsyncHttpRequest
> match: app::MyHttpRequest
> match: app::data_store
> match: app::Control
> match: app::TextInput
> match: app::assets
> match: app::TextView
> match: app::HttpRequestResult
> match: app::audio

## Metadata annotations

> match: app

The _app.nit_ framework defines three annotations to customize the application package.

> match: app
> match: app::AppComponent
> match: app::App
> match: app::app_base
> match: app::Asset
> match: app::SimpleAsyncHttpRequest

* `app_name` takes a single argument, the visible name of the application.
  This name is used for launchers and window title.
  By default, the name of the target module.

* `app_namespace` specifies the full namespace (or package name) of the application package.
  This value usually identify the application uniquely on application stores.
  It should not change once the application has benn published.
  By default, the namespace is `org.nitlanguage.{module_name}`.

* `app_version` specifies the version of the application package.
  This annotation expects at least one argument, usually we use three version numbers:
  the major, minor and revision.
  The special function `git_revision` will use the prefix of the hash of the latest git commit.
  By default, the version is 0.1.

* `app_files` tells the compiler where to find platform specific resource files associated to a module.
  By default, only the root of the project is searched for the folders `android` and `ios`.
  The `android` folder is used as base for the generated Android project,
  it can be used to specify the resource files, libs and even Java source files.
  The `ios` folder is searched for icons only.

  Each argument of `app_files` is a relative path to a folder containing extra `android` or `ios` folders.
  If there is no arguments, the parent folder of the annotated module is used.
  In case of name conflicts in the resource files, the files from the project root have the lowest priority,
  those associated to modules lower in the importation hierarchy have higher priority.

> match: app::Window
> match: app
> match: app::AppComponent
> match: app::View
> match: app::App
> match: app::SecondWindow
> match: app::HttpRequestClientWindow
> match: app::UiExampleWindow
> match: app::MyHttpRequest
> match: app::app
> match: app::Asset
> match: app::SimpleAsyncHttpRequest
> match: app::AsyncHttpRequest
> match: app::DataStore
> match: app::data_store
> match: app::AppComponent
> match: app
> match: app::App
> match: app::Asset
> match: app::app
> match: app::SimpleAsyncHttpRequest
> match: app::Window
> match: app::AsyncHttpRequest
> match: app::HttpRequestResult
> match: app::ToggleEvent
> match: app
> match: app::AppComponent
> match: app::App
> match: app::Asset
> match: app::Window
> match: app::SimpleAsyncHttpRequest
> match: app::AsyncHttpRequest
> match: app
> match: app::Asset
> match: app::app_base
> match: app::TextAsset
> match: app::assets
> match: app::audio
> match: app::SimpleAsyncHttpRequest
> match: app::App
> match: app::app
> match: app::Window
> match: app::AppComponent
> match: app::AsyncHttpRequest
> match: app
> match: app::Asset
> match: app::TextAsset
> match: app::assets
> match: app::audio
> match: app::ToggleEvent
> match: app::Window

### Usage Example

> match: app>examples>
> match: app::http_request_example
> match: app::ui_example
> match: app
> match: app::AsyncHttpRequest

~~~
module my_module is
    app_name "My App"
    app_namespace "org.example.my_app"
    app_version(1, 0, git_revision)
end
~~~

## Compiling and Packaging an Application

> match: app::AppComponent
> match: app
> match: app::App
> match: app::Asset
> match: app::SimpleAsyncHttpRequest

The Nit compiler detects the target platform from the importations and generates the appropriate application format and package.

> match: app
> match: app::AppComponent
> match: app::App
> match: app::data_store
> match: app::Asset
> match: app::SimpleAsyncHttpRequest
> match: app::AsyncHttpRequest

Applications using only the portable services of _app.nit_ require some special care at compilation.
Such an application, let's say `calculator.nit`, does not depend on a specific platform and use the portable UI.
The target platform must be specified to the compiler for it to produce the correct application package.
There is two main ways to achieve this goal:

> match: app
> match: app::AppComponent
> match: app::App
> match: app::ui_example
> match: app::assets
> match: app::Asset
> match: app::ui
> match: app::data_store
> match: app::SimpleAsyncHttpRequest
> match: app::app_base
> match: app::http_request_example
> match: app::AsyncHttpRequest
> match: app::http_request

* The mixin option (`-m module`) imports an additional module before compiling.
  It can be used to load platform specific implementations of the _app.nit_ portable UI.

  ~~~bash
  # GNU/Linux version, using GTK
  nitc calculator.nit -m linux

  # Android version
  nitc calculator.nit -m android

  # iOS version
  nitc calculator.nit -m ios
  ~~~

* A common alternative for larger projects is to use platform specific modules.
  Continuing with the calculator example, it is adapted for Android by the module `android_calculator.nit`.
  This module imports both `calculator` and `android`, it can then use Android specific code.

  ~~~
  module android_calculator

  import calculator
  import android

  # ...
  ~~~

> match: app::http_request::RestRunnableOnLoad
> match: app::ui
> match: app
> match: app::ui_example
> match: app::assets
> match: app::app
> match: app::audio
> match: app::Control
> match: app::App
> match: app::AppComponent
> match: app::app_base
> match: app>examples>
> match: app
> match: app::http_request_example
> match: app::ui_example
> match: app::App
> match: app::app
> match: app::HttpRequestResult
> match: app::data_store
> match: app::AsyncHttpRequest
> match: app::SimpleAsyncHttpRequest

