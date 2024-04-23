// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: HMI_OUTPUT_1

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, -159);
    lv_obj_set_y(ui_Label1, -40);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "OUTPUT1");
    lv_obj_set_style_text_font(ui_Label1, &ui_font_arial16_bpp8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUTPUT1_ON = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_OUTPUT1_ON, 75);
    lv_obj_set_height(ui_OUTPUT1_ON, 75);
    lv_obj_set_x(ui_OUTPUT1_ON, -219);
    lv_obj_set_y(ui_OUTPUT1_ON, -94);
    lv_obj_set_align(ui_OUTPUT1_ON, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_OUTPUT1_ON, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_OUTPUT1_ON, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OUTPUT1_ON, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OUTPUT1_ON, lv_color_hex(0xE41515), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUTPUT1_ON, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_OUTPUT1_ON, lv_color_hex(0xF40C0C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_OUTPUT1_ON, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_OUTPUT1_ON, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_OUTPUT1_ON, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out1on = lv_label_create(ui_OUTPUT1_ON);
    lv_obj_set_width(ui_out1on, LV_SIZE_CONTENT);   /// -20
    lv_obj_set_height(ui_out1on, LV_SIZE_CONTENT);    /// -20
    lv_obj_set_align(ui_out1on, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out1on, "ON");
    lv_obj_set_style_text_letter_space(ui_out1on, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_out1on, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_out1on, &ui_font_arial10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUTPUT1_OFF = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_OUTPUT1_OFF, 75);
    lv_obj_set_height(ui_OUTPUT1_OFF, 75);
    lv_obj_set_x(ui_OUTPUT1_OFF, -98);
    lv_obj_set_y(ui_OUTPUT1_OFF, -94);
    lv_obj_set_align(ui_OUTPUT1_OFF, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_OUTPUT1_OFF, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_OUTPUT1_OFF, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OUTPUT1_OFF, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OUTPUT1_OFF, lv_color_hex(0x0F22C6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUTPUT1_OFF, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_OUTPUT1_OFF, lv_color_hex(0x0F22C6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_OUTPUT1_OFF, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_OUTPUT1_OFF, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_OUTPUT1_OFF, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out1off = lv_label_create(ui_OUTPUT1_OFF);
    lv_obj_set_width(ui_out1off, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_out1off, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_out1off, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out1off, "OFF");
    lv_obj_set_style_text_font(ui_out1off, &ui_font_arial10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, -159);
    lv_obj_set_y(ui_Label2, 102);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "OUTPUT2");
    lv_obj_set_style_text_font(ui_Label2, &ui_font_arial16_bpp8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUTPUT2_ON = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_OUTPUT2_ON, 75);
    lv_obj_set_height(ui_OUTPUT2_ON, 75);
    lv_obj_set_x(ui_OUTPUT2_ON, -219);
    lv_obj_set_y(ui_OUTPUT2_ON, 45);
    lv_obj_set_align(ui_OUTPUT2_ON, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_OUTPUT2_ON, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_OUTPUT2_ON, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OUTPUT2_ON, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OUTPUT2_ON, lv_color_hex(0xE41515), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUTPUT2_ON, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_OUTPUT2_ON, lv_color_hex(0xF40C0C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_OUTPUT2_ON, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_OUTPUT2_ON, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_OUTPUT2_ON, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out2on = lv_label_create(ui_OUTPUT2_ON);
    lv_obj_set_width(ui_out2on, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_out2on, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_out2on, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out2on, "ON");
    lv_obj_set_style_text_font(ui_out2on, &ui_font_arial10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUTPUT2_OFF = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_OUTPUT2_OFF, 75);
    lv_obj_set_height(ui_OUTPUT2_OFF, 75);
    lv_obj_set_x(ui_OUTPUT2_OFF, -98);
    lv_obj_set_y(ui_OUTPUT2_OFF, 45);
    lv_obj_set_align(ui_OUTPUT2_OFF, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_OUTPUT2_OFF, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_OUTPUT2_OFF, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OUTPUT2_OFF, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OUTPUT2_OFF, lv_color_hex(0x0F22C6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUTPUT2_OFF, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_OUTPUT2_OFF, lv_color_hex(0x0F22C6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_OUTPUT2_OFF, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_OUTPUT2_OFF, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_OUTPUT2_OFF, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out2off = lv_label_create(ui_OUTPUT2_OFF);
    lv_obj_set_width(ui_out2off, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_out2off, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_out2off, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out2off, "OFF");
    lv_obj_set_style_text_font(ui_out2off, &ui_font_arial10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, 159);
    lv_obj_set_y(ui_Label3, -40);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "OUTPUT3");
    lv_obj_set_style_text_font(ui_Label3, &ui_font_arial16_bpp8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUTPUT3_ON = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_OUTPUT3_ON, 75);
    lv_obj_set_height(ui_OUTPUT3_ON, 75);
    lv_obj_set_x(ui_OUTPUT3_ON, 90);
    lv_obj_set_y(ui_OUTPUT3_ON, -94);
    lv_obj_set_align(ui_OUTPUT3_ON, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_OUTPUT3_ON, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_OUTPUT3_ON, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OUTPUT3_ON, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OUTPUT3_ON, lv_color_hex(0xE41515), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUTPUT3_ON, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_OUTPUT3_ON, lv_color_hex(0xF40C0C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_OUTPUT3_ON, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_OUTPUT3_ON, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_OUTPUT3_ON, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out3on = lv_label_create(ui_OUTPUT3_ON);
    lv_obj_set_width(ui_out3on, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_out3on, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_out3on, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out3on, "ON");
    lv_obj_set_style_text_font(ui_out3on, &ui_font_arial10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUTPUT3_OFF = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_OUTPUT3_OFF, 75);
    lv_obj_set_height(ui_OUTPUT3_OFF, 75);
    lv_obj_set_x(ui_OUTPUT3_OFF, 225);
    lv_obj_set_y(ui_OUTPUT3_OFF, -94);
    lv_obj_set_align(ui_OUTPUT3_OFF, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_OUTPUT3_OFF, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_OUTPUT3_OFF, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OUTPUT3_OFF, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OUTPUT3_OFF, lv_color_hex(0x0F22C6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUTPUT3_OFF, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_OUTPUT3_OFF, lv_color_hex(0x0F22C6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_OUTPUT3_OFF, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_OUTPUT3_OFF, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_OUTPUT3_OFF, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out3off = lv_label_create(ui_OUTPUT3_OFF);
    lv_obj_set_width(ui_out3off, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_out3off, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_out3off, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out3off, "OFF");
    lv_obj_set_style_text_font(ui_out3off, &ui_font_arial10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, 159);
    lv_obj_set_y(ui_Label4, 102);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "OUTPUT4");
    lv_obj_set_style_text_font(ui_Label4, &ui_font_arial16_bpp8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUTPUT4_ON = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_OUTPUT4_ON, 75);
    lv_obj_set_height(ui_OUTPUT4_ON, 75);
    lv_obj_set_x(ui_OUTPUT4_ON, 90);
    lv_obj_set_y(ui_OUTPUT4_ON, 45);
    lv_obj_set_align(ui_OUTPUT4_ON, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_OUTPUT4_ON, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_OUTPUT4_ON, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OUTPUT4_ON, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OUTPUT4_ON, lv_color_hex(0xE41515), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUTPUT4_ON, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_OUTPUT4_ON, lv_color_hex(0xF40C0C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_OUTPUT4_ON, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_OUTPUT4_ON, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_OUTPUT4_ON, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out4on = lv_label_create(ui_OUTPUT4_ON);
    lv_obj_set_width(ui_out4on, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_out4on, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_out4on, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out4on, "ON");
    lv_obj_set_style_text_font(ui_out4on, &ui_font_arial10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUTPUT4_OFF = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_OUTPUT4_OFF, 75);
    lv_obj_set_height(ui_OUTPUT4_OFF, 75);
    lv_obj_set_x(ui_OUTPUT4_OFF, 225);
    lv_obj_set_y(ui_OUTPUT4_OFF, 45);
    lv_obj_set_align(ui_OUTPUT4_OFF, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_OUTPUT4_OFF, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_OUTPUT4_OFF, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OUTPUT4_OFF, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OUTPUT4_OFF, lv_color_hex(0x0F22C6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUTPUT4_OFF, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_OUTPUT4_OFF, lv_color_hex(0x0F22C6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_OUTPUT4_OFF, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_OUTPUT4_OFF, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_OUTPUT4_OFF, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out4off = lv_label_create(ui_OUTPUT4_OFF);
    lv_obj_set_width(ui_out4off, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_out4off, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_out4off, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out4off, "OFF");
    lv_obj_set_style_text_font(ui_out4off, &ui_font_arial10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_OUTPUT1_ON, ui_event_OUTPUT1_ON, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OUTPUT1_OFF, ui_event_OUTPUT1_OFF, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OUTPUT2_ON, ui_event_OUTPUT2_ON, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OUTPUT2_OFF, ui_event_OUTPUT2_OFF, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OUTPUT3_ON, ui_event_OUTPUT3_ON, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OUTPUT3_OFF, ui_event_OUTPUT3_OFF, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OUTPUT4_ON, ui_event_OUTPUT4_ON, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OUTPUT4_OFF, ui_event_OUTPUT4_OFF, LV_EVENT_ALL, NULL);

}
