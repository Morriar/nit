# _app.nit_, a framework for portable applications

> match: app>
> match: app
> match: app::AppComponent
> match: app::app

The framework provides services to manage common needs of modern mobile applications:

> match: app::AppComponent
> match: app>
> match: app
> match: android>service>
> match: android::service
> match: core::Collection
> match: serialization::Deserializer
> match: app::app
> match: serialization::Serializer

* Life-cycle
* User interface
* Persistence
* Async HTTP requests
* Package metadata
* Compilation and packaging

> match: core::Writable
> match: core::abstract_text::Object::to_s
> match: core::Cloneable
> match: app::TextInput
> match: app::HttpRequestClientWindow::label_response
> match: app::UiExampleWindow::user_input
> match: core::FinalizableOnce
> match: app::AsyncHttpRequest
> match: app::http_request::Text::http_get
> match: serialization::safe::Sys::class_inheritance_metamodel
> match: json::JsonSerializer::plain_json
> match: app::app_base::Sys::bound_platform

The features offered by _app.nit_ are common to all platforms, but
may not be available on all devices.

> match: app::app
> match: app>
> match: app
> match: core::Finalizable::finalize
> match: android::platform
> match: ios::platform
> match: app::AppComponent::on_stop
> match: app::AppComponent::on_save_state
> match: serialization>
> match: serialization
> match: json::serialization_read::Text::deserialize_json
> match: core::Collection::has_exactly
> match: core::Error::message
> match: android>
> match: android
> match: poset::POSet::has_direct_edge
> match: app::TextView::size=
> match: serialization::Deserializer::deserialize_class_intern
> match: app::App
> match: core::FileStat::is_file
> match: core::file::NativeFileStat::is_chr
> match: core::math::Float::is_nan
> match: core::String
> match: core::file::NativeFileStat::is_blk
> match: core::Collection::has_all
> match: json::JsonSerializer::plain_json
> match: core::FlatText::fast_cstring
> match: app::app_base::Sys::bound_platform
> match: core::Writable::write_to_string
> match: app::DataStore::[]
> match: app::AppComponent::on_pause
> match: core::Object::output
> match: json::JsonDeserializer::class_name_heuristic
> match: core::file::Text::simplify_path
> match: app::AppComponent::on_restore_state
> match: core::file::NativeFileStat::is_reg
> match: app::AsyncHttpRequest::on_load
> match: pthreads::Mutex::lock
> match: core::Stream::lookahead
> match: core::Object::output_class_name
> match: core::Object::hash
> match: core::Object::SELF
> match: core::FileStat
> match: core::bytes::Int::to_bytes
> match: core::Collection::has_any
> match: app::TextView::align=
> match: app::AppComponent::on_create
> match: core::re::NativeRegex::regexec_match_only
> match: json>
> match: json
> match: app::SimpleAsyncHttpRequest
> match: core::Writable::write_to_bytes
> match: serialization::SafeDeserializer::check_subtypes
> match: pthreads::Mutex::try_lock
> match: core::Reader::read_char
> match: core::Path::rmdir
> match: core::FlatText::items
> match: poset::POSet::sub
> match: core::ProcessDuplex
> match: core::Text::to_snake_case
> match: app::AppComponent
> match: core::Sys
> match: core::Map
> match: core::flat::FlatBuffer::with_infos
> match: pthreads>
> match: pthreads

## Application Life-Cycle

> match: app::AppComponent
> match: app>
> match: app

The _app.nit_ application life-cycle is compatible with all target platforms.
It relies on the following sequence of events, represented here by their callback method name:

> match: app>
> match: app
> match: app::AppComponent
> match: meta::Class::name
> match: core::Object::output_class_name
> match: core::Sequence
> match: app::App
> match: json::JsonDeserializer::class_name_heuristic
> match: android::platform
> match: ios::platform
> match: app::AppComponent::on_create
> match: app::app
> match: core::Object::output
> match: core::Finalizable::finalize
> match: app::AppComponent::on_stop
> match: android>
> match: android
> match: app::AppComponent::on_resume
> match: core::Object::SELF
> match: app::AppComponent::on_restore_state
> match: app::AppComponent::on_pause
> match: core::abstract_text::StringByteView::target
> match: core::abstract_text::StringCharView::target
> match: app::AppComponent::on_save_state
> match: serialization>
> match: serialization
> match: core::SequenceRead
> match: core::Bytes::items
> match: core::flat::FlatStringByteReverseIterator::target
> match: core::flat::FlatStringByteIterator::target
> match: core::flat::FlatStringCharIterator::target
> match: core::flat::FlatStringCharReverseIterator::target
> match: core::flat::FlatBufferByteReverseIterator::target
> match: core::flat::FlatBufferByteIterator::target
> match: core::flat::FlatBufferCharIterator::target
> match: core::flat::FlatBufferCharReverseIterator::target
> match: app::AppComponent::on_restart
> match: core::Sys
> match: core::Sys::main
> match: app::AsyncHttpRequest::uri
> match: core::Task
> match: core::Object::object_id
> match: core::Sys::run
> match: app::app_base::Sys::test_bound_platform
> match: core::String
> match: core::abstract_text::StringCharView
> match: core::Path
> match: core::abstract_text::StringByteView
> match: ios
> match: ios>
> match: core::Text::is_numeric
> match: serialization::Deserializer::deserialize_attribute
> match: core::BytePattern
> match: json::JsonSerializer::stream
> match: serialization::inspect::InspectSerializer::stream
> match: core::Collection::has_exactly
> match: app::TextView::size=
> match: json::JsonSequenceRead
> match: app::AsyncHttpRequest
> match: app::ViewEvent::sender
> match: app::ViewEvent
> match: core::Process::command
> match: meta::GetName
> match: core::Buffer
> match: serialization::SafeDeserializer::check_subtypes
> match: serialization::Serializer::serialize_core
> match: core::FileStat
> match: app::AppObserver::on_event

1. `on_create`: The application is being created.
   You should build the UI at this time and launch services.

2. `on_resume`: The app enters the active state, it is in the foreground and interactive.

3. `on_pause`: The app becomes inactive and it leaves the foreground.
   It may still be visible in the background.

4. `on_stop`: The app is completely hidden.
   It may then be destroyed (without warning) or go back to the active state with `on_restart`.

5. `on_restart`: The app goes back to the inactive state.
   You can revert what was done by `on_stop`.

> match: app::AppComponent::on_create
> match: app>
> match: app
> match: app::AppComponent
> match: android>
> match: android
> match: serialization::Deserializer
> match: serialization>
> match: serialization
> match: android>service>
> match: serialization::Serializer
> match: serialization::Deserializer::deserialize_class_intern
> match: android::service
> match: android>ui>
> match: app::App
> match: pthreads::Mutex
> match: serialization::SafeDeserializer::check_subtypes
> match: ios>ui>
> match: android::ui
> match: ios::ui
> match: linux::ui
> match: serialization::Serializable::from_deserializer
> match: pthreads::pthreads::NativePthread::create
> match: core::Finalizable::finalize
> match: core::Task
> match: app::app
> match: core::Object::hash
> match: core::Object::is_same_instance
> match: core::Writable::write_to_bytes
> match: json::serialization_write::Serializable::accept_json_serializer
> match: json::JsonDeserializer::class_name_heuristic
> match: app::ui::Sys::root_window
> match: core::math::Float::is_nan
> match: core::Buffer::times
> match: pthreads::Thread
> match: app::AppComponent::on_restore_state
> match: core::flat::FlatBuffer::with_infos
> match: app::AsyncHttpRequest::deserialize_json
> match: app::Control
> match: pthreads>
> match: pthreads
> match: app::AppComponent::on_stop
> match: core::Text::substring
> match: core::FlatText::fast_cstring
> match: core::Sys
> match: core::Process::init
> match: core::Tm::gmtime
> match: core::Error::message
> match: core::Object::object_id
> match: app::Asset
> match: app::AppComponent::on_save_state
> match: core::Cloneable::clone
> match: app::SimpleAsyncHttpRequest
> match: ios
> match: ios>
> match: core::Collection::has_exactly
> match: json::JsonSerializer::plain_json
> match: core::Object::is_same_type
> match: app::AsyncHttpRequest
> match: json>
> match: json
> match: core::Object::SELF
> match: core::array::Collection::to_a
> match: core::Writable::write_to_string
> match: serialization::Serializer::serialize_attribute
> match: app::AppComponent::on_resume
> match: app>
> match: app
> match: app::app_base::Sys::app
> match: app::AppComponent::on_pause
> match: app::App
> match: android>nit_compile>android>app>
> match: app::ui::App::push_window
> match: ios::app
> match: core::Finalizable::finalize
> match: app::AppComponent::on_restore_state
> match: app::ui::Sys::root_window
> match: app::AppComponent::on_stop
> match: app::app
> match: app::TextInput
> match: serialization>
> match: serialization
> match: serialization::SafeDeserializer::check_subtypes
> match: app::ui::App::window_stack
> match: app::UiExampleWindow::user_input
> match: json::JsonDeserializer::class_name_heuristic
> match: core::Bytes::items
> match: app::AppComponent::on_save_state
> match: core::Collection::has_exactly
> match: core::Text::to_camel_case
> match: json::JsonSerializer::plain_json
> match: core::Object::SELF
> match: android>
> match: android
> match: core::Object::output
> match: core::Sys
> match: app::AppComponent
> match: app::AppComponent::on_restart
> match: core::Object::output_class_name
> match: core::MapRead::has_key
> match: serialization::Serializer::serialize_core
> match: core::FileStat
> match: core::Error::message
> match: app::AppComponent::on_pause
> match: app>
> match: app
> match: app::app_base::Sys::app
> match: core::Finalizable::finalize
> match: app::App
> match: app::ui::App::push_window
> match: app::app
> match: android>nit_compile>android>app>
> match: core::re::NativeRegex
> match: app::AppComponent::on_resume
> match: ios::app
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Collection::has_exactly
> match: serialization>
> match: serialization
> match: app::View
> match: core::Bytes::items
> match: core::FlatText::fast_cstring
> match: core::Text::to_camel_case
> match: core::Collection::has_any
> match: app::AppComponent::on_stop
> match: app::ui::Sys::root_window
> match: json::JsonDeserializer::class_name_heuristic
> match: core::Collection::has_all
> match: core::Object::SELF
> match: json::JsonSerializer::plain_json
> match: core::file::Sys::wipe_write
> match: core::file::NativeFileStat::is_dir
> match: core::ArrayCmp
> match: core::MapRead::provide_default_value
> match: core::String
> match: app::audio
> match: core::CString::char_to_byte_index_cached
> match: core::CString::byte_to_char_index_cached
> match: core::Object::output
> match: core::Sys
> match: core::MapRead::has_key
> match: android>
> match: android
> match: core::file::NativeFileStat::is_chr
> match: core::abstract_collection::RefIterator
> match: core::file::NativeFileStat::is_blk
> match: app::AsyncHttpRequest::after
> match: core::Object::output_class_name
> match: json>
> match: json
> match: serialization::Serializer::serialize_core
> match: core::FileStat
> match: core::MaybeError::is_error
> match: serialization::Serializer::try_to_serialize
> match: core::Task
> match: pthreads::Mutex::lock
> match: core::Queue::peek
> match: core::Error::message
> match: core::re::NativeRegex::malloc
> match: core::Object::object_id
> match: core::MaybeError
> match: core::bytes::Bytes::regen
> match: core::Reader::append_line_to
> match: core::Buffer::capitalize
> match: app::SimpleAsyncHttpRequest
> match: pthreads::AtomicInt::get_and_decrement
> match: pthreads::AtomicInt::get_and_increment
> match: poset::POSet::has_direct_edge
> match: app::TextView::size=
> match: core::FlatText::items
> match: json::serialization_read::Text::deserialize_json
> match: app::AppComponent::on_stop
> match: app::AppComponent::on_pause
> match: app>
> match: app
> match: app::App
> match: core::Finalizable::finalize
> match: app::AppComponent::on_restart
> match: app::Window::enable_back_button
> match: app::app_base::Sys::app
> match: app::app
> match: app::AppComponent::on_save_state
> match: app::ui::App::push_window
> match: core::FlatText::fast_cstring
> match: serialization>
> match: serialization
> match: json::JsonDeserializer::class_name_heuristic
> match: core::Collection::has_exactly
> match: pthreads::pthreads::NativePthreadMutex::destroy
> match: pthreads::pthreads::NativePthreadMutexAttr::destroy
> match: pthreads::pthreads::NativePthreadCond::destroy
> match: android>nit_compile>android>app>
> match: app::AppComponent::on_resume
> match: pthreads::pthreads::NativePthreadAttr::destroy
> match: json::serialization_read::Text::deserialize_json
> match: core::FlatText::items
> match: json::JsonSerializer::plain_json
> match: ios::app
> match: serialization::SafeDeserializer::check_subtypes
> match: app::AppComponent::on_restore_state
> match: core::re::NativeRegex::malloc
> match: app::ui::Sys::root_window
> match: android>
> match: android
> match: core::String
> match: core::Collection::has_all
> match: core::Buffer::written
> match: core::Range::step
> match: core::Collection::has_any
> match: pthreads::Mutex
> match: core::Bytes::items
> match: core::AbstractArrayRead::sub
> match: core::Object::output
> match: core::Writable::write_to_string
> match: core::Sys
> match: core::Text::to_camel_case
> match: core::Object::SELF
> match: app::app_base::Sys::print_warning
> match: core::file::Text::rmdir
> match: core::Object::output_class_name
> match: core::Stream::lookahead
> match: core::Error::message
> match: poset::POSet::has_direct_edge
> match: serialization::Deserializer::notify_of_creation
> match: core::flat::FlatText::chars_to_escape_to_c
> match: app::AppComponent::on_stop
> match: app>
> match: app
> match: app::App
> match: app::AppComponent::on_restart
> match: app::app_base::Sys::app
> match: app::Window::enable_back_button
> match: app::AppComponent::on_pause
> match: android>nit_compile>android>app>
> match: app::ui::Sys::root_window
> match: ios::app
> match: core::Comparable::OTHER
> match: json::JsonSerializer::plain_json
> match: android>
> match: android
> match: app::ui::App::push_window
> match: core::FlatText::fast_cstring
> match: core::ISODate::timezone
> match: core::ProcessDuplex
> match: serialization>
> match: serialization
> match: app::app
> match: pthreads>
> match: pthreads
> match: serialization::Deserializer::deserialize_attribute
> match: core::Regex::not_eol
> match: core::Regex::not_bol
> match: json::JsonDeserializer::class_name_heuristic
> match: app::AppComponent::on_restore_state
> match: core::Object::SELF
> match: core::Comparator::COMPARED
> match: core::Map
> match: core::Writable::write_to_bytes
> match: core::Reader
> match: core::Writer
> match: core::Finalizable::finalize
> match: pthreads::Mutex
> match: core::bytes::Int::to_bytes
> match: core::Bytes::items
> match: app::SimpleAsyncHttpRequest
> match: app::AppComponent::on_save_state
> match: app::Window::on_back_button
> match: core::Duplex
> match: serialization::Deserializer::deserialize_class_intern
> match: core::SimpleCollection
> match: core::Iterator::finish
> match: core::Writer::is_writable
> match: core::MapIterator::finish
> match: core::Path::rmdir
> match: core::Text::is_whitespace
> match: core::Object::is_same_instance
> match: core::RemovableCollection
> match: core::Iterator::start
> match: core::MapIterator::start
> match: serialization::Serializable
> match: core::file::Text::rmdir
> match: app::MyHttpRequest::win
> match: core::Error::message

![_app.nit_ life-cycle](path/resources/ab03b885463901ade4ae1a9adfaefeff.png)

> match: app>
> match: app

Life-cycle events related to saving and restoring the application state are provided by two special callback methods:

> match: app>
> match: app
> match: app::AppComponent
> match: app::AppComponent::on_restore_state
> match: app::AppComponent::on_save_state
> match: core::Collection
> match: app::AppComponent::on_stop
> match: app::App
> match: app::AppComponent::on_restart
> match: app::AppComponent::on_pause
> match: core::Task
> match: serialization::AttributeError
> match: core::Finalizable::finalize
> match: app::AppComponent::on_create
> match: core::file::Text::to_path
> match: core::math::Float::is_nan
> match: core::Object::SELF
> match: app::AppComponent::on_resume
> match: app::ViewEvent::sender
> match: app::ViewEvent
> match: core::Writable
> match: android>
> match: android
> match: app::AppObserver::on_event
> match: app::ButtonPressEvent
> match: app::AsyncHttpRequest
> match: app::App::run
> match: app::AppEvent
> match: serialization>
> match: serialization
> match: pthreads>
> match: pthreads
> match: core::Sys
> match: json>
> match: json
> match: core::flat::ASCIIFlatString
> match: core::Object::object_id
> match: core>text>
> match: app::app_base::Sys::test_bound_platform
> match: core::Bool
> match: core::Object::output
> match: android::aware
> match: core::Reader::append_line_to
> match: app::app_base::Sys::bound_platform
> match: app::ui::AppComponent::notify_observers
> match: core::Queue
> match: core::Object::output_class_name
> match: serialization::Serializer::serialize_core
> match: ios
> match: ios>
> match: json::JsonSerializer::plain_json
> match: core::Sys::main
> match: json::serialization_read::Text::deserialize_json
> match: json::serialization_write::Serializable::accept_json_serializer
> match: serialization::Deserializer::deserialize_class_intern

* `on_save_state`: The app may be destroyed soon, save its state for a future `on_restore_state`.
  There is more on how it can be done in the `app::data_store` section.

* `on_restore_state`: The app is launching, restore its state from a previous `on_save_state`.

> match: app::AppComponent::on_save_state
> match: app::App
> match: app>
> match: app
> match: app::app_base::Sys::app
> match: core::Finalizable::finalize
> match: app::AppComponent::on_restore_state
> match: app::ui::Sys::root_window
> match: android>nit_compile>android>app>
> match: app::app
> match: ios::app
> match: serialization>
> match: serialization
> match: app::ui::App::push_window
> match: android>
> match: android
> match: app::AppComponent::on_stop
> match: core::flat::FlatText::chars_to_escape_to_c
> match: json::JsonSerializer::plain_json
> match: core::Collection::has_exactly
> match: serialization::SafeDeserializer::check_subtypes
> match: json::JsonDeserializer::class_name_heuristic
> match: core::Bytes::items
> match: core::ProcessDuplex
> match: core::flat::FlatText::chars_to_html_escape
> match: json>
> match: json
> match: app::data_store
> match: core::FlatText::fast_cstring
> match: core::Object::SELF
> match: core::Object::output
> match: core::MapRead::has_key
> match: core::bytes::Int::to_bytes
> match: poset::POSet::has_direct_edge
> match: app::SimpleAsyncHttpRequest
> match: core::Error::message
> match: core::Sys
> match: core::Text::to_camel_case
> match: core::Map
> match: core::Queue
> match: core::Object::output_class_name
> match: core::Collection::has_all
> match: pthreads::Mutex
> match: json::serialization_read::Text::deserialize_json
> match: serialization::Serializer::serialize_core
> match: pthreads>
> match: core::Collection::has_any
> match: pthreads
> match: core::Task
> match: core::Writable::write_to_string
> match: core::Reader::read_char
> match: core::Reader
> match: core::Writer
> match: core::String
> match: app::AppComponent::on_pause
> match: core::flat::FlatBuffer::with_infos
> match: core::FlatText::items
> match: pthreads::pthreads::NativePthreadCond::destroy
> match: pthreads::pthreads::NativePthreadMutex::destroy
> match: pthreads::pthreads::NativePthreadMutexAttr::destroy
> match: app::AppComponent::on_restore_state
> match: app::AppComponent::on_save_state
> match: app::app_base::Sys::app
> match: app::App
> match: app>
> match: app
> match: android>nit_compile>android>app>
> match: ios::app
> match: app::AppComponent::on_restart
> match: pthreads::Thread
> match: core::Process::init
> match: app::app
> match: core::Discrete::predecessor
> match: app::ui::Sys::root_window
> match: core::list::ListNode::prev
> match: app::AppComponent
> match: pthreads::Thread::start
> match: app::ui::App::push_window
> match: core::ropes::RopeCharIteratorPiece::prev
> match: core::Process::from_a
> match: app::AppComponent::on_stop
> match: app::Window::enable_back_button
> match: core::file::Text::/
> match: app::Window::on_back_button
> match: core::Finalizable::finalize
> match: app::ui::App::pop_window
> match: app::AppComponent::on_pause
> match: serialization>
> match: serialization
> match: android>
> match: android
> match: core::file::Sys::wipe_write

These events are synchronized to the native platforms applications
The `App` instance is the first to be notified of these events.
Other UI elements, from the `ui` submodule, are notified of the same events using a simple depth first visit.
So all UI elements can react separately to live-cycle events.

> match: app>
> match: app
> match: app::App
> match: core::Couple::first
> match: android>ui>
> match: ios>ui>
> match: core::Task
> match: android::ui
> match: ios::ui
> match: linux::ui
> match: app::AppComponent::on_create
> match: core::Collection::first
> match: core::Text::first
> match: core::Collection::has_exactly
> match: app::ViewEvent::sender
> match: app::ViewEvent
> match: app::ui::AppComponent::observers
> match: app::AppObserver::on_event
> match: android>
> match: android
> match: core::AbstractArrayRead::sub
> match: app::ButtonPressEvent
> match: app::Control
> match: app::AppComponent
> match: serialization>
> match: serialization
> match: app::AppEvent
> match: core::Finalizable::finalize
> match: app::AsyncHttpRequest::before
> match: core::ArrayCmp
> match: json::JsonSerializer::plain_json
> match: poset::POSetElement::<
> match: core::Collection::has_all
> match: core::Object::SELF
> match: pthreads::Mutex
> match: app::ui::AppComponent::notify_observers
> match: app::ui::Sys::root_window
> match: core::re::NativeMatchArray::[]
> match: json::JsonDeserializer::class_name_heuristic
> match: core::Sequence::first=
> match: poset::POSetElement::element
> match: app::app
> match: app::SimpleAsyncHttpRequest
> match: core::Collection::has_any
> match: core::ProcessDuplex
> match: core::Object::is_same_type
> match: core::Map
> match: core::Comparable::OTHER
> match: app::app_base::Sys::app
> match: core::Object::object_id
> match: core::circular_array::CircularArray::head
> match: core::circular_array::CircularArray::native
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Bytes::items
> match: app::AppComponent::on_stop
> match: core::Writable
> match: core::Object::output
> match: serialization::SafeDeserializer::check_subtypes
> match: poset::POSet
> match: core::re::NativeRegex
> match: core::flat::FlatBuffer::with_infos
> match: core::Object::output_class_name
> match: app::AppComponent::on_save_state
> match: json::serialization_read::Text::deserialize_json
> match: core::Object::hash
> match: core::bytes::Int::to_bytes
> match: core::Reader

## User Interface

> match: core::abstract_text::Object::to_s
> match: app::TextInput
> match: app::HttpRequestClientWindow::label_response
> match: app::UiExampleWindow::user_input
> match: core::FinalizableOnce
> match: app::MyHttpRequest::win

The `app::ui` module defines an abstract API to build a portable graphical application.
The API is composed of interactive `Control`s, visible `View`s and an active `Window`.

> match: app>
> match: app
> match: app::App
> match: app::ui::App::push_window
> match: app::app_base::Sys::app
> match: app::AppComponent::on_create
> match: app::AppComponent::on_resume
> match: app::ui::Sys::root_window
> match: app::ui::App::window
> match: app::View
> match: core>collection>
> match: app::AppComponent
> match: app::AppComponent::on_pause
> match: app::app
> match: android>ui>
> match: ios>ui>
> match: android>
> match: android
> match: android::ui
> match: android>nit_compile>android>app>
> match: ios::ui
> match: linux::ui
> match: ios::app
> match: ios
> match: ios>
> match: app::AppComponent::on_restart
> match: app::ui::App::window_stack
> match: poset::POSet::show_dot
> match: serialization>
> match: serialization
> match: serialization::Serializer
> match: serialization::Serializer::serialize_attribute
> match: app::Window
> match: app::Control
> match: json>
> match: json
> match: app::App::setup
> match: serialization::Deserializer
> match: core::Task
> match: core::Set
> match: core::Sys
> match: core::re::NativeRegex
> match: core::array::Collection::to_a
> match: core::MapRead
> match: app::assets
> match: core::Sys::main
> match: core::Text::bytes
> match: core::abstract_text::StringCharView
> match: core::abstract_text::StringByteView
> match: android::aware
> match: core::List::from
> match: core::HashSet::from
> match: core::Comparator
> match: core::array::Iterator::to_a
> match: core::Pattern
> match: core>codecs>
> match: poset::POSetElement::element

Here is a subset of the most useful controls and views:

> match: app::View
> match: app::Control
> match: app::View::enabled
> match: app::View::enabled=
> match: app::CompositeControl
> match: app::CompositeControl::items
> match: core::Bytes::slice
> match: core::Object::output
> match: core::Text::chomp
> match: core::Object::output_class_name
> match: app::TextView
> match: app::Window
> match: app>
> match: app
> match: app::Control::parent
> match: core::Text::bytes
> match: core::file::Text::/
> match: poset::POSetElement::element
> match: app::CheckBox::is_checked
> match: core::Text::chars
> match: core::Bytes::items
> match: core::MapRead::values
> match: app::ViewEvent::sender
> match: app::ViewEvent
> match: core::MapRead::keys
> match: pthreads::Thread
> match: core::Queue
> match: core::Reader::read
> match: core::DisjointSet::to_subpartition
> match: core::MapValuesIterator
> match: core::Object::is_same_instance
> match: core::Bytes::trim
> match: core::MapKeysIterator
> match: app::TextView::text
> match: app::TextInput
> match: app::Control::parent=
> match: serialization>
> match: serialization
> match: poset::POSet::[]
> match: core::math::Float::cerp
> match: app::TextView::text=
> match: core::Pattern::search_index_in
> match: core::Finalizable::finalize
> match: app::CheckBox
> match: core::Path::last_error
> match: app::ViewEvent::VIEW
> match: core::Bytes::chexdigest
> match: json>
> match: json
> match: core::Reader::raw_read_bytes
> match: core::AbstractArrayRead::sub
> match: app::ui::Sys::root_window
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core::bytes::Text::binarydigest_to_bytes
> match: core::Text::escape_to_c
> match: core::MaybeError
> match: core::Collection
> match: core::bytes::Text::hexdigest_to_bytes
> match: core::FlatText::fast_cstring
> match: core::DisjointSet::in_same_subset
> match: core::DisjointSet::all_in_same_subset
> match: json::JsonDeserializer::class_name_heuristic
> match: core::Bytes::to_i

* The classic pushable `Button` with text (usually rectangular).

* `TextInput` is a field for the user to enter text.

* `HorizontalLayout` and `VerticalLayout` organize other controls in order.

> match: app::TextView::text
> match: json::serialization_read::JsonDeserializer::text
> match: core>text>
> match: core::text
> match: app::TextView::text=
> match: core::Text
> match: app::Window::on_back_button
> match: app::Button
> match: app::TextInput
> match: app::UiExampleWindow::user_input
> match: app::TextView::text
> match: json::serialization_read::JsonDeserializer::text
> match: core>text>
> match: app::TextView::text=
> match: core::text
> match: core::Text
> match: core::FinalizableOnce
> match: app::TextView::size=
> match: app>
> match: app
> match: app::App
> match: core::abstract_text::Object::to_s
> match: core::Text::is_empty
> match: core::Text::first
> match: core::Finalizable::finalize
> match: core::Match
> match: app::Label
> match: core::Text::bytes
> match: core::Buffer::append
> match: serialization>
> match: serialization
> match: app::AppComponent::on_stop
> match: json::JsonDeserializer::class_name_heuristic
> match: core::FlatText
> match: core::Text::chars
> match: core::Regex
> match: app::HttpRequestClientWindow::label_response
> match: app::View::enabled
> match: core::string_search::Text::search_last
> match: core::Text::empty
> match: app::View::enabled=
> match: app::MyHttpRequest::win
> match: app::ui::Sys::root_window
> match: core::Stream::codec
> match: json::json
> match: app::TextView
> match: app::TextAsset
> match: app::CompositeControl
> match: app::Control
> match: poset>
> match: poset
> match: app::HorizontalLayout
> match: app::VerticalLayout
> match: app::Layout
> match: app::CompositeControl::items
> match: app::View::enabled
> match: app::View::enabled=
> match: app::TextView
> match: app::Window
> match: app::View
> match: core::MinHeap::comparator
> match: app::Control::parent

Each control is notified of input events by callbacks to `on_event`.
All controls have observers that are also notified of the events.
So there is two ways  to customize the behavior on a given event:

> match: app>
> match: app
> match: app::AppObserver::on_event
> match: app::Control
> match: app::ui::AppComponent::observers
> match: app::Control::parent
> match: app::View::enabled
> match: app::ui::AppComponent::notify_observers
> match: app::ViewEvent::sender
> match: app::ViewEvent
> match: app::View::enabled=
> match: app::ButtonPressEvent
> match: core::Finalizable::finalize
> match: app::AppEvent
> match: app::Control::parent=
> match: app::CompositeControl
> match: serialization>
> match: serialization
> match: app::CompositeControl::items
> match: core::Collection::has_exactly
> match: app::ui::Sys::root_window
> match: serialization::Serializer::serialize_core
> match: app::TextView
> match: app::Window
> match: core::Task
> match: json::JsonSerializer::plain_json
> match: app::View
> match: json::JsonDeserializer::class_name_heuristic
> match: app::CheckBox::is_checked
> match: app::AsyncHttpRequest
> match: app::CheckBox
> match: pthreads::Thread
> match: android>
> match: android
> match: app::App
> match: core::flat::FlatBuffer::with_infos
> match: app::TextView::text
> match: core::Collection::has_all
> match: core::Map
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core::Writable::write_to_string
> match: core::Collection::has_any
> match: core::Queue
> match: core::MapRead::has_key
> match: app::TextInput
> match: json::serialization_read::Text::deserialize_json
> match: core::Sys
> match: app::TextView::text=
> match: pthreads::Mutex
> match: core::Object::is_same_type
> match: serialization::SafeDeserializer::check_subtypes
> match: core::Object::is_same_instance
> match: core::Buffer::times
> match: core::Object::hash
> match: core::Text::has_substring
> match: pthreads>
> match: pthreads
> match: core::Text::to_camel_case
> match: core::FlatText::items
> match: core::ProcessDuplex
> match: core::Object::SELF
> match: poset::POSet
> match: core::Object::output
> match: core::Writable::write_to_bytes
> match: core::Collection
> match: poset::POSet::has_direct_edge

* Create a subclass of the wanted `Control`, let's say `Button`, and specialize `on_event`.

* Add an observer to a `Button` instance, and implement `on_event` in the observer.

> match: app::Control
> match: pthreads::pthreads::NativePthread::create
> match: app::Button
> match: app::CompositeControl
> match: app::CompositeControl::items
> match: app::View::enabled
> match: app::AppObserver::on_event
> match: app::View::enabled=
> match: app::TextView
> match: app::Window
> match: app::View
> match: app::Control::parent
> match: app>
> match: app
> match: app::CompositeControl::add
> match: core::SimpleCollection::add
> match: app::ui::AppComponent::observers
> match: core::Buffer::add
> match: app::Button
> match: app::AppObserver::on_event
> match: app::ui::AppComponent::notify_observers
> match: app::AppObserver
> match: core::numeric::Numeric::add
> match: app::Control::parent=
> match: core::Sequence::push
> match: core::Sequence::unshift

### Usage Example

> match: json::static::Text::parse_json
> match: app>examples>
> match: pthreads>examples>
> match: serialization>examples>
> match: android>examples>
> match: ios>examples>

The example at `examples/ui_example.nit` shows off most features of `app::ui` in a minimal program.
You can also take a look at the calculator (`../../examples/calculator/src/calculator.nit`) which is a concrete usage example.

> match: app>
> match: app
> match: json::static::Text::parse_json
> match: app::App
> match: app::app_base::Sys::app
> match: app::ui::Sys::root_window
> match: app>examples>
> match: core::Object::SELF
> match: android>ui>
> match: pthreads>examples>
> match: serialization>examples>
> match: ios>ui>
> match: app::AsyncHttpRequest::before
> match: android>
> match: android
> match: core::Queue::take
> match: android>examples>
> match: ios>examples>
> match: pthreads>
> match: pthreads
> match: android::ui
> match: android>nit_compile>android>app>
> match: ios::ui
> match: linux::ui
> match: app::app
> match: serialization>
> match: serialization
> match: ios::app
> match: app::AppComponent::on_create
> match: ios
> match: ios>
> match: core::Task
> match: core::Queue
> match: core::Map
> match: app::ui::App::push_window
> match: json>
> match: json
> match: json::JsonSerializer::plain_json
> match: app::Control
> match: core::ProcessDuplex
> match: core::re::NativeMatchArray::[]
> match: core::file::Text::to_program_name
> match: core::Finalizable::finalize
> match: core::Queue::peek
> match: core::flat::FlatString::with_infos
> match: app::AsyncHttpRequest
> match: core::SequenceRead
> match: core::Object::output
> match: core::Writable::write_to_bytes
> match: core::Object::output_class_name
> match: core::Object::is_same_instance
> match: core::Reader
> match: core::Writer
> match: core::exec::Sys::pid
> match: core::FlatText::fast_cstring
> match: pthreads::Mutex
> match: pthreads::MainThread

### Platform-specific UI

> match: android>ui>
> match: ios>ui>
> match: android::ui
> match: ios::ui
> match: linux::ui

You can go beyond the portable UI API of _app.nit_ by using the natives services of a platform.

> match: app>
> match: app
> match: android>service>
> match: android::platform
> match: ios::platform
> match: android::service
> match: serialization::Deserializer
> match: pthreads::pthreads::Thread::native
> match: app::http_request::App::run_on_ui_thread
> match: app::assets
> match: pthreads::pthreads::PthreadCond::native
> match: pthreads::pthreads::Mutex::native
> match: android>
> match: android
> match: serialization::Serializer
> match: serialization::Deserializer::deserialize_class_intern
> match: app::AppComponent::on_stop
> match: core::Char
> match: app::AppComponent::on_pause
> match: core::Byte
> match: core::Int
> match: core::circular_array::CircularArray::native
> match: app::app
> match: core::re::Regex::native
> match: pthreads>
> match: ios
> match: pthreads
> match: ios>
> match: json::serialization_write::Serializable::accept_json_serializer
> match: app::AppComponent::on_create
> match: app::App
> match: core::Collection
> match: app::TextView::size=
> match: core::Float
> match: core::Path
> match: core::NativeArray
> match: core::re::NativeRegex

The suggested approach is to use platform specific modules to customize the application on a precise platform.
See the calculator example for an adaptation of the UI on Android,
the interesting module is in this repository at ../../examples/calculator/src/android_calculator.nit

> match: app>
> match: app
> match: app::AppComponent::on_create
> match: app::App
> match: android::platform
> match: android>
> match: android
> match: ios::platform
> match: serialization>
> match: serialization
> match: app::AppComponent::on_restore_state
> match: app::AppComponent::on_save_state
> match: app::AppComponent::on_resume
> match: ios
> match: ios>
> match: app::AppComponent::on_stop
> match: json>
> match: json
> match: app::AppComponent::on_pause
> match: app::app
> match: app::AppComponent
> match: app::AppComponent::on_restart
> match: app::TextView::size=
> match: core>collection>
> match: json::JsonSerializer::plain_json
> match: app::http_request::App::run_on_ui_thread
> match: core>codecs>
> match: core::Object::hash
> match: json::static::Text::parse_json
> match: json::serialization_write::Serializable::serialize_to_json
> match: android>ui>
> match: ios>ui>
> match: app::app_base::Sys::bound_platform
> match: json::JsonDeserializer::class_name_heuristic
> match: core::Finalizable::finalize
> match: core::re::NativeRegex
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core::codecs
> match: app::app_base::Sys::test_bound_platform
> match: android::ui
> match: core::Object::object_id
> match: ios::ui
> match: linux::ui
> match: app::AsyncHttpRequest
> match: core::Task
> match: meta::meta::Object::class_factory
> match: core::Sys::main
> match: app::TextView::align=
> match: pthreads>
> match: pthreads
> match: serialization::serialization_core
> match: android::aware

## Persistent State with data_store

> match: android::data_store
> match: ios::data_store
> match: linux::data_store
> match: app::data_store

_app.nit_ offers the submodule `app::data_store` to easily save the application state and user preferences.
The service is accessible by the method `App::data_store`. The `DataStore` itself defines 2 methods:

> match: app>
> match: app
> match: app::App
> match: app::app_base::Sys::app
> match: app::data_store
> match: app::app
> match: android>nit_compile>android>app>
> match: ios::app
> match: app::AppComponent
> match: android::data_store
> match: ios::data_store
> match: linux::data_store
> match: app::ui::Sys::root_window
> match: core::Sys
> match: app::ui::App::push_window
> match: app::data_store::App::data_store
> match: app::AppComponent::on_save_state
> match: app::AppComponent::on_stop
> match: android>service>
> match: serialization::Deserializer
> match: app::AppComponent::on_restore_state
> match: json::serialization_write::Serializable::accept_json_serializer
> match: android::service
> match: core::Object::SELF
> match: android>
> match: android
> match: core::Finalizable::finalize
> match: ios
> match: ios>
> match: serialization::Serializer
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Sys::main
> match: core::Collection
> match: pthreads>
> match: pthreads
> match: app::app_base
> match: app::AppComponent::on_restart
> match: core::Queue
> match: core::abstract_text::CString::to_s_full
> match: app::AppComponent::on_pause
> match: serialization>
> match: serialization
> match: core::Buffer::reverse

* `DataStore::[]=` saves and associates any serializable instances to a `String` key.
  Pass `null` to clear the value associated to a key.

* `DataStore::[]` returns the object associated to a `String` key.
  It returns `null` if nothing is associated to the key.

> match: core::MapIterator::key
> match: core::MapRead::get_or_null
> match: core::Map::[]=
> match: core::hash_collection::HashNode::key
> match: app::DataStore
> match: app::DataStore::[]=
> match: core::hash_collection::HashCollection::node_at
> match: core::MaybeError::value
> match: core::MapRead::provide_default_value
> match: serialization::DeserializerCache::[]=
> match: pthreads::AtomicInt::value
> match: core::MapRead::[]
> match: core::Map
> match: serialization::Serializer::try_to_serialize
> match: core::hash_collection::HashCollection::node_at_idx
> match: core::Buffer::clear
> match: core::array::ArrayMap::index
> match: serialization::SerializerCache::next_available_id
> match: core::MapRead::keys
> match: core::hash_collection::HashCollection::index_at
> match: serialization::Serializable
> match: core::abstract_text::Map::join
> match: core::hash_collection::HashMapNode::value
> match: core::String
> match: core::hash_collection::HashCollection::last_accessed_key
> match: core::hash_collection::HashCollection::remove_node
> match: core::MapRead
> match: app::DataStore::[]
> match: app>
> match: app
> match: core::CoupleMap::couple_at
> match: core::MapRead::get_or_default
> match: core::MapIterator::key
> match: core::MapRead::get_or_null
> match: core::hash_collection::HashNode::key
> match: core::hash_collection::HashCollection::node_at
> match: app::DataStore::[]
> match: serialization::DeserializerCache::[]=
> match: core::hash_collection::HashCollection::node_at_idx
> match: core::MapRead::keys
> match: core::hash_collection::HashCollection::index_at
> match: core::MapRead::[]
> match: serialization::SerializerCache::next_available_id
> match: json::JsonDeserializer::class_name_heuristic
> match: core::Map::[]=
> match: core::Map
> match: core::String
> match: core::CoupleMap::couple_at
> match: core::MapRead::get_or_default
> match: core::array::ArrayMap::index
> match: serialization::Deserializer::deserialize_attribute
> match: core::MapRead::has_key
> match: app::DataStore::[]=
> match: app>
> match: app
> match: core::Object::SELF
> match: core::MapRead::provide_default_value
> match: app::DataStore
> match: core::Text::to_cstring
> match: core::MapRead
> match: core::Char::to_i
> match: core::Writable::write_to_string
> match: core::hash_collection::HashCollection::last_accessed_key
> match: core::Finalizable::finalize
> match: core::hash_collection::HashCollection::remove_node
> match: core::SequenceRead::get_or_null
> match: core::Reader::read_nonwhitespace
> match: pthreads>
> match: pthreads
> match: serialization::DeserializerCache::has_id
> match: core::Path::stat
> match: core::file::Text::rmdir
> match: core::Regex::compile
> match: core::Object::is_same_instance
> match: core::FileStream::file_stat
> match: core::file::Text::file_extension
> match: json::JsonSerializer::plain_json
> match: core::abstract_text::Map::join
> match: serialization::DeserializerCache::object_for
> match: json::serialization_read::Text::deserialize_json
> match: json>
> match: json
> match: core::sorter::MapRead::values_sorted_by_key
> match: core::file::Text::chdir
> match: poset::poset::MapRead::filter_keys
> match: core::Writable::write_to_bytes
> match: core::file::Text::mkdir
> match: serialization::Serializer::try_to_serialize
> match: core::Object::object_id
> match: core::MaybeError
> match: serialization::SafeDeserializer::check_subtypes
> match: serialization::Deserializer::deserialize_class
> match: core::Regex::optimize_has
> match: core::AbstractArrayRead::reversed
> match: serialization::SerializerCache::new_id_for
> match: core::Collection::first
> match: serialization>
> match: serialization
> match: core::sorter::MapRead::keys_sorted_by_values
> match: core::Finalizable
> match: core::Path::each_line
> match: core::FlatText::fast_cstring
> match: core::Reader::read_char

### Usage Example

> match: json::static::Text::parse_json
> match: app>examples>
> match: pthreads>examples>
> match: serialization>examples>
> match: android>examples>
> match: ios>examples>

~~~
import app::data_store

redef class App
	var user_name: String

	redef fun on_save_state
	do
		app.data_store["first run"] = false
		app.data_store["user name"] = user_name

		super # call `on_save_state` on all attached instances of `AppComponent`
	end

	redef fun on_restore_state
	do
		var first_run = app.data_store["first run"]
		if first_run != true then
			print "It's the first run of this application"
		end

		var user_name = app.data_store["user name"]
		if user_name isa String then
			self.user_name = user_name
		else self.user_name = "Undefined"

		super
	end
end
~~~

## Async HTTP request

> match: app::AsyncHttpRequest
> match: app::http_request::Text::http_get

The module `app::http_request` provides services to execute asynchronous HTTP request.
The class `AsyncHttpRequest` hides the complex parallel logic and
lets the user implement methods acting only on the UI thread.
See the documentation of `AsyncHttpRequest` for more information and
the full example at `examples/http_request_example.nit`.

> match: app>
> match: app
> match: app::AsyncHttpRequest
> match: app::App
> match: app::SimpleAsyncHttpRequest
> match: serialization>
> match: serialization
> match: app::MyHttpRequest
> match: app::app_base::Sys::app
> match: json>
> match: json
> match: pthreads::pthreads::Sys::thread
> match: core::Collection
> match: pthreads::Thread
> match: pthreads::Thread::join
> match: core::Task
> match: app::AsyncHttpRequest::before
> match: app::http_request::App::run_on_ui_thread
> match: pthreads>
> match: pthreads
> match: app::ui::Sys::root_window
> match: app::http_request::Text::http_get
> match: android>service>
> match: core::FinalizableOnce
> match: android::service
> match: android>ui>
> match: serialization::Deserializer
> match: app::Control
> match: ios>ui>
> match: json::static::Text::parse_json
> match: json::JsonDeserializer::class_name_heuristic
> match: android::ui
> match: android>nit_compile>android>app>
> match: pthreads::Thread::start
> match: ios::ui
> match: core::exec::CString::system
> match: linux::ui
> match: ios::app
> match: core::Sys::run
> match: core::FileStat

## Metadata annotations

> match: serialization>
> match: serialization

The _app.nit_ framework defines three annotations to customize the application package.

> match: app>
> match: app
> match: app::AppComponent
> match: app::app

* `app_name` takes a single argument, the visible name of the application.
  This name is used for launchers and window title.
  By default, the name of the target module.

* `app_namespace` specifies the full namespace (or package name) of the application package.
  This value usually identify the application uniquely on application stores.
  It should not change once the application has benn published.
  By default, the namespace is `org.nitlanguage.{module_name}`.

* `app_version` specifies the version of the application package.
  This annotation expects at least one argument, usually we use three version numbers:
  the major, minor and revision.
  The special function `git_revision` will use the prefix of the hash of the latest git commit.
  By default, the version is 0.1.

* `app_files` tells the compiler where to find platform specific resource files associated to a module.
  By default, only the root of the project is searched for the folders `android` and `ios`.
  The `android` folder is used as base for the generated Android project,
  it can be used to specify the resource files, libs and even Java source files.
  The `ios` folder is searched for icons only.

  Each argument of `app_files` is a relative path to a folder containing extra `android` or `ios` folders.
  If there is no arguments, the parent folder of the annotated module is used.
  In case of name conflicts in the resource files, the files from the project root have the lowest priority,
  those associated to modules lower in the importation hierarchy have higher priority.

> match: meta::Class::name
> match: app>
> match: app
> match: json::JsonDeserializer::class_name_heuristic
> match: meta::GetName
> match: core::abstract_text::Object::class_name
> match: serialization::AttributeTypeError::expected_type
> match: serialization>
> match: serialization
> match: serialization::AttributeError::attribute_name
> match: core::abstract_text::Object::native_class_name
> match: core::abstract_text::Sys::program_name
> match: app::ui::App::window
> match: serialization::engine_tools::Text::strip_nullable
> match: app::AppComponent
> match: core::Path::filename
> match: core::Object::output_class_name
> match: meta::meta::Object::class_factory
> match: serialization::engine_tools::Text::strip_nullable_and_params
> match: android>
> match: android
> match: app::Window
> match: serialization::Deserializer::deserialize_attribute
> match: app::App
> match: core::Queue::take
> match: core::file::Text::to_program_name
> match: json>
> match: json
> match: app::ui::App::push_window
> match: app::ui::Sys::root_window
> match: core::MinHeap::default
> match: app::AsyncHttpRequest::uri
> match: app::AppComponent::on_restart
> match: app::View
> match: core::abstract_text::StringCharView::target
> match: core::abstract_text::StringByteView::target
> match: core::flat::FlatStringByteReverseIterator::target
> match: core::flat::FlatStringCharIterator::target
> match: core::flat::FlatStringByteIterator::target
> match: core::flat::FlatStringCharReverseIterator::target
> match: core::Ref
> match: core::Object::object_id
> match: core::flat::FlatBufferByteReverseIterator::target
> match: core::flat::FlatBufferByteIterator::target
> match: core::flat::FlatBufferCharIterator::target
> match: app::AppComponent::on_pause
> match: core::flat::FlatBufferCharReverseIterator::target
> match: core::Process::arguments
> match: core::file::Text::file_exists
> match: json::JsonDeserializer::attributes_path
> match: core::re::NativeRegex
> match: app::AppComponent::on_create
> match: meta
> match: meta>
> match: json::JsonSerializer::stream
> match: serialization::inspect::InspectSerializer::stream
> match: app>
> match: app
> match: app::AppComponent
> match: app::AppComponent::on_create
> match: app::App
> match: android>
> match: android
> match: app::App::run
> match: app::app_base::Sys::test_bound_platform
> match: app::Asset
> match: ios
> match: ios>
> match: app::AppComponent::on_resume
> match: core::MapRead::provide_default_value
> match: app::AppComponent::on_stop
> match: json::JsonDeserializer::class_name_heuristic
> match: app::AppComponent::on_restore_state
> match: app::AppComponent::on_save_state
> match: meta::Class::name
> match: app::AppComponent::on_pause
> match: app::AppComponent::on_restart
> match: core::MaybeError::value
> match: pthreads::AtomicInt::value
> match: serialization::safe::Sys::class_inheritance_metamodel
> match: core::Finalizable::finalize
> match: serialization>
> match: serialization
> match: core::FinalizableOnce
> match: serialization::SafeDeserializer::check_subtypes
> match: serialization::Serializable::core_serialize_to
> match: json::store
> match: app::app
> match: app::SimpleAsyncHttpRequest
> match: core::Object::object_id
> match: core::Object::==
> match: core::Object::!=
> match: core::hash_collection::HashMapNode::value
> match: core::math::Float::is_nan
> match: serialization::Serializer::serialize_core
> match: core::hash_collection::HashCollection::store
> match: core::Object::output_class_name
> match: core::Error::message
> match: app::app_base::Sys::bound_platform
> match: app>
> match: app
> match: android>
> match: android
> match: core::Text::reversed
> match: core::Text::to_lower
> match: core::Object::hash
> match: core::Text::to_upper
> match: core::Char::to_lower
> match: core::Char::to_upper
> match: serialization>
> match: serialization
> match: core::ropes::Concat::balance
> match: core::Int::digit_count_base_10
> match: core::numeric::Text::to_n
> match: core::Buffer::append_substring_impl
> match: core::Object::object_id
> match: core::math::Float::is_nan
> match: app::AppComponent
> match: core::file::NativeFile::set_buffering_type
> match: core::string_search::Text::prefix
> match: core::FlatText::fast_cstring
> match: core::MinHeap::default
> match: core::Stream::start
> match: core::re::NativeRegex
> match: json::serialization_write::Serializable::serialize_to_json
> match: app::Asset
> match: core::time::Sys::get_time
> match: core::Range::step
> match: serialization::engine_tools::Object::serialization_hash
> match: pthreads>
> match: pthreads
> match: json::JsonDeserializer::class_name_heuristic
> match: core::time::Sys::get_microtime
> match: core::abstract_text::Sys::native_argc
> match: core::MaybeError
> match: core::flat::FlatBuffer::with_infos
> match: core::abstract_text::Sys::native_argv
> match: json>
> match: json
> match: core::Buffer::written
> match: app::App
> match: core::Collection::has_any
> match: ios
> match: ios>
> match: core::ArrayMap::enlarge
> match: core::Iterator::finish
> match: core::AbstractArray::enlarge
> match: core::MapIterator::finish
> match: core::Stream::finish
> match: core::Collection::has_all
> match: core::Iterator::start
> match: core::MapIterator::start
> match: app::TextView::size=
> match: json::JsonSerializer::plain_json
> match: core::Process::arguments
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Object::==
> match: core::Ref
> match: core::BytePattern::is_prefix
> match: core::Bytes::has_prefix
> match: serialization::AsyncCache::use_even
> match: android>
> match: android
> match: app>
> match: app
> match: core::file::FileStream::file
> match: app::Asset
> match: serialization>
> match: serialization
> match: core::file::Int::fd_to_stream
> match: android::aware
> match: android>nit_compile>android>
> match: android::android
> match: app::PlayableAudio::path
> match: ios
> match: ios>
> match: app::TextAsset
> match: core::file::Sys::wipe_write
> match: core::string_search::Text::search
> match: app::AppComponent::on_restore_state
> match: core::Finalizable::finalize
> match: core::FileStat
> match: core::Error::message
> match: core::FileStream::fd
> match: json::JsonDeserializer::class_name_heuristic
> match: core::Object::output
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::FileReader::from_fd
> match: core::Object::output_class_name
> match: core::FileWriter::from_fd
> match: core::Path::delete
> match: core::Path::filename
> match: core::Path::exists
> match: core::Iterator::finish
> match: core::MapIterator::finish
> match: core::Stream::finish
> match: core::Object::object_id
> match: app::TextView::size=
> match: app::AppComponent::on_stop
> match: core::re::NativeRegex
> match: json::JsonSerializer::plain_json
> match: core::Iterator::start
> match: core::MapIterator::start
> match: app::SimpleAsyncHttpRequest
> match: app::assets
> match: core::FinalizableOnce
> match: core::Path::stat
> match: core::Path
> match: core::Object::hash
> match: core::Pattern::search_in
> match: pthreads::Mutex
> match: json>
> match: json
> match: core::Bytes::items
> match: serialization::SafeDeserializer::check_subtypes
> match: app::Asset::path
> match: core::Pattern::search_index_in
> match: core::file::NativeFileStat::is_reg
> match: json::serialization_read::Text::deserialize_json
> match: core::Object::SELF
> match: core::Stream::start
> match: app::App
> match: core::Sys
> match: core::FlatText::fast_cstring
> match: core::Path::files
> match: core::Path::each_line
> match: core::FileWriter
> match: core::FileReader
> match: core::abstract_collection::RefIterator
> match: app::app_base::Sys::bound_platform
> match: core::Collection::has_exactly
> match: core::MapRead::has_key
> match: core::FileStat::is_file
> match: core::file::Text::simplify_path
> match: serialization::Serializer::serialize_core
> match: core::file::Text::file_extension
> match: core::Finalizable
> match: core::ProcessDuplex
> match: app>
> match: app
> match: android>
> match: android
> match: app::PlayableAudio::path
> match: app::Asset
> match: serialization>
> match: serialization
> match: app::Asset::path
> match: core::file::FileStream::file
> match: app::TextAsset
> match: core::file::Int::fd_to_stream
> match: json::JsonDeserializer::class_name_heuristic
> match: core::union_find::DisjointSetNode::parent
> match: core::FileStat
> match: core::FileStream::path
> match: core::Finalizable::finalize
> match: ios
> match: ios>
> match: core::Path::filename
> match: core::Path::files
> match: core::Path
> match: core::Path::exists
> match: android::aware
> match: core::file::Sys::wipe_write
> match: core::file::Text::relpath
> match: core::Path::stat
> match: core::file::Text::simplify_path
> match: core::FileStream::fd
> match: app::assets
> match: core::FileReader::open
> match: core::Path::delete
> match: core::re::NativeRegex
> match: core::FileReader::from_fd
> match: meta::Class::name
> match: core::Error::message
> match: core::FileStat::size
> match: json>
> match: json
> match: core::Process::arguments
> match: core::FileWriter::from_fd
> match: poset::POSetElement::depth
> match: app::Control::parent
> match: core::Path::copy
> match: core::Path::read_all_bytes
> match: core::FileWriter::open
> match: core::Path::read_all
> match: core::Path::read_lines
> match: core::AbstractArrayRead::sub
> match: json::serialization_read::JsonDeserializer::root
> match: core::Path::each_line
> match: core>collection>
> match: app::Control::parent=
> match: core::file::Text::to_program_name
> match: core::file::Text::file_extension
> match: app::app_base::Sys::bound_platform
> match: core::Text::to_camel_case
> match: core::file::Text::to_path
> match: pthreads>
> match: pthreads
> match: core::abstract_text::Sys::native_argc
> match: core::MapRead::has_key
> match: core::abstract_text::Sys::native_argv
> match: core::Object::output_class_name
> match: core::file::Text::join_path
> match: pthreads::extra

### Usage Example

> match: json::static::Text::parse_json
> match: app>examples>
> match: pthreads>examples>
> match: serialization>examples>
> match: android>examples>
> match: ios>examples>

~~~
module my_module is
    app_name "My App"
    app_namespace "org.example.my_app"
    app_version(1, 0, git_revision)
end
~~~

## Compiling and Packaging an Application

> match: app::AppComponent
> match: core::Regex::compile
> match: app>
> match: app

The Nit compiler detects the target platform from the importations and generates the appropriate application format and package.

> match: app>
> match: app
> match: app::AppComponent
> match: android::platform
> match: ios::platform
> match: app::App
> match: json::serialization_write::Serializable::serialize_to_json
> match: app::AppComponent::on_create
> match: json::serialization_write::JsonSerializer::open_objects
> match: android>
> match: android
> match: core::abstract_text::StringCharView::target
> match: core::abstract_text::StringByteView::target

Applications using only the portable services of _app.nit_ require some special care at compilation.
Such an application, let's say `calculator.nit`, does not depend on a specific platform and use the portable UI.
The target platform must be specified to the compiler for it to produce the correct application package.
There is two main ways to achieve this goal:

> match: app>
> match: app
> match: app::AppComponent
> match: android>
> match: android
> match: app::App
> match: app::AppComponent::on_create
> match: app::AppComponent::on_restore_state
> match: ios
> match: ios>
> match: app::AppComponent::on_stop
> match: app::AppComponent::on_resume
> match: android::platform
> match: serialization>
> match: serialization
> match: app::AppComponent::on_save_state
> match: ios::platform
> match: app::app_base::Sys::test_bound_platform
> match: app::AppComponent::on_restart
> match: app::AppComponent::on_pause
> match: app::app
> match: core::Object::object_id
> match: app::App::run
> match: app::TextView::size=
> match: core::Finalizable::finalize
> match: core::Object::output
> match: app::app_base::Sys::bound_platform
> match: serialization::Deserializer
> match: meta::meta::Object::class_factory
> match: core::Sys::main
> match: app::http_request::App::run_on_ui_thread
> match: core::Object::SELF
> match: core::Object::output_class_name
> match: core::re::NativeRegex
> match: core::FlatText::fast_cstring
> match: json::JsonDeserializer::class_name_heuristic
> match: app::assets
> match: core::Object::is_same_type
> match: json::serialization_read::Text::deserialize_json
> match: core::math::Float::is_nan
> match: core::Collection::has_exactly
> match: app::TextView::align=
> match: json::JsonSerializer::plain_json
> match: core::Error::message
> match: serialization::Deserializer::deserialize_class_intern
> match: app::Asset
> match: core::Buffer::times
> match: core::Iterator::finish
> match: core::MapIterator::finish
> match: json>
> match: json
> match: pthreads>
> match: pthreads
> match: core::Iterator::start
> match: core::MapIterator::start
> match: json::serialization_write::JsonSerializer::open_objects
> match: core::Iterator::next_by
> match: core::Object::hash
> match: app::SimpleAsyncHttpRequest
> match: core::Sys
> match: json::serialization_write::Serializable::accept_json_serializer
> match: core::Collection

* The mixin option (`-m module`) imports an additional module before compiling.
  It can be used to load platform specific implementations of the _app.nit_ portable UI.

  ~~~bash
  # GNU/Linux version, using GTK
  nitc calculator.nit -m linux

  # Android version
  nitc calculator.nit -m android

  # iOS version
  nitc calculator.nit -m ios
  ~~~

* A common alternative for larger projects is to use platform specific modules.
  Continuing with the calculator example, it is adapted for Android by the module `android_calculator.nit`.
  This module imports both `calculator` and `android`, it can then use Android specific code.

  ~~~
  module android_calculator

  import calculator
  import android

  # ...
  ~~~

> match: app>
> match: app
> match: android>
> match: android
> match: serialization>
> match: serialization
> match: app::TextAsset::load
> match: core::re::NativeRegex
> match: app::PlayableAudio::load
> match: core>collection>
> match: app::app
> match: app::App
> match: core::Finalizable::finalize
> match: core::Regex::compile
> match: core>codecs>
> match: core::Collection
> match: app::assets
> match: app::TextView::size=
> match: android::platform
> match: meta::meta::Object::class_factory
> match: app::AppComponent::on_create
> match: ios::platform
> match: android>ui>
> match: ios>ui>
> match: ios
> match: ios>
> match: core::Task
> match: core::codecs
> match: android::ui
> match: ios::ui
> match: linux::ui
> match: core::Sys::main
> match: core::Object::object_id
> match: core::Bytes::items
> match: app::AppComponent::on_restore_state
> match: app::TextView::align=
> match: app::app_base::Sys::bound_platform
> match: core::Iterator::finish
> match: core::MapIterator::finish
> match: core::Stream::finish
> match: json::JsonSerializer::plain_json
> match: core::Iterator::start
> match: core::MapIterator::start
> match: core::Object::SELF
> match: app::audio
> match: android::aware
> match: json>
> match: json
> match: json::JsonDeserializer::class_name_heuristic
> match: app::AppComponent::on_stop
> match: core::Stream::start
> match: core::Cloneable
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Object::is_same_type
> match: app::AppComponent::on_resume
> match: serialization::SafeDeserializer::check_subtypes
> match: app::http_request::App::run_on_ui_thread
> match: app::Control
> match: core::ProcessDuplex
> match: core::Object::output
> match: core::Collection::has_exactly
> match: core::Sys::run
> match: app::AppComponent::on_pause
> match: core::Object::output_class_name
> match: app::SimpleAsyncHttpRequest
> match: core::CachedAlphaComparator
> match: core::Map
> match: meta::meta::Object::get_class
> match: app>
> match: app
> match: android>
> match: android
> match: serialization>
> match: serialization
> match: android::aware
> match: core::re::NativeRegex
> match: android>nit_compile>android>
> match: android::android
> match: app::AppComponent::on_restore_state
> match: core::Object::object_id
> match: json::JsonSerializer::plain_json
> match: json>
> match: json
> match: app::AppComponent::on_stop
> match: core>collection>
> match: core::Finalizable::finalize
> match: json::JsonDeserializer::class_name_heuristic
> match: app::App
> match: core>codecs>
> match: core::Object::SELF
> match: meta::meta::Object::class_factory
> match: core::Bytes::items
> match: core::Iterator::finish
> match: core::Sys::main
> match: core::MapIterator::finish
> match: core::Stream::finish
> match: core::Object::is_same_type
> match: app::TextView::size=
> match: core::Iterator::start
> match: core::MapIterator::start
> match: core::FlatText::fast_cstring
> match: core::Object::hash
> match: app::AppComponent::on_pause
> match: core::codecs
> match: app::app
> match: core::Stream::start
> match: core::Cloneable
> match: core::Task
> match: serialization::SafeDeserializer::check_subtypes
> match: app::AppComponent::on_resume
> match: ios
> match: ios>
> match: app::HttpRequestResult
> match: app::SimpleAsyncHttpRequest
> match: app::HttpRequestResult::code
> match: core::Sys::run
> match: core::Object::output
> match: core::re::NativeRegex::malloc
> match: pthreads::Mutex
> match: core::Object::output_class_name
> match: app::AppComponent::on_restart
> match: json::serialization_write::Serializable::serialize_to_json
> match: core::Sys::exit
> match: app::AppComponent::on_create
> match: meta::meta::Object::get_class
> match: app::AppComponent::on_save_state

