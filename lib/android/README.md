# `android` - Android platform support and APIs

* [Getting Started](#Getting-Started)
* [Dependencies](#Dependencies)
* [Run `nit_activity`](#Run-`nit_activity`)
* [Features](#Features)
* [Authors](#Authors)

This module provides basic logging facilities, advanced logging can be
achieved by importing `android::log`.

Example from `android::ui_test`:

~~~
# Test for app.nit's UI services
module ui_test is
	example
	app_name "app.nit UI test"
	app_version(0, 1, git_revision)
	app_namespace "org.nitlanguage.ui_test"
	android_manifest_activity """android:theme="@android:style/Theme.Light""""
	android_api_target 15
end

import android::ui
import android::toast
import android::notification

redef class App
	redef fun on_create
	do
		self.window = new Window
		super
	end
end

redef class Window

	private var layout = new VerticalLayout(parent=self)

	private var but_notif = new Button(parent=layout, text="Show Notification")
	private var but_toast = new Button(parent=layout, text="Show Toast")

	private var notif: nullable Notification = null

	init
	do
		but_notif.observers.add self
		but_toast.observers.add self
	end

	# Action when pressing `but_notif`
	fun act_notif
	do
		var notif = self.notif
		if notif == null then
			notif = new Notification("From app.nit", "Some content...")
			notif.ticker = "Ticker text..."
			notif.show
			self.notif = notif
		else
			notif.cancel
			self.notif = null
		end
	end

	# Action when pressing `but_toast`
	fun act_toast
	do
		app.toast("Sample toast from app.nit at {get_time}", false)
	end

	redef fun on_event(event)
	do
		print "on_event {event}"
		if event isa ButtonPressEvent then
			var sender = event.sender
			if sender == but_notif then
				act_notif
			else if sender == but_toast then
				act_toast
			end
		end
	end
end
~~~

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

* `app` - _app.nit_, a framework for portable applications
* `c` - Structures and services for compatibility with the C language
* `core` - Nit common library of core classes and methods
* `gamnit` - Portable game and multimedia framework for Nit
* `java` - Supporting services for the FFI with Java and to access Java libraries
* `json` - read and write JSON formatted text
* `mnit` - `mnit`

### Run `nit_activity`

Compile `nit_activity` with the following command:

~~~bash
nitc ./nit_activity.nit
~~~

## Features

![Diagram for `android`](uml-android.svg)

* `activities` - Android Activities wrapper
* `assets` - Implementation of `app::assets`
* `assets_and_resources` - Android Assets and Resources Management
* `audio` - Android audio services, wraps a part of android audio API
* `aware` - Android compatibility module
* `cardboard` - Services from the Google Cardboard SDK for virtual reality on Android
* `dalvik` - Java related services specific to Android and its Dalvik VM
* `data_store` - Implements `app::data_store` using `shared_preferences`
* `game` - Android services and implementation of app.nit for gamnit and mnit
* `gamepad` - Support for gamepad events (over Bluetooth or USB)
* `http_request` - Android implementation of `app:http_request`
* `input_events` - Pointer and hardware key events
* `key_event`
* `landscape` - Lock the application in the landscape orientation
* `load_image` - Low-level services to load pixel data from the assets
* `log` - Advanced Android logging services
* `native_app_glue` - Wrapper of the Android native_app_glue framework to implement app.nit
* `nit_activity` - Core implementation of `app.nit` on Android using a custom Java entry point
* `platform` - Triggers compilation for the android platform
* `portrait` - Config to set the portrait orientation
* `sensors` - Access Android sensors
* `toast` - Services to display a _toast_, a small popup on Android
* `vibration` - Vibration services for Android
* `wifi` - Simple wrapper of the Android WiFi services

Then run it with:

~~~bash
./nit_activity
~~~

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
