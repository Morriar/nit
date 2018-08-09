# iOS support for _app.nit_

> match: ios::ui::TextView::ios_points
> match: ios::NitViewController
> match: ios::UIScrollView
> match: app::app
> match: ios::ios
> match: app>
> match: app
> match: ios>
> match: ios

## System configuration

> match: ios::UIButtonType::system
> match: core::exec::Sys::system

Configure your system for OS X by installing Xcode and brew.
Follow the instructions in `README.md` at the root of the repository.

> match: ios>
> match: ios
> match: ios::UITouch::x
> match: json::serialization_read::JsonDeserializer::root
> match: cocoa>
> match: cocoa
> match: cocoa::cocoa
> match: ios::UIButtonType::system
> match: core::exec::CString::system

Optionally, install ios-sim to run compiled apps in the simulator: `brew install ios-sim`

> match: ios>
> match: ios
> match: app::app_base::Sys::app

## Compile and run a simple application

> match: app::App::run
> match: ios>
> match: ios
> match: app::AppComponent
> match: core::Sys::run
> match: core::Regex::compile
> match: ios::app::App::did_enter_background
> match: ios::app::App::did_become_active

Let's use the `hello_ios` example in the folder `lib/ios/examples/`.

> match: json::static::Text::parse_json
> match: ios>
> match: ios
> match: app::Asset
> match: app::TextAsset
> match: ios::hello_ios
> match: app::PlayableAudio::path
> match: app>
> match: app
> match: app::Asset::path
> match: ios>examples>
> match: pthreads>examples>
> match: app>examples>
> match: cocoa>examples>
> match: serialization>examples>
> match: app::assets
> match: android>examples>
> match: core::re::NativeRegex
> match: core::Object::object_id
> match: core::MaybeError
> match: core::queue::Sequence::as_lifo

Compile with: `nitc hello_world.nit`

> match: core::Regex::compile
> match: ios>
> match: ios
> match: ios::hello_ios::AppDelegate::hello_world
> match: core::re::Regex::string_cache
> match: core::NativeArray
> match: json>
> match: json
> match: core::re::Regex::cflags_cache

Run in the simulator with: `ios-sim hello_world.app`

> match: app::app_base::Sys::app
> match: ios>
> match: ios
> match: app::App
> match: android>nit_compile>android>app>

## Sample portable applications

> match: app::AppComponent
> match: app>
> match: app
> match: ios>
> match: ios
> match: ios::app::App::did_enter_background
> match: ios::app::App::did_become_active

See the calculator example at `examples/calculator` and the Tnitter client at `contrib/tnitter/`
for portable applications working on GNU/Linux, OS X, iOS and Android.

> match: ios>
> match: ios
> match: ios::UITouch::x
> match: cocoa>
> match: cocoa
> match: cocoa::cocoa
> match: app>
> match: app
> match: app::AppComponent
> match: json::static::Text::parse_json
> match: app::AppComponent::on_create

## Application icon

> match: app::AppComponent
> match: ios::app::App::did_enter_background
> match: ios::app::App::did_become_active
> match: ios>
> match: ios

To associate icons to your application, create the directory `ios/AppIcon.appiconset` and fill it with standard icons and `Contents.json`.
These files can be generated in a number of different ways:

> match: ios>
> match: ios
> match: app>
> match: app
> match: android
> match: android>
> match: app::ui::Sys::root_window
> match: core::file::Sys::wipe_write
> match: core::file::FileStream::file
> match: app::AppComponent
> match: ios::app::App::did_enter_background
> match: json::serialization_write::Serializable::serialize_to_json
> match: json::JsonSerializer::plain_json
> match: core::Task
> match: core::file::Int::fd_to_stream
> match: core::file::Text::relpath
> match: core::file::NativeFile
> match: serialization>
> match: serialization
> match: core::FileStat
> match: core::file::NativeFileStat::is_dir
> match: core::file::Text::files
> match: app::App
> match: ios::UIStackViewAlignment::fill
> match: ios::UIStackViewDistribution::fill
> match: serialization::Serializer::serialize_core
> match: pthreads::pthreads::NativePthread::create
> match: core::Finalizable::finalize
> match: core::Path::files
> match: core::FileReader::from_fd
> match: core::FileWriter::from_fd
> match: core::file::Text::mkdir
> match: core::FileStream::fd
> match: core::Error::message
> match: core::Bytes::items
> match: ios::app::App::did_become_active
> match: app::SimpleAsyncHttpRequest
> match: core::Path::dir
> match: core::FileWriter
> match: core::FileReader
> match: core::Path::rmdir
> match: serialization::SafeDeserializer::check_subtypes
> match: json::JsonDeserializer::class_name_heuristic
> match: core::Path::/
> match: app::AppComponent::on_create
> match: core::ProcessDuplex
> match: core::file::NativeFileStat::is_reg
> match: core::Object::SELF
> match: core::Object::is_same_type
> match: cocoa::app_kit
> match: serialization::DeserializerCache::[]=
> match: core::Path::delete
> match: core::Path::filename
> match: core::bytes::Int::to_bytes
> match: core::math::Float::is_nan
> match: core::Path::exists
> match: core::Buffer::times
> match: serialization::Deserializer::deserialize_class_intern
> match: core::bytes::Text::binarydigest_to_bytes
> match: core::Path::is_dir
> match: core::Object::object_id
> match: core::Object::!=
> match: app::app
> match: core::Float::is_approx
> match: json>
> match: json
> match: core::Object::output
> match: app::AppComponent::on_stop
> match: core::bytes::Text::hexdigest_to_bytes
> match: ios::ui::AppDelegate::window

* Using the tool `svg_to_icons` packaged with the Nit repository at `contrib/inkscape_tools/bin/svg_to_icons`.

* Using Xcode to assign images to each slot, create the folder and the file `Contents.json`.

* Write or modify the file `Contents.json` manually.
  It is in Json format and easily readable.

> match: ios>
> match: ios
> match: json>
> match: json
> match: serialization::safe::Sys::class_inheritance_metamodel
> match: core::NativeArray
> match: json::JsonSerializer::plain_json
> match: pthreads::Barrier
> match: core::flat::UnicodeFlatString
> match: app>
> match: app
> match: json::JsonSerializer
> match: core::fixed_ints_text::UInt32::native_to_s
> match: core::fixed_ints_text::Int16::native_to_s
> match: core::fixed_ints_text::Int8::native_to_s
> match: core::fixed_ints_text::UInt16::native_to_s
> match: core::fixed_ints_text::Int32::native_to_s
> match: json::JSONStringParser::parse_json_string
> match: json::static::Text::json_to_nit_string
> match: core::Text::unescape_nit
> match: core::abstract_text::Byte::native_byte_to_s
> match: core::re::NativeRegex
> match: pthreads::Mutex
> match: core::abstract_text::Int::native_int_to_s
> match: json::serialization_write::Serializable::serialize_to_json
> match: json::serialization_read::JsonDeserializer::convert_object
> match: android
> match: android>
> match: core::flat::CString::to_s_with_length
> match: core::NativeArray::to_a
> match: app::Asset
> match: serialization>
> match: serialization
> match: core::core
> match: ios>
> match: ios
> match: core::file::FileStream::file
> match: core::file::Int::fd_to_stream
> match: app::TextAsset
> match: core::file::Sys::wipe_write
> match: app::PlayableAudio::path
> match: pthreads::pthreads::NativePthread::create
> match: core::FileWriter::from_fd
> match: core::FileStream::fd
> match: core::FileReader::from_fd
> match: app::Asset
> match: core::Path
> match: core::Path::delete
> match: core::Path::filename
> match: core::Path::exists
> match: app::Asset::path
> match: core::FileStat
> match: core::Path::stat
> match: android
> match: android>
> match: core::ProcessWriter::stream_out
> match: ios::ui::UITableView::assign_delegate_and_data_source
> match: core::Array::from
> match: core::ProcessReader::stream_in
> match: core::FileStream
> match: app::assets
> match: json::json
> match: core::Writer::write
> match: ios>
> match: ios
> match: json>
> match: json
> match: core::file::FileStream::file
> match: json::JsonSerializer::plain_json
> match: core::file::Sys::wipe_write
> match: core::FileStat
> match: json::serialization_read::Text::deserialize_json
> match: core::file::Int::fd_to_stream
> match: json::JsonParseError
> match: core::FileWriter
> match: core::Text::format
> match: core::FileStream::fd
> match: serialization>
> match: serialization
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core::Error::message
> match: json::JsonSerializer::pretty_json
> match: core::Finalizable::finalize
> match: core::Tm::strftime
> match: core::FileReader::from_fd
> match: core::FileWriter::from_fd
> match: core::Writer::is_writable
> match: core::file::NativeFileStat::is_reg
> match: core::abstract_text::Object::to_s
> match: core::Path::delete
> match: core::Path::filename
> match: json::JSONStringParser
> match: core::Path::exists
> match: app>
> match: app
> match: core::FileWriter::open
> match: core::ProcessReader
> match: core::abstract_text::Object::inspect
> match: json::JsonMapRead
> match: core::Path::stat
> match: json::JsonSequenceRead
> match: core::TimeT::ctime
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Text::is_numeric
> match: core::time::Tm::asctime
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Path::open_wo
> match: core::FlatText::fast_cstring
> match: android
> match: android>
> match: core::Codec::encode_string
> match: json::serialization_read::JsonDeserializer::text
> match: core::codec_base
> match: json::JsonDeserializer::class_name_heuristic
> match: core::flat::FlatBuffer::reset
> match: core::Codec::encode_char
> match: core::Path::each_line
> match: core::CString::fast_cstring
> match: json::JsonArray
> match: core::FileStat::is_file
> match: core::Bytes::items
> match: json::static::Char::is_json_separator
> match: core::Collection::has_exactly
> match: json::JsonDeserializer
> match: core::Path::files
> match: core::Writable
> match: core::PollableReader
> match: core::Path
> match: core::ProcessDuplex::write_and_read
> match: core::Text::to_camel_case
> match: core::file::NativeFile
> match: core::Writer::write_byte
> match: json::serialization_write::JsonSerializer::new_line_and_indent
> match: core::Object::SELF

