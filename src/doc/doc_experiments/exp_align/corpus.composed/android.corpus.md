# Android platform support and APIs


> match: android
> match: android::platform

## Compilation for Android


> match: android
> match: android::android

The compiler generates an APK file as the output when the `android`
module is imported by the compilation target. The path to the generated
file can be specified using the `-o` and `--dir` options.


> match: android

## Host system configuration

To compile Android apps from a 64 bits GNU/Linux host you can reuse an existing Android Studio
installation or make a clean install with command line tools only.


> match: android
> match: app::App
> match: linux
> match: android::android

Note that this guide supports only 64 bits GNU/Linux hosts with support for a Java 8 JDK,
it may be possible to support other platforms with some tweaks.


> match: linux

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


> match: android
> match: android::android

## Configure the Android application


> match: android

The _app.nit_ framework and this project offers some services to
customize the generated Android application.


> match: app
> match: app::App
> match: android
> match: android::android

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


> match: android
> match: app
> match: app::App
> match: android::android
> match: android::Extra
> match: android>examples>
> match: java

### Android implementation


> match: android
> match: android::android

There is two core implementation for Nit apps on Android.
`android::nit_activity` is used by apps with standard windows and native UI controls.
`android::game` is used by, well, games and the game frameworks `mnit` and `gamnit`.


> match: android::nit_activity
> match: android::game
> match: mnit
> match: gamnit
> match: app
> match: app::App
> match: android
> match: android>ui>
> match: android::android
> match: android::ui
> match: core
> match: gamnit::gamnit
> match: gamnit>
> match: mnit>

Clients don't have to select the core implementation, it is imported by other relevant modules.
For example, a module importing `app::ui` and `android` will trigger the importation of `android::nit_activity`.


> match: app::ui
> match: android
> match: android::nit_activity

### Lock app orientation


> match: app
> match: app::App

Importing `android::landscape` or `android::portrait` locks the generated
application in the specified orientation. This can be useful for games and
other multimedia applications.


> match: android::landscape
> match: android::portrait
> match: app::App

### Resources and application icon


> match: android::assets_and_resources

Resources specific to the Android platform should be placed in an `android/` folder at the root of the project.
The folder should adopt the structure of a normal Android project, e.g., a custom XML resource file can be placed
at `android/res/values/color.xml` to be compiled with the Android application.


> match: android
> match: android::android
> match: android::assets_and_resources::NativeContext::resources

The application icon should also be placed in the `android/` folder.
Place the classic bitmap version at `android/res/mipmap-hdpi/ic_launcher.png` (and others),
and the adaptive version at `android/res/mipmap-anydpi-v26/ic_launcher.xml`.
The Nit compiler detects these files and uses them as the application icon.


> match: android::assets_and_resources
> match: android::assets_and_resources::AssetManager::bitmap

Additional `android/` folders may be placed next to more specific Nit modules to change the Android resources
for application variants. The more specific resources will have priority over the project level `android/` files.


> match: android
> match: android::android
> match: android::assets_and_resources
> match: android::assets_and_resources::NativeContext::resources

## Compilation modes

There are two compilation modes for the Android platform, debug and release.
Theses modes are also applied to the generated Android projects.
The compilation mode is specified as an argument to `nitc`, only
`--release` can be specified as debug is the default behavior.


> match: android
> match: android::platform

### Debug mode

Debug mode enables compiling to an APK file without handling signing keys
and their password. The APK file can be installed to a local device with
USB debugging enabled, but it cannot be published on the Play Store.

By default, `nitc` will compile Android applications in debug mode.


> match: android
> match: app::App

### Release mode


> match: android

Building in release mode will use your private key to sign the
APK file, it can then be published on the Play Store.


> match: android

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


> match: android

