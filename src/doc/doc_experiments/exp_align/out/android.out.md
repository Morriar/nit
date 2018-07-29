# Android platform support and APIs

> match: android
> match: android::android
> match: android::platform
> match: android>shared_preferences>
> match: android::shared_preferences
> match: android>
> match: android::SharedPreferences

## Compilation for Android

> match: android
> match: android::android
> match: android>
> match: android::platform
> match: android::Activity
> match: android::aware

The compiler generates an APK file as the output when the `android`
module is imported by the compilation target. The path to the generated
file can be specified using the `-o` and `--dir` options.

> match: android
> match: android>
> match: android::native_app_glue::App::save_state
> match: android::SharedPreferences::clear
> match: android::android

## Host system configuration

> match: android::NativeAppGlue::config
> match: android::native_app_glue::App::config_changed
> match: android::Activity::on_configuration_changed
> match: android::wifi::NativeContext::wifi_manager
> match: android::service::Sys::start_not_sticky

To compile Android apps from a 64 bits GNU/Linux host you can reuse an existing Android Studio
installation or make a clean install with command line tools only.

> match: android
> match: android::android
> match: linux
> match: android>
> match: android::native_app_glue::App::destroy
> match: android::native_app_glue::App::pause
> match: android::native_app_glue::App::stop

Note that this guide supports only 64 bits GNU/Linux hosts with support for a Java 8 JDK,
it may be possible to support other platforms with some tweaks.

> match: linux
> match: java
> match: android::sensors::App::enable_sensors
> match: android>
> match: android
> match: android>service>
> match: android::service::Sys::start_not_sticky

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
> match: java
> match: android::Category::tab
> match: android::shared_preferences_api10::SharedPreferences::setup
> match: android::Action::run
> match: android::assets_and_resources::AssetManager::open
> match: android::assets_and_resources::NativeAssetManager::open
> match: android>
> match: android::assets_and_resources::NativeContext::package_name
> match: android::Intent::package_name
> match: android::Activity
> match: android::native_app_glue::App::save_state
> match: android::sensors::App::initialize_event_queue
> match: android::native_app_glue::App::set_as_cmd_handler
> match: android::wifi::NativeContext::wifi_manager
> match: android::service::Sys::start_not_sticky
> match: android::cardboard
> match: android::ALooper
> match: android>ui>
> match: android::NdkNativeActivity::sdk_version
> match: android::AConfiguration
> match: android::assets_and_resources::NativeAssetManager
> match: android::ANativeWindow::set_buffers_geometry

## Configure the Android application

> match: android
> match: android::android
> match: android::ui::NativeEditText::is_password=
> match: android::nit_activity::AppComponent::on_destroy
> match: android::game::App::paused
> match: android::assets_and_resources::NativeContext::package_name
> match: android::nit_activity::AppComponent::on_start

The _app.nit_ framework and this project offers some services to
customize the generated Android application.

> match: android
> match: app
> match: android::android
> match: android::Service
> match: android>service>
> match: android>
> match: android::Service::native
> match: android::native_app_glue::App::save_state

### Annotations

> match: android::aware
> match: android>
> match: android
> match: android::NativeIntent
> match: android::NativeAssetFileDescriptor::length

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
> match: android::android
> match: android::Extra
> match: android::ResourcesManager::integer
> match: java
> match: android>examples>
> match: app
> match: android::NativeScanResult::level
> match: android::ASensorEvent::version
> match: android>
> match: android>service>
> match: android::aware
> match: android>notification>
> match: android::nit_activity::AppComponent::on_start
> match: android::Intent::remove_extra
> match: android::SharedPreferences::all
> match: android::nit_activity::AppComponent::on_destroy
> match: android::Intent::add_extra_string
> match: android::Intent::add_extra_int
> match: android::Intent::has_extra
> match: android::Intent::add_extra_byte
> match: android::SharedPreferences::clear
> match: android::ANativeWindow::set_buffers_geometry
> match: android::Intent::add_flags
> match: android::Intent::set_class_name
> match: android::NativeIntent
> match: android::NativeAssetFileDescriptor::length

### Android implementation

> match: android
> match: android::android
> match: android>
> match: android::native_app_glue::App::native_app_glue
> match: android::Activity
> match: android::aware

There is two core implementation for Nit apps on Android.
`android::nit_activity` is used by apps with standard windows and native UI controls.
`android::game` is used by, well, games and the game frameworks `mnit` and `gamnit`.

> match: android::game
> match: android::nit_activity
> match: android
> match: android::ui
> match: android>ui>
> match: core
> match: android::android
> match: mnit>
> match: mnit
> match: gamnit
> match: gamnit>
> match: gamnit::gamnit
> match: android::ui::Control::native
> match: android::input_events::AndroidMotionEvent::native
> match: android::Activity::native
> match: android::Service::native
> match: android::assets_and_resources::ResourcesManager::native
> match: android>
> match: android::native_app_glue::App::pause
> match: android::native_app_glue::App::stop
> match: android::SoundPool::stream_type

Clients don't have to select the core implementation, it is imported by other relevant modules.
For example, a module importing `app::ui` and `android` will trigger the importation of `android::nit_activity`.

> match: android::nit_activity
> match: app::ui
> match: core
> match: android>examples>
> match: android
> match: android>
> match: android::vibration
> match: android::aware
> match: android>shared_preferences>

### Lock app orientation

> match: app
> match: android::landscape
> match: android::portrait
> match: android::nit_activity::App::set_global_app
> match: android::native_app_glue::App::pause
> match: android::native_app_glue::App::stop

Importing `android::landscape` or `android::portrait` locks the generated
application in the specified orientation. This can be useful for games and
other multimedia applications.

> match: android::landscape
> match: android::portrait
> match: android>
> match: android
> match: android::SoundPool::stream_type

### Resources and application icon

> match: android::assets_and_resources::NativeContext::resources
> match: android::Notification::small_icon
> match: android::nit_activity::AppComponent::on_destroy
> match: android::game::App::paused
> match: android::assets_and_resources::NativeContext::package_name
> match: android::nit_activity::AppComponent::on_start

Resources specific to the Android platform should be placed in an `android/` folder at the root of the project.
The folder should adopt the structure of a normal Android project, e.g., a custom XML resource file can be placed
at `android/res/values/color.xml` to be compiled with the Android application.

> match: android
> match: android::android
> match: android::assets_and_resources::NativeContext::resources
> match: android::platform
> match: android>
> match: android::assets_and_resources::NativeResources
> match: android::ResourcesManager
> match: android::Activity

The application icon should also be placed in the `android/` folder.
Place the classic bitmap version at `android/res/mipmap-hdpi/ic_launcher.png` (and others),
and the adaptive version at `android/res/mipmap-anydpi-v26/ic_launcher.xml`.
The Nit compiler detects these files and uses them as the application icon.

> match: android::assets_and_resources::AssetManager::bitmap
> match: android::ASensorEvent::version
> match: android>
> match: android
> match: android::Notification::small_icon
> match: android::assets_and_resources::NativeResources
> match: android::ResourcesManager

Additional `android/` folders may be placed next to more specific Nit modules to change the Android resources
for application variants. The more specific resources will have priority over the project level `android/` files.

> match: android::assets_and_resources::NativeContext::resources
> match: android
> match: android::audio::SoundPool::priority
> match: android::android
> match: android::NativeScanResult::level
> match: android>
> match: android::assets_and_resources::NativeResources
> match: android::ResourcesManager
> match: android::aware

## Compilation modes

> match: android::shared_preferences_api10::SharedPreferences::private_mode
> match: android::shared_preferences_api11::SharedPreferences::multi_process_mode
> match: android::audio::NativeAudioManager
> match: android::SoundPool::stream_loop=
> match: android::platform

There are two compilation modes for the Android platform, debug and release.
Theses modes are also applied to the generated Android projects.
The compilation mode is specified as an argument to `nitc`, only
`--release` can be specified as debug is the default behavior.

> match: android
> match: android::android
> match: android::platform
> match: android::audio::NativeSoundPool::release
> match: android::audio::NativeMediaPlayer::release
> match: android::Category::default
> match: android::audio::NativeAudioManager::mode
> match: android>
> match: android::log::Sys::priority_debug
> match: android::ANativeWindow::set_buffers_geometry

### Debug mode

> match: android::audio::NativeAudioManager::mode
> match: android::shared_preferences_api10::SharedPreferences::private_mode
> match: android::shared_preferences_api11::SharedPreferences::multi_process_mode
> match: android::audio::NativeAudioManager
> match: android::SoundPool::stream_loop=
> match: android::assets_and_resources::NativeAssetManager::open

Debug mode enables compiling to an APK file without handling signing keys
and their password. The APK file can be installed to a local device with
USB debugging enabled, but it cannot be published on the Play Store.

> match: android::Bundle::keys
> match: android::SoundPool::play
> match: android::audio::NativeSoundPool::play
> match: android::AndroidSensor::enabled
> match: android::NativeView::enabled
> match: android::audio::NativeAudioManager::mode
> match: android>
> match: android
> match: android::shared_preferences_api10::SharedPreferences::private_mode
> match: android::SharedPreferences::clear
> match: android::shared_preferences_api11::SharedPreferences::multi_process_mode

By default, `nitc` will compile Android applications in debug mode.

> match: android
> match: android::android
> match: android::Category::default
> match: android::audio::NativeAudioManager::mode
> match: android>
> match: android::SoundPool::stream_type
> match: android::audio::NativeAudioManager
> match: android::log::Sys::priority_debug

### Release mode

> match: android::audio::NativeMediaPlayer::release
> match: android::audio::NativeSoundPool::release
> match: android::audio::NativeAudioManager::mode
> match: android::shared_preferences_api10::SharedPreferences::private_mode
> match: android::shared_preferences_api11::SharedPreferences::multi_process_mode
> match: android::audio::NativeAudioManager
> match: android::SoundPool::stream_loop=
> match: android::assets_and_resources::NativeAssetManager::open

Building in release mode will use your private key to sign the
APK file, it can then be published on the Play Store.

> match: android::audio::NativeMediaPlayer::release
> match: android::audio::NativeSoundPool::release
> match: android::audio::NativeSoundPool::play
> match: android::audio::NativeAudioManager::mode
> match: android::SoundPool::play
> match: android>
> match: android
> match: android::shared_preferences_api10::SharedPreferences::private_mode
> match: android::shared_preferences_api11::SharedPreferences::multi_process_mode
> match: android::service::App::start_service

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

> match: android::Extra::replacing
> match: android::Action::call
> match: java
> match: android::NativeNotificationBuilder::create
> match: android::Category::default
> match: android::audio::NativeMediaPlayer::create
> match: android>
> match: android
> match: android::ANativeWindow::set_buffers_geometry
> match: android::intent_api10::App::start_service
> match: android::shared_preferences_api11::NativeSharedPreferences::get_string_set
> match: android::SharedPreferences::clear
> match: android::SharedPreferences::all
> match: android::Activity::on_key_multiple
> match: android::Activity::on_back_pressed
> match: android::Activity
> match: android::shared_preferences_api11::SharedPreferences::add_string_set
> match: android::native_app_glue::App::save_state
> match: android::NativeAppGlue::config
> match: android::service::Sys::start_not_sticky
> match: android::Action
> match: android::service::App::start_service

