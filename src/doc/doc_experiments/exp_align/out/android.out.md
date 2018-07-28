# Android platform support and APIs

> name: android
> name: android::platform

## Compilation for Android

> name: android

The compiler generates an APK file as the output when the `android`
module is imported by the compilation target. The path to the generated
file can be specified using the `-o` and `--dir` options.

## Host system configuration

To compile Android apps from a 64 bits GNU/Linux host you can reuse an existing Android Studio
installation or make a clean install with command line tools only.

> name: android
> name: linux
> name: android

Note that this guide supports only 64 bits GNU/Linux hosts with support for a Java 8 JDK,
it may be possible to support other platforms with some tweaks.

> name: linux
> name: java

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

> name: android
> name: android::assets_and_resources::NativeAssetManager::open
> name: android::assets_and_resources::AssetManager::open
> name: android::Category::tab
> name: android
> name: android::Action::run
> name: android::shared_preferences_api10::SharedPreferences::setup
> name: android
> name: android
> name: android::shared_preferences_api10::SharedPreferences::setup
> name: java

## Configure the Android application

> name: android

The _app.nit_ framework and this project offers some services to
customize the generated Android application.

> name: app
> name: android::Service
> name: android

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

> name: app
> name: android
> name: android
> name: android>examples>
> name: android::Extra
> name: android::ASensorEvent::version
> name: android::ResourcesManager::integer
> name: android
> name: android
> name: java
> name: android::NativeScanResult::level
> name: android

### Android implementation

> name: android

There is two core implementation for Nit apps on Android.
`android::nit_activity` is used by apps with standard windows and native UI controls.
`android::game` is used by, well, games and the game frameworks `mnit` and `gamnit`.

> name: core
> name: android
> name: android::assets_and_resources::ResourcesManager::native
> name: android::input_events::AndroidMotionEvent::native
> name: android::Activity::native
> name: android::Service::native
> name: android::ui::Control::native
> name: android>ui>
> name: android::ui
> name: android::game

Clients don't have to select the core implementation, it is imported by other relevant modules.
For example, a module importing `app::ui` and `android` will trigger the importation of `android::nit_activity`.

> name: core
> name: android>examples>

### Lock app orientation

> name: app

Importing `android::landscape` or `android::portrait` locks the generated
application in the specified orientation. This can be useful for games and
other multimedia applications.

### Resources and application icon

> name: android::assets_and_resources::NativeContext::resources

Resources specific to the Android platform should be placed in an `android/` folder at the root of the project.
The folder should adopt the structure of a normal Android project, e.g., a custom XML resource file can be placed
at `android/res/values/color.xml` to be compiled with the Android application.

> name: android::assets_and_resources::NativeContext::resources
> name: android
> name: android::platform
> name: android
> name: android

The application icon should also be placed in the `android/` folder.
Place the classic bitmap version at `android/res/mipmap-hdpi/ic_launcher.png` (and others),
and the adaptive version at `android/res/mipmap-anydpi-v26/ic_launcher.xml`.
The Nit compiler detects these files and uses them as the application icon.

> name: android::assets_and_resources::AssetManager::bitmap
> name: android::ASensorEvent::version
> name: android::ASensorEvent::version

Additional `android/` folders may be placed next to more specific Nit modules to change the Android resources
for application variants. The more specific resources will have priority over the project level `android/` files.

> name: android
> name: android::assets_and_resources::NativeContext::resources
> name: android::assets_and_resources::NativeContext::resources
> name: android::audio::SoundPool::priority
> name: android::NativeScanResult::level

## Compilation modes

There are two compilation modes for the Android platform, debug and release.
Theses modes are also applied to the generated Android projects.
The compilation mode is specified as an argument to `nitc`, only
`--release` can be specified as debug is the default behavior.

> name: android
> name: android::platform
> name: android::audio::NativeMediaPlayer::release
> name: android::audio::NativeSoundPool::release
> name: android
> name: android::audio::NativeAudioManager::mode
> name: android::Category::default

### Debug mode

> name: android::audio::NativeAudioManager::mode

Debug mode enables compiling to an APK file without handling signing keys
and their password. The APK file can be installed to a local device with
USB debugging enabled, but it cannot be published on the Play Store.

> name: android::audio::NativeAudioManager::mode
> name: android::Bundle::keys
> name: android::NativeView::enabled
> name: android::AndroidSensor::enabled
> name: android::audio::NativeSoundPool::play
> name: android::SoundPool::play

By default, `nitc` will compile Android applications in debug mode.

> name: android::Category::default
> name: android
> name: android::audio::NativeAudioManager::mode

### Release mode

> name: android::audio::NativeMediaPlayer::release
> name: android::audio::NativeSoundPool::release
> name: android::audio::NativeAudioManager::mode

Building in release mode will use your private key to sign the
APK file, it can then be published on the Play Store.

> name: android::audio::NativeMediaPlayer::release
> name: android::audio::NativeSoundPool::release
> name: android::audio::NativeAudioManager::mode
> name: android::audio::NativeSoundPool::play
> name: android::SoundPool::play

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

> name: android::NativeNotificationBuilder::create
> name: android::audio::NativeMediaPlayer::create
> name: android::Category::default
> name: java
> name: android::Extra::replacing
> name: android::Extra::replacing
> name: android::Action::call

