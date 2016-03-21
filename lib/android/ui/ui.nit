# This file is part of NIT (http://www.nitlanguage.org).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Views and services to use the Android native user interface
module ui

# Implementation note:
#
# We cannot rely on `Activity::on_restore_instance_state` to implement
# `on_restore_state` is it only invoked if there is a bundled state,
# and we don't use the Android bundled state.

import native_ui
import log
import nit_activity

import app::ui
private import data_store
import assets

redef class Control
	# The Android element used to implement `self`
	fun native: NATIVE is abstract

	# Type of `native`
	type NATIVE: JavaObject
end

redef class NativeActivity

	private fun remove_title_bar in "Java" `{
		self.requestWindowFeature(android.view.Window.FEATURE_NO_TITLE);
	`}

	# Insert a single layout as the root of the activity window
	private fun insert_root_layout(root_layout_id: Int)
	in "Java" `{
		android.widget.FrameLayout layout = new android.widget.FrameLayout(self);
		layout.setId((int)root_layout_id);
		self.setContentView(layout);
	`}

	# Replace the currently visible fragment, if any, with `native_fragment`
	private fun show_fragment(root_layout_id: Int, native_fragment: Android_app_Fragment)
	in "Java" `{
		android.app.FragmentTransaction transaction = self.getFragmentManager().beginTransaction();
		transaction.replace((int)root_layout_id, native_fragment);
		transaction.commit();
	`}
end

redef class App
	redef fun on_create
	do
		app.native_activity.remove_title_bar
		native_activity.insert_root_layout(root_layout_id)
		super
	end

	# Identifier of the container holding the fragments
	private var root_layout_id = 0xFFFF

	redef fun window=(window)
	do
		native_activity.show_fragment(root_layout_id, window.native)
		super
	end
end

# On Android, a window is implemented with the fragment `native`
redef class Window
	redef var native = (new Android_app_Fragment(self)).new_global_ref

	redef type NATIVE: Android_app_Fragment

	# Root high-level view of this window
	var view: nullable View = null

	redef fun add(item)
	do
		if item isa View then view = item
		super
	end

	private fun on_create_fragment: NativeView
	do
		on_create

		var view = view
		assert view != null else print_error "{class_name} needs a `view` after `Window::on_create` returns"
		return view.native
	end
end

redef class View
	redef type NATIVE: NativeView

	redef fun enabled=(enabled) do native.enabled = enabled or else true
	redef fun enabled do return native.enabled
end

redef class Layout
	redef type NATIVE: NativeViewGroup

	redef fun add(item)
	do
		super

		assert item isa View

		# FIXME abstract the use either homogeneous or weight to balance views size in a layout
		native.add_view_with_weight(item.native, 1.0)
	end

	redef fun remove(item)
	do
		super
		if item isa View then native.remove_view item.native
	end
end

redef class HorizontalLayout
	redef var native do
		var layout = new NativeLinearLayout(app.native_activity)
		layout = layout.new_global_ref
		layout.set_horizontal
		return layout
	end
end

redef class VerticalLayout
	redef var native do
		var layout = new NativeLinearLayout(app.native_activity)
		layout = layout.new_global_ref
		layout.set_vertical
		return layout
	end
end

redef class ListLayout
	redef type NATIVE: Android_widget_ListView

	redef var native do
		var layout = new Android_widget_ListView(app.native_activity)
		layout = layout.new_global_ref
		return layout
	end

	private var adapter: Android_widget_ArrayAdapter do
		var adapter = new Android_widget_ArrayAdapter(app.native_activity,
			android_r_layout_simple_list_item_1, self)
		native.set_adapter adapter
		return adapter.new_global_ref
	end

	redef fun add(item)
	do
		super
		if item isa View then adapter.add item.native
	end

	private fun create_view(position: Int): NativeView
	do
		var ctrl = items[position]
		assert ctrl isa View
		return ctrl.native
	end
end

redef class Android_widget_ArrayAdapter
	private new (context: NativeContext, res: Int, sender: ListLayout)
	import ListLayout.create_view in "Java" `{
		final int final_sender_object = sender;

		return new android.widget.ArrayAdapter(context, (int)res) {
				@Override
				public android.view.View getView(int position, android.view.View convertView, android.view.ViewGroup parent) {
					return ListLayout_create_view(final_sender_object, position);
				}
			};
	`}
end

redef class TextView
	redef type NATIVE: NativeTextView

	redef fun text do return native.text.to_s
	redef fun text=(value) do
		if value == null then value = ""
		native.text = value.to_java_string
	end

	# Size of the text
	fun text_size: Float do return native.text_size

	# Size of the text
	fun text_size=(text_size: nullable Float) do
		if text_size != null then native.text_size = text_size
	end
end

redef class Label
	redef type NATIVE: NativeTextView
	redef var native do return (new NativeTextView(app.native_activity)).new_global_ref

	init do native.set_text_appearance(app.native_activity, android_r_style_text_appearance_medium)
end

redef class CheckBox
	redef type NATIVE: Android_widget_CompoundButton
	redef var native do return (new Android_widget_CheckBox(app.native_activity)).new_global_ref

	redef fun is_checked do return native.is_checked
	redef fun is_checked=(value) do native.set_checked(value)
end

redef class TextInput
	redef type NATIVE: NativeEditText
	redef var native = (new NativeEditText(app.native_activity)).new_global_ref

	redef fun is_password=(value)
	do
		native.is_password = value or else false
		super
	end
end

redef class NativeEditText

	# Configure this view to hide passwords
	fun is_password=(value: Bool) in "Java" `{
		if (value) {
			self.setInputType(android.text.InputType.TYPE_CLASS_TEXT | android.text.InputType.TYPE_TEXT_VARIATION_PASSWORD);
			self.setTransformationMethod(android.text.method.PasswordTransformationMethod.getInstance());
		} else {
			self.setInputType(android.text.InputType.TYPE_CLASS_TEXT);
			self.setTransformationMethod(null);
		}
	`}
end

redef class Button
	super Finalizable

	redef type NATIVE: NativeButton
	redef var native = (new NativeButton(app.native_activity, self)).new_global_ref

	private fun on_click do notify_observers new ButtonPressEvent(self)

	redef fun finalize do native.delete_global_ref
end

redef class NativeButton
	private new (context: NativeActivity, sender_object: Button)
	import Button.on_click in "Java" `{
		final int final_sender_object = sender_object;
		Button_incr_ref(final_sender_object);

		return new android.widget.Button(context){
			@Override
			public boolean onTouchEvent(android.view.MotionEvent event) {
				if(event.getAction() == android.view.MotionEvent.ACTION_DOWN) {
					Button_on_click(final_sender_object);
					return true;
				}
				return false;
			}
		};
	`}
end

redef class Android_app_Fragment
	private new (nit_window: Window)
	import Window.on_create_fragment in "Java" `{
		final int final_nit_window = nit_window;

		return new android.app.Fragment(){
			@Override
			public android.view.View onCreateView(android.view.LayoutInflater inflater,
				android.view.ViewGroup container, android.os.Bundle state) {

				return Window_on_create_fragment(final_nit_window);
			}
		};
	`}
end
