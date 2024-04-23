// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: HMI_OUTPUT_1

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Label1;
void ui_event_OUTPUT1_ON(lv_event_t * e);
lv_obj_t * ui_OUTPUT1_ON;
lv_obj_t * ui_out1on;
void ui_event_OUTPUT1_OFF(lv_event_t * e);
lv_obj_t * ui_OUTPUT1_OFF;
lv_obj_t * ui_out1off;
lv_obj_t * ui_Label2;
void ui_event_OUTPUT2_ON(lv_event_t * e);
lv_obj_t * ui_OUTPUT2_ON;
lv_obj_t * ui_out2on;
void ui_event_OUTPUT2_OFF(lv_event_t * e);
lv_obj_t * ui_OUTPUT2_OFF;
lv_obj_t * ui_out2off;
lv_obj_t * ui_Label3;
void ui_event_OUTPUT3_ON(lv_event_t * e);
lv_obj_t * ui_OUTPUT3_ON;
lv_obj_t * ui_out3on;
void ui_event_OUTPUT3_OFF(lv_event_t * e);
lv_obj_t * ui_OUTPUT3_OFF;
lv_obj_t * ui_out3off;
lv_obj_t * ui_Label4;
void ui_event_OUTPUT4_ON(lv_event_t * e);
lv_obj_t * ui_OUTPUT4_ON;
lv_obj_t * ui_out4on;
void ui_event_OUTPUT4_OFF(lv_event_t * e);
lv_obj_t * ui_OUTPUT4_OFF;
lv_obj_t * ui_out4off;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_OUTPUT1_ON(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        button1_on(e);
    }
}
void ui_event_OUTPUT1_OFF(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        button1_off(e);
    }
}
void ui_event_OUTPUT2_ON(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        button2_on(e);
    }
}
void ui_event_OUTPUT2_OFF(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        button2_off(e);
    }
}
void ui_event_OUTPUT3_ON(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        button3_on(e);
    }
}
void ui_event_OUTPUT3_OFF(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        button3_off(e);
    }
}
void ui_event_OUTPUT4_ON(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        button4_on(e);
    }
}
void ui_event_OUTPUT4_OFF(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        button4_off(e);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen1);
}
