SET(SOURCES screens/ui_Screen1.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    fonts/ui_font_ARIAL20.c
    fonts/ui_font_arial16.c
    fonts/ui_font_arial16_bpp8.c
    fonts/ui_font_arial10.c)

add_library(ui ${SOURCES})
