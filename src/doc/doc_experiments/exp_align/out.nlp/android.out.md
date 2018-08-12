# Android platform support and APIs

> match: android::platform
> match: android::android
> match: android::input_events::NativeAndroidMotionEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter

## Compilation for Android

> match: android::android
> match: android::input_events::NativeAndroidMotionEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android::Android_widget_SpinnerAdapter
> match: android::Android_widget_CompoundButton
> match: android::AndroidMotionEvent

The compiler generates an APK file as the output when the `android`
module is imported by the compilation target. The path to the generated
file can be specified using the `-o` and `--dir` options.

> match: android::android
> match: android::input_events::NativeAndroidMotionEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android::Android_widget_SpinnerAdapter
> match: android::Android_widget_CompoundButton
> match: android::AndroidMotionEvent

## Host system configuration

> match: android::NativeWifiManager::save_configuration
> match: android::Activity::on_configuration_changed
> match: android::NativeKeyEvent::is_system

To compile Android apps from a 64 bits GNU/Linux host you can reuse an existing Android Studio
installation or make a clean install with command line tools only.

> match: android::Android_app_Fragment
> match: android::android
> match: android::AndroidPointerEvent
> match: android::AndroidInputEvent
> match: android::AndroidKeyEvent
> match: android::AndroidSensor
> match: android::input_events::NativeAndroidMotionEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android::Android_widget_SpinnerAdapter
> match: android::Android_widget_CompoundButton
> match: android::AndroidMotionEvent
> match: android::NativeAppGlue

Note that this guide supports only 64 bits GNU/Linux hosts with support for a Java 8 JDK,
it may be possible to support other platforms with some tweaks.

> match: android::platform
> match: android::http_request::JavaHttpResponse

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

> match: android::NdkNativeActivity::sdk_version
> match: android::dalvik::Sys::class_loader_method
> match: android::android
> match: android::AndroidPointerEvent
> match: android::AndroidInputEvent
> match: android::AndroidSensor
> match: android::AndroidKeyEvent
> match: android::input_events::NativeAndroidMotionEvent
> match: android::NativePackageManager
> match: android::ASensorManager
> match: android::NativeNotificationManager
> match: android::NativeWifiManager
> match: android::ResourcesManager
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::Android_widget_ListView
> match: android::audio::NativeAudioManager
> match: android::Android_widget_Adapter
> match: android::AndroidPointerEvent
> match: android::AndroidKeyEvent
> match: android::AndroidInputEvent
> match: android::AndroidSensor
> match: android::input_events::NativeAndroidMotionEvent
> match: android::intent_api10::StringCopyHashSet
> match: android::http_request::JavaHttpResponse

## Configure the Android application

> match: android::AndroidPointerEvent
> match: android::AndroidKeyEvent
> match: android::AndroidInputEvent
> match: android::AndroidSensor
> match: android::input_events::NativeAndroidMotionEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android::Android_widget_SpinnerAdapter
> match: android::Android_widget_CompoundButton
> match: android::AndroidMotionEvent

The _app.nit_ framework and this project offers some services to
customize the generated Android application.

> match: android>service>
> match: android::android
> match: android::Service
> match: android::NativeService
> match: android::input_events::NativeAndroidMotionEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView

### Annotations

> match: android::aware

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

> match: android::android
> match: android::input_events::NativeAndroidMotionEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android::Android_widget_SpinnerAdapter
> match: android::Android_widget_CompoundButton
> match: android::AndroidMotionEvent
> match: android>notification>
> match: android::AndroidPointerEvent
> match: android::AndroidKeyEvent
> match: android::AndroidInputEvent
> match: android::AndroidSensor
> match: android::input_events::NativeAndroidMotionEvent
> match: android>examples>
> match: android::Flag::grant_write_uri_permission
> match: android::Flag::grant_read_uri_permission
> match: android::intent_api19::Flag::grant_persistable_uri_permission
> match: android::AndroidPointerEvent
> match: android::AndroidKeyEvent
> match: android::AndroidInputEvent
> match: android::AndroidSensor
> match: android>notification>
> match: android::NativeNitActivity
> match: android::AndroidPointerEvent
> match: android::AndroidKeyEvent
> match: android::AndroidInputEvent
> match: android::AndroidSensor
> match: android::http_request::JavaHttpResponse
> match: android::input_events::NativeAndroidMotionEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android::Android_widget_SpinnerAdapter
> match: android::Android_widget_CompoundButton
> match: android::AndroidMotionEvent
> match: android

### Android implementation

> match: android::android
> match: android::input_events::NativeAndroidMotionEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android::Android_widget_SpinnerAdapter
> match: android::Android_widget_CompoundButton
> match: android::AndroidMotionEvent

There is two core implementation for Nit apps on Android.
`android::nit_activity` is used by apps with standard windows and native UI controls.
`android::game` is used by, well, games and the game frameworks `mnit` and `gamnit`.

> match: android>ui>
> match: android::Android_app_Fragment
> match: android::input_events::NativeAndroidMotionEvent
> match: android::game
> match: android::NativeNitActivity
> match: android::NativeAppGlue
> match: android::AndroidInputEvent
> match: android::AndroidPointerEvent
> match: android::AndroidKeyEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_widget_ListView
> match: android::AndroidSensor
> match: android::Android_widget_Adapter
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android::nit_activity
> match: android::Android_widget_SpinnerAdapter
> match: android::Android_widget_CompoundButton
> match: android::AndroidMotionEvent
> match: android
> match: android::NativeContext

Clients don't have to select the core implementation, it is imported by other relevant modules.
For example, a module importing `app::ui` and `android` will trigger the importation of `android::nit_activity`.

> match: android>ui>
> match: android::Android_app_Fragment
> match: android::android
> match: android>examples>
> match: android::input_events::NativeAndroidMotionEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android::Android_widget_SpinnerAdapter
> match: android::Android_widget_CompoundButton
> match: android::AndroidMotionEvent
> match: android::NativeAppGlue
> match: android

### Lock app orientation

> match: android::Android_app_Fragment

Importing `android::landscape` or `android::portrait` locks the generated
application in the specified orientation. This can be useful for games and
other multimedia applications.

> match: android::portrait
> match: android::landscape
> match: android::android
> match: android::game
> match: android::input_events::NativeAndroidMotionEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter

### Resources and application icon

> match: android::ResourcesManager
> match: android::assets_and_resources::NativeResources

Resources specific to the Android platform should be placed in an `android/` folder at the root of the project.
The folder should adopt the structure of a normal Android project, e.g., a custom XML resource file can be placed
at `android/res/values/color.xml` to be compiled with the Android application.

> match: android::platform
> match: android::ResourcesManager
> match: android::assets_and_resources::NativeResources
> match: android::input_events::NativeAndroidMotionEvent
> match: android::AndroidInputEvent
> match: android
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::AndroidPointerEvent
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android::AndroidKeyEvent
> match: android::Android_widget_SpinnerAdapter
> match: android::Android_widget_CompoundButton
> match: android::AndroidMotionEvent
> match: android::AndroidSensor

The application icon should also be placed in the `android/` folder.
Place the classic bitmap version at `android/res/mipmap-hdpi/ic_launcher.png` (and others),
and the adaptive version at `android/res/mipmap-anydpi-v26/ic_launcher.xml`.
The Nit compiler detects these files and uses them as the application icon.

> match: android::android
> match: android::assets_and_resources::NativeBitmap
> match: android::NativeNitActivity
> match: android::input_events::NativeAndroidMotionEvent

Additional `android/` folders may be placed next to more specific Nit modules to change the Android resources
for application variants. The more specific resources will have priority over the project level `android/` files.

> match: android::android
> match: android::input_events::NativeAndroidMotionEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::AndroidMotionEvent
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter
> match: android::NativeNitActivity
> match: android::Android_widget_ListAdapter
> match: android
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android::Android_widget_SpinnerAdapter

## Compilation modes

> match: android::audio::NativeAudioManager::mode
> match: android::audio::NativeAudioManager::mode=

There are two compilation modes for the Android platform, debug and release.
Theses modes are also applied to the generated Android projects.
The compilation mode is specified as an argument to `nitc`, only
`--release` can be specified as debug is the default behavior.

> match: android::audio::NativeMediaPlayer::release
> match: android::audio::NativeSoundPool::release
> match: android::audio::NativeAudioManager::mode
> match: android::Category::default
> match: android::audio::NativeAudioManager::mode=
> match: android::platform
> match: android::android
> match: android::shared_preferences_api10::SharedPreferences::private_mode
> match: android::log::Sys::priority_debug
> match: android::Flag::debug_log_resolution
> match: android::shared_preferences_api11::SharedPreferences::multi_process_mode
> match: android::Category::car_mode

### Debug mode

> match: android::audio::NativeAudioManager::mode
> match: android::audio::NativeAudioManager::mode=

Debug mode enables compiling to an APK file without handling signing keys
and their password. The APK file can be installed to a local device with
USB debugging enabled, but it cannot be published on the Play Store.

> match: android::audio::NativeAudioManager::mode
> match: android::NativeView::enabled=
> match: android::audio::NativeAudioManager::mode=
> match: android::AndroidSensor::enabled
> match: android::NativeView::enabled
> match: android::audio::NativeMediaPlayer::playing
> match: android::sensors::App::handle_sensor_events
> match: android::ui::NativeEditText::is_password=
> match: android::shared_preferences_api10::SharedPreferences::private_mode
> match: android::Flag::debug_log_resolution
> match: android::shared_preferences_api11::SharedPreferences::multi_process_mode
> match: android::MediaPlayer::playing
> match: android::NativeIntent::has_file_descriptors
> match: android::log::Sys::priority_debug
> match: android::NativeBundle::has_file_descriptors
> match: android::SoundPool::play
> match: android::intent_api11::Extra::local_only

By default, `nitc` will compile Android applications in debug mode.

> match: android::AndroidPointerEvent
> match: android::AndroidKeyEvent
> match: android::AndroidInputEvent
> match: android::AndroidSensor

### Release mode

> match: android::audio::NativeAudioManager::mode
> match: android::audio::NativeAudioManager::mode=

Building in release mode will use your private key to sign the
APK file, it can then be published on the Play Store.

> match: android::audio::NativeMediaPlayer::release
> match: android::audio::NativeSoundPool::release
> match: android::audio::NativeAudioManager::mode
> match: android::audio::NativeAudioManager::mode=
> match: android::audio::NativeMediaPlayer::playing
> match: android::shared_preferences_api10::SharedPreferences::private_mode

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

> match: android::key_event
> match: android::NativeKeyEvent
> match: android::http_request::JavaHttpResponse
> match: android::intent_api10::StringCopyHashSet
> match: android::Extra::replacing
> match: android::NativeWifiManager::save_configuration
> match: android::Activity::on_configuration_changed
> match: android::intent_api14::Extra::allow_replace
> match: android::Flag::receiver_replace_pending
> match: android::NativeIntent::replace_extras
> match: android::Service::on_start_command
> match: android::NativeBundle::get_int_with_def_value
> match: android::NativeBundle::get_byte_with_def_value
> match: android::NativeBundle::get_long_with_def_value
> match: android::NativeBundle::get_short_with_def_value
> match: android::NativeBundle::get_boolean_with_def_value
> match: android::NativeBundle::get_double_with_def_value
> match: android::NativeBundle::get_float_with_def_value
> match: android::NativeBundle::get_char_with_def_value
> match: android::Action::call
> match: android::audio::NativeMediaPlayer::release
> match: android::audio::NativeSoundPool::release

