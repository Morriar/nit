# `android` - Android platform support and APIs

* [Getting Started](#Getting-Started)
* [Dependencies](#Dependencies)
* [Run `nit_activity`](#Run-`nit_activity`)
* [Compilation for Android](#Compilation-for-Android)
* [Host system configuration](#Host-system-configuration)
* [Configure the Android application](#Configure-the-Android-application)
* [Annotations](#Annotations)
* [Android implementation](#Android-implementation)
* [Lock app orientation](#Lock-app-orientation)
* [`landscape`](#`landscape`)
* [Resources and application icon](#Resources-and-application-icon)
* [`assets_and_resources`](#`assets_and_resources`)
* [`assets`](#`assets`)
* [Compilation modes](#Compilation-modes)
* [Debug mode](#Debug-mode)
* [Release mode](#Release-mode)
* [`android`](#`android`)
* [`shared_preferences`](#`shared_preferences`)
* [`vibration`](#`vibration`)
* [`cardboard`](#`cardboard`)
* [`data_store`](#`data_store`)
* [`aware`](#`aware`)
* [`intent`](#`intent`)
* [`wifi`](#`wifi`)
* [`native_app_glue`](#`native_app_glue`)
* [`nit_activity`](#`nit_activity`)
* [`notification`](#`notification`)
* [`sensors`](#`sensors`)
* [`audio`](#`audio`)
* [Authors](#Authors)

> This module provides basic logging facilities, advanced logging can be
> achieved by importing `android::log`.

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
* `mnit`

### Run `nit_activity`

![Diagram for `android`](uml-android-3.svg)

Compile `nit_activity` with the following command:

~~~bash
nitc ./nit_activity.nit
~~~

Then run it with:

~~~bash
./nit_activity
~~~

## Compilation for Android

The compiler generates an APK file as the output when the `android`
module is imported by the compilation target. The path to the generated
file can be specified using the `-o` and `--dir` options.

## Host system configuration

To compile Android apps from a 64 bits GNU/Linux host you can reuse an existing Android Studio
installation or make a clean install with command line tools only.

Note that this guide supports only 64 bits GNU/Linux hosts with support for a Java 8 JDK,
it may be possible to support other platforms with some tweaks.

1. Install the required SDK packages using one of these two methods:

   a.	Using Android Studio, open `Tools > Android > SDK Manager`, in the SDK Tools tab,
   install "Android SDK Build-Tools", CMake and NDK.

   b.	From the command line, run this script for a quick setup without Android Studio.
   You will probably need to tweak it to you system or update the download URL
   to the latest SDK tools from https://developer.android.com/studio/index.html#command-tools

   ~~~bash
   	# Fetch and extract SDK tools
   	mkdir -p ~/Android/Sdk
   	cd ~/Android/Sdk
   	wget https://dl.google.com/android/repository/sdk-tools-linux-3859397.zip
   	unzip sdk-tools-linux-3859397.zip

   	# Update tools
   	tools/bin/sdkmanager --update

   	# Accept the licenses
   	tools/bin/sdkmanager --licenses

   	# Install the basic build tools
   	tools/bin/sdkmanager "build-tools;27.0.0" ndk-bundle
   ~~~

2. Set the environment variable ANDROID_HOME to the SDK installation directory, usually `~/Android/Sdk/`.
   Use the following command to setup the variable for bash.

   ~~~bash
   echo "export ANDROID_HOME=~/Android/Sdk/" >> ~/.bashrc
   ~~~

3. Install Java 8 JDK, on Debian/Ubuntu systems you can use the following command:

   ~~~bash
   sudo apt install openjdk-8-jdk
   ~~~

## Configure the Android application

The _app.nit_ framework and this project offers some services to
customize the generated Android application.

### Annotations

* All _app.nit_ annotations are applied to Android projects:
  `app_name`, `app_namespace` and `app_version`.

  See: `../app/README.md`

* Custom information can be added to the Android manifest file
  using the annotations `android_manifest`, `android_manifest_application`
  and `android_manifest_activity`.

  Example usage to specify an extra permission:

  ~~~
  android_manifest """<uses-permission android:name="android.permission.READ_EXTERNAL_STORAGE"/>"""
  ~~~

* The API version target can be specified with `android_api_min`,
  `android_api_max` and `android_api_target`. These take a single
  integer as argument. They are applied in the Android manifest as
  `minSdkVesion`, `targetSdkVersion` and `maxSdkVersion`.

  See http://developer.android.com/guide/topics/manifest/uses-sdk-element.html

* The annotation `android_activity` defines a Java class used as an
  entry point to your application. As of now, this annotation should
  only be used by low-level implementations of Nit on Android.
  Its usefulness will be extended in the future to customize user applications.

### Android implementation

There is two core implementation for Nit apps on Android.
`android::nit_activity` is used by apps with standard windows and native UI controls.
`android::game` is used by, well, games and the game frameworks `mnit` and `gamnit`.

Clients don't have to select the core implementation, it is imported by other relevant modules.
For example, a module importing `app::ui` and `android` will trigger the importation of `android::nit_activity`.

### Lock app orientation

Importing `android::landscape` or `android::portrait` locks the generated
application in the specified orientation. This can be useful for games and
other multimedia applications.

#### `landscape`

> Adds `android:screenOrientation=="sensorLandscape"` to the manifest.

### Resources and application icon

Resources specific to the Android platform should be placed in an `android/` folder at the root of the project.
The folder should adopt the structure of a normal Android project, e.g., a custom XML resource file can be placed
at `android/res/values/color.xml` to be compiled with the Android application.

The application icon should also be placed in the `android/` folder.
Place the classic bitmap version at `android/res/mipmap-hdpi/ic_launcher.png` (and others),
and the adaptive version at `android/res/mipmap-anydpi-v26/ic_launcher.xml`.
The Nit compiler detects these files and uses them as the application icon.

Additional `android/` folders may be placed next to more specific Nit modules to change the Android resources
for application variants. The more specific resources will have priority over the project level `android/` files.

#### `assets_and_resources`

> Use the ResourceManager to retrieve resources from the `res` folder of your app
> Use the AssetManager to retrieve resources files from the `assets` folder of your app
> both are available from `App`
> If you write your own resources in your NIT project part of the application,
> you are obliged to set a string resource with the name "app_name" or it will be
> impossible for you to compile the apk correctly

#### `assets`

> This module is a client of `assets_and_resources` as the latter
> covers the services of Android.

## Compilation modes

There are two compilation modes for the Android platform, debug and release.
Theses modes are also applied to the generated Android projects.
The compilation mode is specified as an argument to `nitc`, only
`--release` can be specified as debug is the default behavior.

### Debug mode

Debug mode enables compiling to an APK file without handling signing keys
and their password. The APK file can be installed to a local device with
USB debugging enabled, but it cannot be published on the Play Store.

By default, `nitc` will compile Android applications in debug mode.

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

### Release mode

Building in release mode will use your private key to sign the
APK file, it can then be published on the Play Store.

1. Have a keystore with a valid key to sign your APK file.

   To create a new keystore, avoid using the default values of `jarsigner`
   as they change between versions of the Java SDK. You should instead use a
   command similar to the following, replacing `KEYSTORE_PATH` and `KEY_ALIAS`
   with the desired values.

   ~~~bash
   keytool -genkey -keystore KEYSTORE_PATH -alias KEY_ALIAS -sigalg MD5withRSA -keyalg RSA -keysize 1024 -validity 10000
   ~~~

2. Set the environment variables used by `nitc`: `KEYSTORE`, `KEY_ALIAS` and
   optionally `TSA_SERVER`. These settings can be set in a startup script such as
   `~/.bashrc` or in a local Makefile.

   You can use the following commands by replacing the right-hand values
   to your own configuration.

   ~~~bash
   export KEYSTORE=keystore_path
   export KEY_ALIAS=key_alias
   export TSA_SERVER=timestamp_authority_server_url # Optional
   ~~~

3. Call `nitc` with the `--release` options. You will be prompted for the
   required passwords as needed by `jarsigner`.

## `android`

> This module provides basic logging facilities, advanced logging can be
> achieved by importing `android::log`.

## `shared_preferences`

> By default, the API 10 is imported. You can import API 11 to have
> access to this platform new features.

## `vibration`

> Importing this module will trigger the use of the VIBRATE permission

## `cardboard`

> Projects using this module should keep the `cardboard.jar` archive in the
> `libs` folder at the root of the project.

External resources:

* Download `cardboard.jar` from
  https://raw.githubusercontent.com/googlesamples/cardboard-java/master/CardboardSample/libs/cardboard.jar
* Read about Cardboard at
  https://developers.google.com/cardboard/
* Find the Cardboard SDK documentation at
  https://developers.google.com/cardboard/android/latest/reference/com/google/vrtoolkit/cardboard/package-summary

## `data_store`

> We use the shared preferences named "data_store" to store the data.

## `aware`

> Defines all Android related annotations, including `ldflags@android`.

## `intent`

> By default, API 10 is imported. Import more recent API to suit your needs.

There's two ways of defining which activity/service to be launched :

* Provide an explicit class to be launched with `set_class_name`
* Provide a description of the activity to perform and let the system determine the best application to run

To provide a description, you need to assign values using one or more of these
methods :

* `action=`
* `data=`
* `add_category`
* `mime_type=`

The Intent class wraps most of the `android.content.Intent` constants and is
designed to be used with this syntax :

* Action : `intent_action.main.to_s`
* Category : `intent_category.home.to_s`
* Extra : `intent_extra.phone_number.to_s`
* Flag : `intent_flag.activity_brought_to_front`

For further details about these constants meaning, refer to the official
android Intent documentation :

## `wifi`

> Refer to the official Android documentation for the details on these services.

## `native_app_glue`

> The framework provides 3 different structures for a single C application
> under Android. We use all 3 structures in this API to implement app.nit
> on Android. Each structure is wrapped in a Nit extern class:

* `NativeAppGlue` is the lowest level class, it is implemented by the C
  structure `android_app`. It offers features on the main Android thread
  (not on the same thread as Nit). For this reason, prefer to use
  `NdkNativeActivity`.

* `NdkNativeActivity` is implemented by the C structure `ANativeActivity`. It
  is on the same thread as Nit and manages the synchronization with the
  main Android thread.

* `NativeNativeActivity` is implemented in Java by `android.app.NativeActivity`,
  which is a subclass of `Activity` and `Context` (in Java). It represent
  main activity of the running application. Use it to get anything related
  to the `Context` and as anchor to execute Java UI code.

## `nit_activity`

> This module is implemented in 3 languages:

* The Java code, in `NitActivity.java` acts as the entry point registered
  to the Android OS. It relays most of the Android callbacks to C.
  In theory, there may be more than one instance of `NitActivity` alive at
  a given time. They hold a reference to the corresponding Nit `Activity`
  in the attribute `nitActivity`.

* The C code is defined in the top part of this source file. It acts as a
  glue between Java and Nit by relaying calls between both languages.
  It keeps a global variables reference to the Java VM and the Nit `App`.

* The Nit code defines the `Activity` class with the callbacks from Android.
  The callback methods should be redefined by user modules.

The main is invoked when the native library is dynamically linked by
the Java virtual machine. For this reason, the main _must_ execute quickly,
on the main UI thread at least.

## `notification`

> ~~~~nitish
~~~~

# Create and show a notification

var notif = new Notification("My Title", "Some content")
notif.ticker = "Ticker text"
notif.show

# Update the notification

notif.text = "New content!"
notif.ongoing = true # Make it un-dismissable
notif.show

# Hide the notification

notif.cancel

~~~~

For more information, see:
http://developer.android.com/guide/topics/ui/notifiers/notifications.html

## `sensors`

> Sensors are to be enabled when `App` is created.
The following example enables all sensors.
The events (`SensorEvent`, `ASensorAccelerometer`, `ASensorMagneticField`...)
are sent to the `input` callback of `App`

~~~~nitish
redef class App
    init
    do
        sensors_support_enabled = true
        accelerometer.enabled = true
        accelerometer.eventrate = 10000
        magnetic_field.enabled = true
        gyroscope.enabled = true
        light.enabled = true
        proximity.enabled = true
    end
end
~~~~

## `audio`

> `assets` contains the portable version of sounds, since the `res` folder exsists only in android projects.

For this example, the sounds "test_sound" and "test_music" are located in the "assets/sounds" folder,
they both have ".ogg" extension. "test_sound" is a short sound and "test_music" a music track

~~~nitish
# Note that you need to specify the path from "assets" folder and the extension
var s = new Sound("sounds/test_sound.ogg")
var m = new Music("sounds/test_music.ogg")
s.play
m.play
~~~

Now, the sounds are in "res/raw"

~~~nitish
s = app.load_sound_from_res("test_sound")
m = app.load_music_from_res("test_sound")
s.play
m.play
~~~

See http://developer.android.com/reference/android/media/package-summary.html for more infos

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
