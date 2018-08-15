# Android platform support and APIs

> match: android::platform
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
> match: android>service>
> match: android::SharedPreferences
> match: android::aware
> match: android>shared_preferences>
> match: android::NativeContext
> match: android::Vibrator
> match: android::Service
> match: android::Notification
> match: android::assets_and_resources::NativeBitmap
> match: android::NativeActivity
> match: android::AndroidInputEvent
> match: android::Activity
> match: android>notification>
> match: android::ResourcesManager
> match: android::assets_and_resources::NativeResources
> match: android::AssetManager
> match: android::native_app_glue
> match: android::landscape
> match: android::toast
> match: android::wifi
> match: android>intent>
> match: android::NdkNativeActivity
> match: android::game
> match: android::http_request
> match: android::nit_activity
> match: android::gamepad
> match: android::shared_preferences_api10
> match: android::audio
> match: android::sensors

## Compilation for Android

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
> match: android::platform
> match: android::aware
> match: android::NativeContext
> match: android::Vibrator
> match: android::Service
> match: android::Notification
> match: android>service>
> match: android::assets_and_resources::NativeBitmap
> match: android::NativeActivity
> match: android::AndroidInputEvent
> match: android::SharedPreferences
> match: android::Activity
> match: android>notification>
> match: android::ResourcesManager
> match: android::assets_and_resources::NativeResources
> match: android::AssetManager
> match: android::landscape
> match: android::toast
> match: android::wifi
> match: android>shared_preferences>
> match: android::NdkNativeActivity
> match: android::native_app_glue
> match: android::game
> match: android::http_request
> match: android>intent>
> match: android::nit_activity
> match: android::audio
> match: android::sensors
> match: android::shared_preferences_api10

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
> match: android
> match: android::platform
> match: android::aware
> match: android::NativeContext
> match: android::Vibrator
> match: android::Service
> match: android::Notification
> match: android>service>
> match: android::assets_and_resources::NativeBitmap
> match: android::NativeActivity
> match: android::AndroidInputEvent
> match: android::SharedPreferences
> match: android::Activity
> match: android>notification>
> match: android::ResourcesManager
> match: android::assets_and_resources::NativeResources
> match: android::AssetManager
> match: android::landscape
> match: android::toast
> match: android::wifi
> match: android>shared_preferences>
> match: android::shared_preferences
> match: android::NdkNativeActivity
> match: android::nit_activity
> match: android::native_app_glue
> match: android::service
> match: android::game
> match: android::http_request
> match: android>intent>
> match: android::intent
> match: android::assets_and_resources
> match: android::notification
> match: android::audio
> match: android::sensors
> match: android::shared_preferences_api10

## Host system configuration

> match: android::AConfiguration
> match: android
> match: android>intent>

To compile Android apps from a 64 bits GNU/Linux host you can reuse an existing Android Studio
installation or make a clean install with command line tools only.

> match: android::Android_app_Fragment
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
> match: android
> match: android::native_app_glue
> match: android::ResourcesManager
> match: android::Activity
> match: android::assets_and_resources::NativeResources
> match: android::AConfiguration
> match: android::aware
> match: android::wifi
> match: android::NativeContext
> match: android::Vibrator
> match: android::Service
> match: android::NativeView
> match: android::Notification
> match: android>ui>
> match: android::NativeLinearLayout
> match: android>service>
> match: android::assets_and_resources::NativeBitmap
> match: android::NativeActivity
> match: android::SharedPreferences
> match: android::nit_activity
> match: android>notification>
> match: android::Extra
> match: android::platform
> match: android::ALooper
> match: android::AssetManager
> match: android::SoundPool
> match: android::assets_and_resources::NativeAssetManager
> match: android::activities
> match: android::NativeAssetFileDescriptor
> match: android::landscape
> match: android::Flag
> match: android::toast
> match: android::ANativeWindow
> match: android::AInputQueue
> match: android::Action
> match: android::Category
> match: android>shared_preferences>
> match: android::NdkNativeActivity
> match: android::http_request
> match: android::NativeNativeActivity
> match: android::vibration
> match: android::assets
> match: android>intent>
> match: android::data_store
> match: android::dalvik
> match: android::game
> match: android::cardboard
> match: android::assets_and_resources
> match: android::log
> match: android::sensors
> match: android::audio
> match: android::shared_preferences_api10

Note that this guide supports only 64 bits GNU/Linux hosts with support for a Java 8 JDK,
it may be possible to support other platforms with some tweaks.

> match: android::platform
> match: android::http_request::JavaHttpResponse
> match: android
> match: android>service>
> match: android::SharedPreferences
> match: android::NativeNativeActivity
> match: android::nit_activity
> match: android>shared_preferences>
> match: android::NativeService
> match: android::NativeKeyEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::NativeScanResult
> match: android::NativeWifiManager
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter
> match: android::bundle::StringCopyArray
> match: android::NativeListOfScanResult
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::native_notification
> match: android::NativeNitActivity
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android::Android_widget_SpinnerAdapter
> match: android::audio::NativeSoundPool
> match: android::Android_widget_CompoundButton
> match: android::assets_and_resources::NativeAssetManager
> match: android::audio::NativeMediaPlayer
> match: android::native_app_glue
> match: android::NativeHeadTracker
> match: android::gamepad
> match: android::dalvik
> match: android::shared_preferences_api10
> match: android::audio

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
> match: android::cardboard
> match: android::NativeNativeActivity
> match: android>intent>
> match: android::nit_activity
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
> match: android::AssetManager
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android::Android_widget_SpinnerAdapter
> match: android::Android_widget_CompoundButton
> match: android::assets_and_resources::NativeAssetManager
> match: android::AndroidMotionEvent
> match: android
> match: android::NativeNativeActivity
> match: android::cardboard
> match: android::Activity
> match: android::NativeView
> match: android>ui>
> match: android::wifi
> match: android::native_app_glue
> match: android::Extra
> match: android::ALooper
> match: android::activities
> match: android::AConfiguration
> match: android::aware
> match: android::NativeAssetFileDescriptor
> match: android::Flag
> match: android::ANativeWindow
> match: android::AInputQueue
> match: android::Action
> match: android::Category
> match: android::nit_activity
> match: android::NativeContext
> match: android::vibration
> match: android::Vibrator
> match: android::Service
> match: android::Notification
> match: android>service>
> match: android::assets_and_resources::NativeBitmap
> match: android::NativeActivity
> match: android::SharedPreferences
> match: android>notification>
> match: android::dalvik
> match: android::assets_and_resources::NativeResources
> match: android::platform
> match: android>intent>
> match: android::landscape
> match: android::toast
> match: android>shared_preferences>
> match: android::NdkNativeActivity
> match: android::log
> match: android::assets
> match: android::game
> match: android::http_request
> match: android::audio
> match: android::assets_and_resources
> match: android::sensors
> match: android::shared_preferences_api10
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
> match: android
> match: android>intent>
> match: android::vibration
> match: android::NativeView
> match: android>ui>
> match: android::NativeLinearLayout
> match: android::cardboard
> match: android::native_app_glue
> match: android::Extra
> match: android::ALooper
> match: android::Activity
> match: android::activities
> match: android::AConfiguration
> match: android::NativeAssetFileDescriptor
> match: android::Flag
> match: android::ANativeWindow
> match: android::AInputQueue
> match: android::Action
> match: android::Category
> match: android::wifi
> match: android::NativeNativeActivity
> match: android::nit_activity
> match: android::dalvik
> match: android::log
> match: android::assets
> match: android::assets_and_resources
> match: android::intent_api10::StringCopyHashSet
> match: android
> match: android::cardboard
> match: android::NativeNativeActivity
> match: android::assets_and_resources::NativeAssetManager
> match: android::Activity
> match: android::portrait
> match: android::Action
> match: android::nit_activity
> match: android::sensors
> match: android::assets_and_resources
> match: android::http_request::JavaHttpResponse
> match: android
> match: android::NativeNativeActivity
> match: android::Activity
> match: android::NativeService
> match: android::NativeKeyEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::NativeScanResult
> match: android::NativeWifiManager
> match: android::nit_activity
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter
> match: android::bundle::StringCopyArray
> match: android::NativeListOfScanResult
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::native_notification
> match: android::NativeNitActivity
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android::Android_widget_SpinnerAdapter
> match: android::audio::NativeSoundPool
> match: android::Android_widget_CompoundButton
> match: android::assets_and_resources::NativeAssetManager
> match: android::audio::NativeMediaPlayer
> match: android::native_app_glue
> match: android::NativeHeadTracker
> match: android::dalvik
> match: android>intent>
> match: android::sensors

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
> match: android
> match: android::native_app_glue
> match: android::NativeView
> match: android>ui>
> match: android::Extra
> match: android::audio::NativeAudioManager
> match: android::ALooper
> match: android::Activity
> match: android::activities
> match: android::AConfiguration
> match: android::NativeAssetFileDescriptor
> match: android::Flag
> match: android::ANativeWindow
> match: android::AInputQueue
> match: android::Action
> match: android::landscape
> match: android::Category
> match: android::wifi
> match: android::NativeNativeActivity
> match: android::vibration
> match: android::nit_activity
> match: android>intent>
> match: android::dalvik
> match: android::cardboard
> match: android::log
> match: android::assets
> match: android::assets_and_resources

The _app.nit_ framework and this project offers some services to
customize the generated Android application.

> match: android>service>
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
> match: android::Android_widget_SpinnerAdapter
> match: android::Android_widget_CompoundButton
> match: android::AndroidMotionEvent
> match: android
> match: android::native_app_glue
> match: android::wifi
> match: android::SharedPreferences
> match: android::aware
> match: android::NdkNativeActivity
> match: android::landscape
> match: android::game
> match: android::NativeContext
> match: android::Vibrator
> match: android::Notification
> match: android>ui>
> match: android::assets_and_resources::NativeBitmap
> match: android::Intent
> match: android::NativeActivity
> match: android::AndroidInputEvent
> match: android::Activity
> match: android>notification>
> match: android::ResourcesManager
> match: android::assets_and_resources::NativeResources
> match: android::audio::NativeAudioManager
> match: android::platform
> match: android::AssetManager
> match: android>intent>
> match: android::toast
> match: android::intent_api18
> match: android::intent_api14
> match: android::intent_api17
> match: android::intent_api12
> match: android::intent_api19
> match: android>shared_preferences>
> match: android::intent_api11
> match: android::intent_api15
> match: android::ui_test
> match: android::cardboard
> match: android::vibration
> match: android::nit_activity
> match: android::dalvik
> match: android::shared_preferences_api11
> match: android::http_request
> match: android::log
> match: android::intent_api16
> match: android::assets
> match: android::load_image
> match: android::audio
> match: android::native_ui
> match: android::assets_and_resources
> match: android::sensors
> match: android::shared_preferences_api10
> match: android::intent_api10

### Annotations

> match: android::aware
> match: android

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
> match: android::aware
> match: android>service>
> match: android::NdkNativeActivity
> match: android::NativeContext
> match: android::native_app_glue
> match: android::Vibrator
> match: android::Service
> match: android::Notification
> match: android::assets_and_resources::NativeBitmap
> match: android::NativeActivity
> match: android::AndroidInputEvent
> match: android::SharedPreferences
> match: android::Activity
> match: android::game
> match: android>notification>
> match: android::ResourcesManager
> match: android::assets_and_resources::NativeResources
> match: android::platform
> match: android::AssetManager
> match: android::landscape
> match: android::toast
> match: android::wifi
> match: android>shared_preferences>
> match: android::cardboard
> match: android::nit_activity
> match: android::ui_test
> match: android::http_request
> match: android>intent>
> match: android::assets_and_resources
> match: android::audio
> match: android::sensors
> match: android::shared_preferences_api10
> match: android>notification>
> match: android
> match: android::audio
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
> match: android
> match: android::Extra
> match: android::landscape
> match: android::Category
> match: android::aware
> match: android::NativeView
> match: android>ui>
> match: android>notification>
> match: android::ALooper
> match: android::Activity
> match: android::activities
> match: android::AConfiguration
> match: android::NativeAssetFileDescriptor
> match: android::Flag
> match: android::ANativeWindow
> match: android::NativeHeadTracker
> match: android::AInputQueue
> match: android::Action
> match: android::intent_api18
> match: android::intent_api14
> match: android::intent_api17
> match: android::intent_api12
> match: android::intent_api19
> match: android::nit_activity
> match: android::native_app_glue
> match: android::intent_api11
> match: android::wifi
> match: android::NativeNativeActivity
> match: android::intent_api15
> match: android::vibration
> match: android::dalvik
> match: android::shared_preferences_api11
> match: android::cardboard
> match: android::log
> match: android::intent_api16
> match: android::assets
> match: android>intent>
> match: android::assets_and_resources
> match: android>examples>
> match: android::Extra
> match: android::vibration
> match: android
> match: android::Category
> match: android::sensors
> match: android::audio
> match: android::AndroidPointerEvent
> match: android::AndroidKeyEvent
> match: android::AndroidInputEvent
> match: android::AndroidSensor
> match: android::input_events::NativeAndroidMotionEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter
> match: android::AndroidMotionEvent
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android::Android_widget_SpinnerAdapter
> match: android::Android_widget_CompoundButton
> match: android
> match: android>shared_preferences>
> match: android::landscape
> match: android::NativeView
> match: android::intent_api18
> match: android::intent_api14
> match: android::intent_api17
> match: android::intent_api12
> match: android::NativeActivity
> match: android>ui>
> match: android::intent_api19
> match: android::intent_api11
> match: android::native_app_glue
> match: android::intent_api15
> match: android::Extra
> match: android::ALooper
> match: android::Activity
> match: android::activities
> match: android::AConfiguration
> match: android::NativeAssetFileDescriptor
> match: android::Flag
> match: android::ANativeWindow
> match: android::AInputQueue
> match: android::Action
> match: android::Category
> match: android::nit_activity
> match: android::wifi
> match: android::NdkNativeActivity
> match: android::NativeNativeActivity
> match: android>intent>
> match: android::shared_preferences_api11
> match: android::vibration
> match: android::dalvik
> match: android::intent_api16
> match: android::cardboard
> match: android::log
> match: android::assets
> match: android::audio
> match: android::assets_and_resources
> match: android>notification>
> match: android
> match: android::audio
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
> match: android::nit_activity
> match: android::aware
> match: android::native_app_glue
> match: android>ui>
> match: android::audio::NativeAudioManager
> match: android::NativeNativeActivity
> match: android::landscape
> match: android::vibration
> match: android::NativeView
> match: android>intent>
> match: android::Extra
> match: android::NativeActivity
> match: android::ALooper
> match: android::Activity
> match: android::activities
> match: android::AConfiguration
> match: android::NativeAssetFileDescriptor
> match: android::dalvik
> match: android::Flag
> match: android::ANativeWindow
> match: android::AInputQueue
> match: android::Action
> match: android::Category
> match: android::NativeService
> match: android::cardboard
> match: android::NativeKeyEvent
> match: android::NativeScanResult
> match: android::NativeWifiManager
> match: android::wifi
> match: android::bundle::StringCopyArray
> match: android::NativeListOfScanResult
> match: android::native_notification
> match: android::audio::NativeSoundPool
> match: android::assets_and_resources::NativeAssetManager
> match: android::audio::NativeMediaPlayer
> match: android::NativeHeadTracker
> match: android::assets
> match: android::load_image
> match: android::log
> match: android::assets_and_resources
> match: android::game
> match: android::http_request
> match: android::audio

### Android implementation

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
> match: android::aware
> match: android::NativeContext
> match: android::Vibrator
> match: android::Service
> match: android::Notification
> match: android>service>
> match: android::assets_and_resources::NativeBitmap
> match: android::NativeActivity
> match: android::AndroidInputEvent
> match: android::SharedPreferences
> match: android::Activity
> match: android>notification>
> match: android::ResourcesManager
> match: android::assets_and_resources::NativeResources
> match: android::platform
> match: android::AssetManager
> match: android::landscape
> match: android::toast
> match: android::wifi
> match: android>shared_preferences>
> match: android::game
> match: android::NdkNativeActivity
> match: android::http_request
> match: android::native_app_glue
> match: android::nit_activity
> match: android>intent>
> match: android::assets
> match: android::audio
> match: android::sensors
> match: android::shared_preferences_api10

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
> match: android::NativeBundle
> match: android::NativeView
> match: android::NativeIntent
> match: android::assets_and_resources::NativeResources
> match: android::NativeButton
> match: android::NativeTextView
> match: android::NativeEditText
> match: android::NativePackageManager
> match: android::assets_and_resources::NativeBitmap
> match: android::NativeActivity
> match: android::NativeNotificationManager
> match: android::NativeSharedPreferencesEditor
> match: android::NativeComponentName
> match: android::NativePopupWindow
> match: android::NativeSharedPreferences
> match: android::NativeNotification
> match: android::native_app_glue
> match: android::NativeViewGroup
> match: android::NativeService
> match: android::assets_and_resources::NativeAssetManager
> match: android::NativeNotificationBuilder
> match: android::native_notification
> match: android::NativeKeyEvent
> match: android::NativeContextWrapper
> match: android::NativeScanResult
> match: android::NativeWifiManager
> match: android::NativeLinearLayout
> match: android::assets_and_resources::NativeDrawable
> match: android::NativeAssetFileDescriptor
> match: android::NativeListOfScanResult
> match: android::audio::NativeAudioManager
> match: android::NdkNativeActivity
> match: android::audio::NativeSoundPool
> match: android::NativeGridLayout
> match: android::audio::NativeMediaPlayer
> match: android::NativeNativeActivity
> match: android::NativeHeadTracker
> match: android::SoundPool
> match: android::ui_test
> match: android::native_ui
> match: android::Activity
> match: android::ResourcesManager
> match: android::AConfiguration
> match: android::ANativeWindow
> match: android::aware
> match: android::Vibrator
> match: android::Service
> match: android::Notification
> match: android::wifi
> match: android>service>
> match: android::SharedPreferences
> match: android>notification>
> match: android::platform
> match: android::AssetManager
> match: android::Flag
> match: android::landscape
> match: android::http_request
> match: android::toast
> match: android>shared_preferences>
> match: android>intent>
> match: android::assets
> match: android::data_store
> match: android::Extra
> match: android::ALooper
> match: android::activities
> match: android::AInputQueue
> match: android::Action
> match: android::Category
> match: android::vibration
> match: android::assets_and_resources
> match: android::dalvik
> match: android::sensors
> match: android::cardboard
> match: android::log
> match: android::audio
> match: android::shared_preferences_api10

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
> match: android::nit_activity
> match: android::ui_test
> match: android::native_app_glue
> match: android::ui
> match: android::aware
> match: android::native_ui
> match: android::platform
> match: android::ResourcesManager
> match: android::assets_and_resources::NativeResources
> match: android::NativeContext
> match: android::Vibrator
> match: android::Service
> match: android::NdkNativeActivity
> match: android::Notification
> match: android>service>
> match: android::assets_and_resources::NativeBitmap
> match: android::NativeActivity
> match: android::AndroidInputEvent
> match: android>shared_preferences>
> match: android::SharedPreferences
> match: android::Activity
> match: android::shared_preferences
> match: android>notification>
> match: android::AssetManager
> match: android::landscape
> match: android::toast
> match: android::wifi
> match: android::vibration
> match: android::http_request
> match: android::game
> match: android::service
> match: android::AConfiguration
> match: android::assets
> match: android::SoundPool
> match: android::assets_and_resources::NativeAssetManager
> match: android>intent>
> match: android::intent
> match: android::data_store
> match: android::notification
> match: android::sensors
> match: android::audio
> match: android::assets_and_resources
> match: android::shared_preferences_api10

### Lock app orientation

> match: android::Android_app_Fragment
> match: android::NativeAppGlue
> match: android::native_app_glue
> match: android::landscape
> match: android::portrait
> match: android
> match: android::ResourcesManager
> match: android::AConfiguration
> match: android::assets_and_resources::NativeResources
> match: android::SoundPool
> match: android::assets_and_resources::NativeAssetManager
> match: android::data_store
> match: android::http_request
> match: android::assets
> match: android::nit_activity
> match: android::assets_and_resources
> match: android::sensors

Importing `android::landscape` or `android::portrait` locks the generated
application in the specified orientation. This can be useful for games and
other multimedia applications.

> match: android::portrait
> match: android::landscape
> match: android::game
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
> match: android::aware
> match: android::NativeContext
> match: android::Vibrator
> match: android::Service
> match: android::Notification
> match: android>service>
> match: android::native_app_glue
> match: android::assets_and_resources::NativeBitmap
> match: android::NativeActivity
> match: android::AndroidInputEvent
> match: android::SharedPreferences
> match: android::Activity
> match: android>notification>
> match: android::ResourcesManager
> match: android::assets_and_resources::NativeResources
> match: android::audio::NativeAudioManager
> match: android::platform
> match: android::AssetManager
> match: android::toast
> match: android::wifi
> match: android>shared_preferences>
> match: android::NdkNativeActivity
> match: android::SoundPool
> match: android>intent>
> match: android::NativeHeadTracker
> match: android::http_request
> match: android::nit_activity
> match: android::audio
> match: android::sensors
> match: android::assets_and_resources
> match: android::shared_preferences_api10

### Resources and application icon

> match: android::ResourcesManager
> match: android::assets_and_resources::NativeResources
> match: android
> match: android::audio::NativeAudioManager
> match: android::landscape
> match: android::native_app_glue
> match: android>intent>
> match: android::assets_and_resources

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
> match: android::aware
> match: android::native_app_glue
> match: android::cardboard
> match: android::SharedPreferences
> match: android::NativeContext
> match: android::Activity
> match: android::Vibrator
> match: android::Service
> match: android::Notification
> match: android>service>
> match: android::landscape
> match: android::assets_and_resources::NativeBitmap
> match: android::NativeActivity
> match: android::wifi
> match: android>shared_preferences>
> match: android>notification>
> match: android::AssetManager
> match: android::toast
> match: android::assets_and_resources
> match: android::NdkNativeActivity
> match: android::ALooper
> match: android::nit_activity
> match: android::ANativeWindow
> match: android>intent>
> match: android::game
> match: android::NativeView
> match: android>ui>
> match: android::http_request
> match: android::dalvik
> match: android::Extra
> match: android::assets_and_resources::NativeDrawable
> match: android::audio::NativeAudioManager
> match: android::assets_and_resources::NativeAssetManager
> match: android::activities
> match: android::AConfiguration
> match: android::NativeAssetFileDescriptor
> match: android::Flag
> match: android::AInputQueue
> match: android::Action
> match: android::Category
> match: android::NativeNativeActivity
> match: android::audio
> match: android::vibration
> match: android::log
> match: android::assets
> match: android::shared_preferences_api10
> match: android::sensors

The application icon should also be placed in the `android/` folder.
Place the classic bitmap version at `android/res/mipmap-hdpi/ic_launcher.png` (and others),
and the adaptive version at `android/res/mipmap-anydpi-v26/ic_launcher.xml`.
The Nit compiler detects these files and uses them as the application icon.

> match: android::assets_and_resources::NativeBitmap
> match: android::NativeNitActivity
> match: android::input_events::NativeAndroidMotionEvent
> match: android::Android_widget_ArrayAdapter
> match: android
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
> match: android::ResourcesManager
> match: android::nit_activity
> match: android::assets_and_resources::NativeResources
> match: android::landscape
> match: android::native_app_glue
> match: android::audio::NativeAudioManager
> match: android::aware
> match: android::NdkNativeActivity
> match: android::NativeContext
> match: android::Vibrator
> match: android::Service
> match: android::Notification
> match: android>service>
> match: android::NativeActivity
> match: android::AndroidInputEvent
> match: android::SharedPreferences
> match: android::Activity
> match: android>notification>
> match: android::platform
> match: android::AssetManager
> match: android>intent>
> match: android::toast
> match: android::cardboard
> match: android::wifi
> match: android>shared_preferences>
> match: android::game
> match: android::assets_and_resources
> match: android::http_request
> match: android::audio
> match: android::sensors
> match: android::shared_preferences_api10

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
> match: android::Android_widget_CompoundButton
> match: android::ResourcesManager
> match: android::assets_and_resources::NativeResources
> match: android::nit_activity
> match: android::aware
> match: android>notification>
> match: android::NativeContext
> match: android::Vibrator
> match: android::Service
> match: android::Notification
> match: android>service>
> match: android::native_app_glue
> match: android::landscape
> match: android::assets_and_resources::NativeBitmap
> match: android::NativeActivity
> match: android::AndroidInputEvent
> match: android::SharedPreferences
> match: android::Activity
> match: android::NdkNativeActivity
> match: android>shared_preferences>
> match: android::platform
> match: android::AssetManager
> match: android::shared_preferences
> match: android>intent>
> match: android::intent
> match: android::toast
> match: android::wifi
> match: android::assets_and_resources
> match: android::cardboard
> match: android::assets_and_resources::NativeDrawable
> match: android::assets_and_resources::NativeAssetManager
> match: android::service
> match: android::Extra
> match: android::game
> match: android::http_request
> match: android::dalvik
> match: android::audio::NativeAudioManager
> match: android::notification
> match: android::vibration
> match: android::audio
> match: android::sensors
> match: android::shared_preferences_api10

## Compilation modes

> match: android
> match: android::platform
> match: android::audio::NativeAudioManager

There are two compilation modes for the Android platform, debug and release.
Theses modes are also applied to the generated Android projects.
The compilation mode is specified as an argument to `nitc`, only
`--release` can be specified as debug is the default behavior.

> match: android::platform
> match: android
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
> match: android::audio::NativeAudioManager
> match: android::aware
> match: android::SharedPreferences
> match: android>shared_preferences>
> match: android::NativeContext
> match: android::Vibrator
> match: android::Service
> match: android::Notification
> match: android>service>
> match: android::assets_and_resources::NativeBitmap
> match: android::NativeActivity
> match: android::AndroidInputEvent
> match: android::Activity
> match: android>notification>
> match: android::ResourcesManager
> match: android::assets_and_resources::NativeResources
> match: android::AssetManager
> match: android::landscape
> match: android::toast
> match: android::wifi
> match: android::NdkNativeActivity
> match: android>intent>
> match: android::native_app_glue
> match: android::game
> match: android::http_request
> match: android::cardboard
> match: android::nit_activity
> match: android::audio
> match: android::shared_preferences_api10
> match: android::sensors
> match: android::assets_and_resources

### Debug mode

> match: android
> match: android::audio::NativeAudioManager

Debug mode enables compiling to an APK file without handling signing keys
and their password. The APK file can be installed to a local device with
USB debugging enabled, but it cannot be published on the Play Store.

> match: android::key_event
> match: android::NativeKeyEvent
> match: android::data_store
> match: android
> match: android::Vibrator
> match: android::audio::NativeAudioManager
> match: android::ALooper
> match: android::at_boot
> match: android::Bundle
> match: android::Flag
> match: android::AInputQueue
> match: android::NativeHeadTracker
> match: android>shared_preferences>
> match: android::AndroidKeyEvent
> match: android::nit_activity
> match: android::sensors
> match: android::assets_and_resources
> match: android::gamepad
> match: android::input_events

By default, `nitc` will compile Android applications in debug mode.

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
> match: android
> match: android::audio::NativeAudioManager
> match: android::vibration
> match: android::native_app_glue
> match: android::NativeView
> match: android>ui>
> match: android::Extra
> match: android::ALooper
> match: android::Activity
> match: android::activities
> match: android::AConfiguration
> match: android::NativeAssetFileDescriptor
> match: android::Flag
> match: android::ANativeWindow
> match: android>intent>
> match: android::AInputQueue
> match: android::Action
> match: android::landscape
> match: android::Category
> match: android::wifi
> match: android::NativeNativeActivity
> match: android>shared_preferences>
> match: android::nit_activity
> match: android::dalvik
> match: android::cardboard
> match: android::log
> match: android::assets
> match: android::assets_and_resources

### Release mode

> match: android::audio::NativeAudioManager
> match: android

Building in release mode will use your private key to sign the
APK file, it can then be published on the Play Store.

> match: android::key_event
> match: android::NativeKeyEvent
> match: android::data_store
> match: android
> match: android::audio::NativeAudioManager
> match: android::Bundle
> match: android::AndroidKeyEvent
> match: android::vibration
> match: android::nit_activity
> match: android::assets_and_resources
> match: android::input_events

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
> match: android
> match: android::Bundle
> match: android::AndroidKeyEvent
> match: android>shared_preferences>
> match: android::nit_activity
> match: android::assets_and_resources
> match: android::input_events
> match: android::audio
> match: android::http_request::JavaHttpResponse
> match: android
> match: android::NativeNativeActivity
> match: android::cardboard
> match: android>bundle>
> match: android::Bundle
> match: android::NdkNativeActivity
> match: android::nit_activity
> match: android::Activity
> match: android::NativeService
> match: android::NativeKeyEvent
> match: android::Android_widget_ArrayAdapter
> match: android::Android_app_Fragment
> match: android::NativeScanResult
> match: android::NativeWifiManager
> match: android::Android_widget_ListView
> match: android::Android_widget_Adapter
> match: android::bundle::StringCopyArray
> match: android::NativeListOfScanResult
> match: android::Android_widget_ListAdapter
> match: android::Android_widget_Checkable
> match: android::Android_widget_CheckBox
> match: android::native_notification
> match: android::NativeNitActivity
> match: android::Android_widget_BaseAdapter
> match: android::Android_widget_AbsListView
> match: android>intent>
> match: android::Android_widget_SpinnerAdapter
> match: android::audio::NativeSoundPool
> match: android::Android_widget_CompoundButton
> match: android>shared_preferences>
> match: android::assets_and_resources::NativeAssetManager
> match: android::audio::NativeMediaPlayer
> match: android::native_app_glue
> match: android::NativeHeadTracker
> match: android::dalvik
> match: android::sensors
> match: android::audio
> match: android::intent_api10::StringCopyHashSet
> match: android
> match: android::portrait
> match: android::Action
> match: android::nit_activity
> match: android::assets_and_resources
> match: android
> match: android::AConfiguration
> match: android::Activity
> match: android>bundle>
> match: android::Bundle
> match: android>intent>
> match: android::assets_and_resources
> match: android::sensors
> match: android::Action::call
> match: android::audio::NativeMediaPlayer::release
> match: android::audio::NativeSoundPool::release
> match: android::ui::NativeEditText::is_password=
> match: android::Flag::activity_reset_task_if_needed
> match: android::native_app_glue::App::window_redraw_needed
> match: android
> match: android::MediaPlayer::destroy
> match: android::intent_api10::App::start_service
> match: android::Activity::on_key_up
> match: android::service::App::start_service
> match: android::NativeAppGlue::input_queue
> match: android::input_events::AMotionEventAction::pointer_index
> match: android::dalvik::App::native_activity
> match: android::service::Sys::start_not_sticky
> match: android::SharedPreferences::commit
> match: android::native_app_glue::App::term_window
> match: android::ALooper::for_thread
> match: android::vibration
> match: android::sensors::App::initialize_event_queue
> match: android::native_app_glue::App::poll_looper
> match: android::bundle::Serializable::add_to_bundle
> match: android>intent>
> match: android::native_app_glue::App::init_window
> match: android::native_app_glue::App::poll_looper_pause
> match: android::NativeHeadTracker::last_head_view
> match: android::nit_activity
> match: android::Bundle::[]=
> match: android::assets_and_resources

