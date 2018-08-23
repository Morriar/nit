# `app` - _app.nit_, a framework for portable applications

* [Getting Started](#Getting-Started)
* [Dependencies](#Dependencies)
* [Run `app_base`](#Run-`app_base`)
* [Features](#Features)
* [`audio` - Services to load and play `Sound` and `Music` from the assets folder](#`audio`---Services-to-load-and-play-`Sound`-and-`Music`-from-the-assets-folder)
* [`data_store` - Key/value storage services](#`data_store`---Key/value-storage-services)
* [`http_request` - HTTP request services: `AsyncHttpRequest` and `Text::http_get`](#`http_request`---HTTP-request-services:-`AsyncHttpRequest`-and-`Text::http_get`)
* [`ui` - Portable UI controls for mobiles apps](#`ui`---Portable-UI-controls-for-mobiles-apps)
* [Other features](#Other-features)
* [Authors](#Authors)

The features offered by this modules are common to all platforms, but
may not be available on all devices.

Example from `app::http_request_example`:

~~~
# Example for the `app::http_request` main service `AsyncHttpRequest`
module http_request_example is
	example
	app_name "app.nit HTTP"
	app_namespace "org.nitlanguage.http_example"
	android_api_target 15
end

import app::ui
import app::http_request
import android::aware # for android_api_target

# Simple asynchronous HTTP request to http://example.com/ displaying feedback to the window
class MyHttpRequest
	super AsyncHttpRequest

	# Back reference to the window to show feedback to the user
	var win: HttpRequestClientWindow

	# ---
	# Config the request

	redef fun uri do return "http://example.com/"
	redef fun deserialize_json do return false

	# ---
	# Customize callbacks

	redef fun before
	do
		win.label_response.text = "Sending request..."

		# Disable button to prevent double requests
		win.button_request.enabled = false
	end

	redef fun on_load(data, status)
	do win.label_response.text = "Received response code {status} with {data.as(Text).byte_length} bytes"

	redef fun on_fail(error)
	do win.label_response.text = "Connection error: {error}"

	redef fun after do win.button_request.enabled = true
end

# Simple window with a label and a button
class HttpRequestClientWindow
	super Window

	# Root layout
	var layout = new ListLayout(parent=self)

	# Button to send request
	var button_request = new Button(parent=layout, text="Press to send HTTP request")

	# Label displaying feedback to user
	var label_response = new Label(parent=layout, text="No response yet.")

	init do button_request.observers.add self

	redef fun on_event(event)
	do
		if event isa ButtonPressEvent and event.sender == button_request then
			# Prepare and send request
			var request = new MyHttpRequest(self)
			request.start
		end
	end
end

redef fun root_window do return new HttpRequestClientWindow
~~~

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

* `android` - Android platform support and APIs
* `core` - Nit common library of core classes and methods
* `json` - read and write JSON formatted text
* `pthreads` - POSIX Threads support
* `serialization` - Abstract serialization services

### Run `app_base`

Compile `app_base` with the following command:

~~~bash
nitc ./app_base.nit
~~~

## Features

![Diagram for `app`](uml-app.svg)

### `audio` - Services to load and play `Sound` and `Music` from the assets folder

Get a handle to a sound using `new Sound` or `new Music` at any time.
Call `load` at or after `App::on_create` or leave it to be loaded
on demand by the first call to `play`.

### `data_store` - Key/value storage services

The main services is `App::data_store`, a `DataStore` holding any
serializable Nit object.

Example from `app::ui_example`:

~~~
# User interface example using `app::ui`
module ui_example is
	example
	app_name "app.nit UI"
	app_namespace "org.nitlanguage.ui_example"
	android_api_min 21
	android_api_target 21
	android_manifest_activity "android:theme=\"@android:style/Theme.Material\""
end

import app::ui
import app::data_store
import android::aware # for android_api_target

# Window showing off some the available controls
class UiExampleWindow
	super Window

	# Root layout
	var layout = new ListLayout(parent=self)

	# Some label
	var some_label = new Label(parent=layout, text="Sample Window using a ListLayout.")

	# A checkbox
	var checkbox = new CheckBox(parent=layout, text="A CheckBox")

	# Horizontal organization
	var h_layout = new HorizontalLayout(parent=layout)

	# Description for the `user_input`
	var user_input_label = new Label(parent=h_layout, text="Input some text:", align=0.5)

	# Field for the user to enter data
	var user_input = new TextInput(parent=h_layout, text="Default text")

	# Button to open a new window with a ListLayout
	var button_window = new Button(parent=layout, text="Open a new window")

	# URL to open
	var example_url = "http://nitlanguage.org/"

	# Button to open the browser
	var button_browser = new Button(parent=layout, text="Open {example_url}")

	redef fun on_event(event)
	do
		if event isa ButtonPressEvent then
			if event.sender == button_browser then
				example_url.open_in_browser
			else if event.sender == button_window then
				app.push_window new SecondWindow
			end
		else if event isa ToggleEvent then
			if event.sender == checkbox then checkbox.text = if checkbox.is_checked then "Checked" else "Unchecked"
		end
	end
end

# Another window with a small `VerticalLayout`
class SecondWindow
	super Window

	# Root layout
	var layout = new VerticalLayout(parent=self)

	# Some label
	var a_label = new Label(parent=layout, text="This window uses a VerticalLayout.")

	# Another label
	var another_label = new Label(parent=layout, text="Close it by tapping the back button.")
end

redef fun root_window do return new UiExampleWindow
~~~

### `http_request` - HTTP request services: `AsyncHttpRequest` and `Text::http_get`

~~~nitish
import app::http_request

class MyHttpRequest
    super AsyncHttpRequest

    redef fun uri do return "http://example.com/"

    redef fun on_load(data, status) do print "Received: {data or else "null"}"

    redef fun on_fail(error) do print "Connection error: {error}"
end

var req = new MyHttpRequest
req.start
~~~

### `ui` - Portable UI controls for mobiles apps

~~~
import app::ui

class MyWindow
    super Window

    var layout = new ListLayout(parent=self)
    var lbl = new Label(parent=layout, text="Hello world", align=0.5)
    var but = new Button(parent=layout, text="Press here")

    redef fun on_event(event) do lbl.text = "Pressed!"
end

redef fun root_window do return new MyWindow
~~~

## Other features

* `app_base` - Base of the _app.nit_ framework, defines `App`
* `assets` - Portable services to load resources from the assets folder

Then run it with:

~~~bash
./app_base
~~~

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
