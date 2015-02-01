/*
 * Copyright (c) 2012 - 2014 Samsung Electronics Co., Ltd All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the License);
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*This file is generated by auto_codes.py.*/

#ifndef __AUTO_METADATA_H__
#define __AUTO_METADATA_H__

#include <memory.h>
typedef struct _Input_mode_configure_width {
	int name;
	int layout_portrait;
	int layout_landscape;
	int use_virtual_window;
	int use_dim_window;
	int timeout;
}Input_mode_configure_width;

typedef struct _Layout_width {
	int name;
	int display_mode;
	int style;
	int width;
	int height;
	int use_sw_button;
	int use_magnifier_window;
	int extract_background;
	int key_width;
	int key_height;
	int key_spacing;
	int row_spacing;
	int use_sw_background;
	int bg_color;
	int bg_line_width;
	int bg_line_color;
	int add_grab_left;
	int add_grab_right;
	int add_grab_top;
	int add_grab_bottom;
	int image_path;
	int key_background_image;
	int sound_style;
	int vibe_style;
	int label_type;
	int modifier_decorator;
}Layout_width;

typedef struct _Key_coordinate_record_width {
	int x;
	int y;
	int width;
	int height;
	int add_hit_left;
	int add_hit_right;
	int add_hit_top;
	int add_hit_bottom;
	int popup_relative_x;
	int popup_relative_y;
	int extract_offset_x;
	int extract_offset_y;
	int sub_layout;
	int magnifier_offset_x;
	int magnifier_offset_y;
	int custom_id;
	int button_type;
	int key_type;
	int popup_type;
	int use_magnifier;
	int use_long_key_magnifier;
	int popup_input_mode;
	int sound_style;
	int vibe_style;
	int is_side_button;
	int label_count;
	int label;
	int label_type;
	int image_label_path;
	int image_label_type;
	int bg_image_path;
	int key_value_count;
	int key_value;
	int key_event;
	int long_key_type;
	int long_key_value;
	int long_key_event;
	int use_repeat_key;
	int autopopup_key_labels;
	int autopopup_key_values;
	int autopopup_key_events;
	int dont_close_popup;
	int extra_option;
	int multitouch_type;
	int modifier_decorator;
	int magnifier_label;
	int hint_string;
}Key_coordinate_record_width;

typedef struct _Label_properties_record_width {
	int label_type;
	int font_name;
	int font_size;
	int font_color;
	int alignment;
	int padding_x;
	int padding_y;
	int inner_width;
	int inner_height;
	int shadow_distance;
	int shadow_direction;
	int shadow_color;
}Label_properties_record_width;

typedef struct _Default_configure_width {
	int display_mode;
	int input_mode;
	int image_file_base_path;
	int target_screen_width;
	int target_screen_height;
	int auto_detect_landscape;
	int use_magnifier_window;
	int use_auto_popup;
	int use_zoom_window;
	int on_error_noti_send;
	int use_word_deletion;
	int sw_button_style;
	int touch_offset_level;
	int touch_offset;
	int default_sub_layout;
	int use_actual_dim_window;
	int dim_color;
}Default_configure_width;

typedef struct _Magnifier_configure_width {
	int style;
	int width;
	int height;
	int label_area_rect;
	int bg_image_path;
	int bg_shift_image_path;
	int bg_shift_lock_image_path;
	int bg_long_key_image_path;
	int use_actual_window;
	int label_type;
	int padding_x;
	int padding_y;
	int show_shift_label;
}Magnifier_configure_width;

typedef struct _Autopopup_configure_width {
	int bg_image_path;
	int bg_color;
	int bg_line_width;
	int bg_line_color;
	int bg_padding;
	int button_image_path;
	int sw_button_style;
	int button_width;
	int button_height;
	int button_spacing;
	int label_type;
	int decoration_image_path;
	int decoration_size;
	int max_column;
	int add_grab_left;
	int add_grab_right;
	int add_grab_top;
	int add_grab_bottom;
}Autopopup_configure_width;

typedef struct _Modifier_decoration_width {
	int extract_background;
	int name;
	int bg_image_path;
}Modifier_decoration_width;

typedef struct _Nine_patch_width {
	int image_path;
	int left;
	int right;
	int top;
	int bottom;
}Nine_patch_width;

template <class T>
void set_input_mode_configure_width(T& md_helper,
	Input_mode_configure_width & record_width) {
	md_helper.set_current_metadata_record("input_mode_configure");
	memset(&record_width, 0x00, sizeof(Input_mode_configure_width));

	record_width.name = md_helper.get_width("name");
	record_width.layout_portrait = md_helper.get_width("layout_portrait");
	record_width.layout_landscape = md_helper.get_width("layout_landscape");
	record_width.use_virtual_window = md_helper.get_width("use_virtual_window");
	record_width.use_dim_window = md_helper.get_width("use_dim_window");
	record_width.timeout = md_helper.get_width("timeout");
}

template <class T>
void set_layout_width(T& md_helper,
	Layout_width & record_width) {
	md_helper.set_current_metadata_record("layout");
	memset(&record_width, 0x00, sizeof(Layout_width));

	record_width.name = md_helper.get_width("name");
	record_width.display_mode = md_helper.get_width("display_mode");
	record_width.style = md_helper.get_width("style");
	record_width.width = md_helper.get_width("width");
	record_width.height = md_helper.get_width("height");
	record_width.use_sw_button = md_helper.get_width("use_sw_button");
	record_width.use_magnifier_window = md_helper.get_width("use_magnifier_window");
	record_width.extract_background = md_helper.get_width("extract_background");
	record_width.key_width = md_helper.get_width("key_width");
	record_width.key_height = md_helper.get_width("key_height");
	record_width.key_spacing = md_helper.get_width("key_spacing");
	record_width.row_spacing = md_helper.get_width("row_spacing");
	record_width.use_sw_background = md_helper.get_width("use_sw_background");
	record_width.bg_color = md_helper.get_width("bg_color");
	record_width.bg_line_width = md_helper.get_width("bg_line_width");
	record_width.bg_line_color = md_helper.get_width("bg_line_color");
	record_width.add_grab_left = md_helper.get_width("add_grab_left");
	record_width.add_grab_right = md_helper.get_width("add_grab_right");
	record_width.add_grab_top = md_helper.get_width("add_grab_top");
	record_width.add_grab_bottom = md_helper.get_width("add_grab_bottom");
	record_width.image_path = md_helper.get_width("image_path");
	record_width.key_background_image = md_helper.get_width("key_background_image");
	record_width.sound_style = md_helper.get_width("sound_style");
	record_width.vibe_style = md_helper.get_width("vibe_style");
	record_width.label_type = md_helper.get_width("label_type");
	record_width.modifier_decorator = md_helper.get_width("modifier_decorator");
}

template <class T>
void set_key_coordinate_record_width(T *md_helper,
	Key_coordinate_record_width & record_width) {
	if (md_helper) {
		md_helper->set_current_metadata_record("key_coordinate_record");
		memset(&record_width, 0x00, sizeof(Key_coordinate_record_width));

		record_width.x = md_helper->get_width("x");
		record_width.y = md_helper->get_width("y");
		record_width.width = md_helper->get_width("width");
		record_width.height = md_helper->get_width("height");
		record_width.add_hit_left = md_helper->get_width("add_hit_left");
		record_width.add_hit_right = md_helper->get_width("add_hit_right");
		record_width.add_hit_top = md_helper->get_width("add_hit_top");
		record_width.add_hit_bottom = md_helper->get_width("add_hit_bottom");
		record_width.popup_relative_x = md_helper->get_width("popup_relative_x");
		record_width.popup_relative_y = md_helper->get_width("popup_relative_y");
		record_width.extract_offset_x = md_helper->get_width("extract_offset_x");
		record_width.extract_offset_y = md_helper->get_width("extract_offset_y");
		record_width.sub_layout = md_helper->get_width("sub_layout");
		record_width.magnifier_offset_x = md_helper->get_width("magnifier_offset_x");
		record_width.magnifier_offset_y = md_helper->get_width("magnifier_offset_y");
		record_width.custom_id = md_helper->get_width("custom_id");
		record_width.button_type = md_helper->get_width("button_type");
		record_width.key_type = md_helper->get_width("key_type");
		record_width.popup_type = md_helper->get_width("popup_type");
		record_width.use_magnifier = md_helper->get_width("use_magnifier");
		record_width.use_long_key_magnifier = md_helper->get_width("use_long_key_magnifier");
		record_width.popup_input_mode = md_helper->get_width("popup_input_mode");
		record_width.sound_style = md_helper->get_width("sound_style");
		record_width.vibe_style = md_helper->get_width("vibe_style");
		record_width.is_side_button = md_helper->get_width("is_side_button");
		record_width.label_count = md_helper->get_width("label_count");
		record_width.label = md_helper->get_width("label");
		record_width.label_type = md_helper->get_width("label_type");
		record_width.image_label_path = md_helper->get_width("image_label_path");
		record_width.image_label_type = md_helper->get_width("image_label_type");
		record_width.bg_image_path = md_helper->get_width("bg_image_path");
		record_width.key_value_count = md_helper->get_width("key_value_count");
		record_width.key_value = md_helper->get_width("key_value");
		record_width.key_event = md_helper->get_width("key_event");
		record_width.long_key_type = md_helper->get_width("long_key_type");
		record_width.long_key_value = md_helper->get_width("long_key_value");
		record_width.long_key_event = md_helper->get_width("long_key_event");
		record_width.use_repeat_key = md_helper->get_width("use_repeat_key");
		record_width.autopopup_key_labels = md_helper->get_width("autopopup_key_labels");
		record_width.autopopup_key_values = md_helper->get_width("autopopup_key_values");
		record_width.autopopup_key_events = md_helper->get_width("autopopup_key_events");
		record_width.dont_close_popup = md_helper->get_width("dont_close_popup");
		record_width.extra_option = md_helper->get_width("extra_option");
		record_width.multitouch_type = md_helper->get_width("multitouch_type");
		record_width.modifier_decorator = md_helper->get_width("modifier_decorator");
		record_width.magnifier_label = md_helper->get_width("magnifier_label");
		record_width.hint_string = md_helper->get_width("hint_string");
	}
}

template <class T>
void set_label_properties_record_width(T& md_helper,
	Label_properties_record_width & record_width) {
	md_helper.set_current_metadata_record("label_properties_record");
	memset(&record_width, 0x00, sizeof(Label_properties_record_width));

	record_width.label_type = md_helper.get_width("label_type");
	record_width.font_name = md_helper.get_width("font_name");
	record_width.font_size = md_helper.get_width("font_size");
	record_width.font_color = md_helper.get_width("font_color");
	record_width.alignment = md_helper.get_width("alignment");
	record_width.padding_x = md_helper.get_width("padding_x");
	record_width.padding_y = md_helper.get_width("padding_y");
	record_width.inner_width = md_helper.get_width("inner_width");
	record_width.inner_height = md_helper.get_width("inner_height");
	record_width.shadow_distance = md_helper.get_width("shadow_distance");
	record_width.shadow_direction = md_helper.get_width("shadow_direction");
	record_width.shadow_color = md_helper.get_width("shadow_color");
}

template <class T>
void set_default_configure_width(T& md_helper,
	Default_configure_width & record_width) {
	md_helper.set_current_metadata_record("default_configure");
	memset(&record_width, 0x00, sizeof(Default_configure_width));

	record_width.display_mode = md_helper.get_width("display_mode");
	record_width.input_mode = md_helper.get_width("input_mode");
	record_width.image_file_base_path = md_helper.get_width("image_file_base_path");
	record_width.target_screen_width = md_helper.get_width("target_screen_width");
	record_width.target_screen_height = md_helper.get_width("target_screen_height");
	record_width.auto_detect_landscape = md_helper.get_width("auto_detect_landscape");
	record_width.use_magnifier_window = md_helper.get_width("use_magnifier_window");
	record_width.use_auto_popup = md_helper.get_width("use_auto_popup");
	record_width.use_zoom_window = md_helper.get_width("use_zoom_window");
	record_width.on_error_noti_send = md_helper.get_width("on_error_noti_send");
	record_width.use_word_deletion = md_helper.get_width("use_word_deletion");
	record_width.sw_button_style = md_helper.get_width("sw_button_style");
	record_width.touch_offset_level = md_helper.get_width("touch_offset_level");
	record_width.touch_offset = md_helper.get_width("touch_offset");
	record_width.default_sub_layout = md_helper.get_width("default_sub_layout");
	record_width.use_actual_dim_window = md_helper.get_width("use_actual_dim_window");
	record_width.dim_color = md_helper.get_width("dim_color");
}

template <class T>
void set_magnifier_configure_width(T& md_helper,
	Magnifier_configure_width & record_width) {
	md_helper.set_current_metadata_record("magnifier_configure");
	memset(&record_width, 0x00, sizeof(Magnifier_configure_width));

	record_width.style = md_helper.get_width("style");
	record_width.width = md_helper.get_width("width");
	record_width.height = md_helper.get_width("height");
	record_width.label_area_rect = md_helper.get_width("label_area_rect");
	record_width.bg_image_path = md_helper.get_width("bg_image_path");
	record_width.bg_shift_image_path = md_helper.get_width("bg_shift_image_path");
	record_width.bg_shift_lock_image_path = md_helper.get_width("bg_shift_lock_image_path");
	record_width.bg_long_key_image_path = md_helper.get_width("bg_long_key_image_path");
	record_width.use_actual_window = md_helper.get_width("use_actual_window");
	record_width.label_type = md_helper.get_width("label_type");
	record_width.padding_x = md_helper.get_width("padding_x");
	record_width.padding_y = md_helper.get_width("padding_y");
	record_width.show_shift_label = md_helper.get_width("show_shift_label");
}

template <class T>
void set_autopopup_configure_width(T& md_helper,
	Autopopup_configure_width & record_width) {
	md_helper.set_current_metadata_record("autopopup_configure");
	memset(&record_width, 0x00, sizeof(Autopopup_configure_width));

	record_width.bg_image_path = md_helper.get_width("bg_image_path");
	record_width.bg_color = md_helper.get_width("bg_color");
	record_width.bg_line_width = md_helper.get_width("bg_line_width");
	record_width.bg_line_color = md_helper.get_width("bg_line_color");
	record_width.bg_padding = md_helper.get_width("bg_padding");
	record_width.button_image_path = md_helper.get_width("button_image_path");
	record_width.sw_button_style = md_helper.get_width("sw_button_style");
	record_width.button_width = md_helper.get_width("button_width");
	record_width.button_height = md_helper.get_width("button_height");
	record_width.button_spacing = md_helper.get_width("button_spacing");
	record_width.label_type = md_helper.get_width("label_type");
	record_width.decoration_image_path = md_helper.get_width("decoration_image_path");
	record_width.decoration_size = md_helper.get_width("decoration_size");
	record_width.max_column = md_helper.get_width("max_column");
	record_width.add_grab_left = md_helper.get_width("add_grab_left");
	record_width.add_grab_right = md_helper.get_width("add_grab_right");
	record_width.add_grab_top = md_helper.get_width("add_grab_top");
	record_width.add_grab_bottom = md_helper.get_width("add_grab_bottom");
}

template <class T>
void set_modifier_decoration_width(T& md_helper,
	Modifier_decoration_width & record_width) {
	md_helper.set_current_metadata_record("modifier_decoration");
	memset(&record_width, 0x00, sizeof(Modifier_decoration_width));

	record_width.extract_background = md_helper.get_width("extract_background");
	record_width.name = md_helper.get_width("name");
	record_width.bg_image_path = md_helper.get_width("bg_image_path");
}

template <class T>
void set_nine_patch_width(T& md_helper,
	Nine_patch_width & record_width) {
	md_helper.set_current_metadata_record("nine_patch");
	memset(&record_width, 0x00, sizeof(Nine_patch_width));

	record_width.image_path = md_helper.get_width("image_path");
	record_width.left = md_helper.get_width("left");
	record_width.right = md_helper.get_width("right");
	record_width.top = md_helper.get_width("top");
	record_width.bottom = md_helper.get_width("bottom");
}


#endif //End __AUTO_METADATA_H__
