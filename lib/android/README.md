# `android` - Android platform support and APIs

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

![Diagram for `android`](uml-android.svg)

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

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
