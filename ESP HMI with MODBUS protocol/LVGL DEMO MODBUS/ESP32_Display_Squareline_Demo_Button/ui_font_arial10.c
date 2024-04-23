/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --font G:/Shared drives/Product Support Resources/NORVI ESP HMI/SQUARE_OUTPUT/assets/ARIBL0.ttf -o G:/Shared drives/Product Support Resources/NORVI ESP HMI/SQUARE_OUTPUT/assets\ui_font_arial10.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_ARIAL10
#define UI_FONT_ARIAL10 1
#endif

#if UI_FONT_ARIAL10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xc,

    /* U+0022 "\"" */
    0xde, 0xc0,

    /* U+0023 "#" */
    0x2c, 0xaf, 0xd2, 0xfd, 0x4d, 0x0,

    /* U+0024 "$" */
    0x7c, 0xf9, 0xc3, 0xe1, 0xde, 0x9f, 0x8,

    /* U+0025 "%" */
    0x62, 0x7a, 0x3d, 0xd, 0x0, 0xb0, 0xbc, 0x5e,
    0x46,

    /* U+0026 "&" */
    0x38, 0x6c, 0x7c, 0x78, 0xde, 0xce, 0x7e,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x6f, 0x6d, 0xb3, 0x60,

    /* U+0029 ")" */
    0xd9, 0xb6, 0xde, 0x80,

    /* U+002A "*" */
    0x4f, 0x60,

    /* U+002B "+" */
    0x31, 0xbe, 0x63, 0x0,

    /* U+002C "," */
    0xf6,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x29, 0x25, 0x20,

    /* U+0030 "0" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x37, 0x80,

    /* U+0031 "1" */
    0x37, 0xf3, 0x33, 0x30,

    /* U+0032 "2" */
    0x7b, 0x30, 0xc7, 0x79, 0x8f, 0xc0,

    /* U+0033 "3" */
    0x79, 0xb0, 0xc6, 0xf, 0xb7, 0x80,

    /* U+0034 "4" */
    0xc, 0x38, 0xf3, 0x66, 0xdf, 0xc3, 0x0,

    /* U+0035 "5" */
    0x7d, 0xf, 0x93, 0xf, 0x37, 0x80,

    /* U+0036 "6" */
    0x7b, 0x2f, 0xb3, 0xcf, 0x37, 0x80,

    /* U+0037 "7" */
    0xfc, 0x61, 0x8c, 0x31, 0x86, 0x0,

    /* U+0038 "8" */
    0x76, 0xf6, 0xed, 0xed, 0xc0,

    /* U+0039 "9" */
    0x7b, 0x3c, 0xf3, 0x7d, 0x37, 0x80,

    /* U+003A ":" */
    0xf3, 0xc0,

    /* U+003B ";" */
    0xf3, 0xd8,

    /* U+003C "<" */
    0xd, 0xee, 0x3e, 0x1c,

    /* U+003D "=" */
    0xf8, 0x1, 0xf0,

    /* U+003E ">" */
    0xc3, 0xc1, 0xde, 0xe0,

    /* U+003F "?" */
    0x79, 0xb1, 0xce, 0x30, 0x3, 0x0,

    /* U+0040 "@" */
    0x3c, 0x42, 0xb5, 0xcd, 0xc9, 0xca, 0x5c, 0x3e,

    /* U+0041 "A" */
    0x38, 0x3c, 0x3c, 0x7c, 0x66, 0x7e, 0xc7,

    /* U+0042 "B" */
    0xfd, 0x9b, 0x37, 0xec, 0xd9, 0xbf, 0x0,

    /* U+0043 "C" */
    0x7d, 0x9f, 0x6, 0xc, 0x19, 0xcf, 0x0,

    /* U+0044 "D" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3f, 0x80,

    /* U+0045 "E" */
    0xff, 0xc, 0x3f, 0xc3, 0xf, 0xc0,

    /* U+0046 "F" */
    0xfe, 0x31, 0xfc, 0x63, 0x0,

    /* U+0047 "G" */
    0x3e, 0x66, 0xc0, 0xcf, 0xc7, 0x67, 0x3e,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1f, 0xfc, 0x78, 0xf1, 0x80,

    /* U+0049 "I" */
    0xff, 0xfc,

    /* U+004A "J" */
    0xc, 0x30, 0xc3, 0xd, 0xb7, 0x80,

    /* U+004B "K" */
    0xcf, 0xbb, 0xe7, 0xcf, 0xd9, 0xb3, 0x80,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xf, 0xc0,

    /* U+004D "M" */
    0xe7, 0xe7, 0xff, 0xff, 0xdb, 0xdb, 0xdb,

    /* U+004E "N" */
    0xc7, 0xcf, 0xdf, 0xfd, 0xf9, 0xf1, 0x80,

    /* U+004F "O" */
    0x7d, 0xdf, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+0050 "P" */
    0xfb, 0x3c, 0xfe, 0xc3, 0xc, 0x0,

    /* U+0051 "Q" */
    0x7d, 0xdf, 0x1e, 0x3d, 0x7b, 0xdf, 0x81,

    /* U+0052 "R" */
    0xfd, 0x9b, 0x37, 0xed, 0xd9, 0xb3, 0x80,

    /* U+0053 "S" */
    0x7b, 0x3f, 0x1f, 0x1f, 0x37, 0x80,

    /* U+0054 "T" */
    0xfe, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x0,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+0056 "V" */
    0xe7, 0x66, 0x66, 0x6c, 0x3c, 0x3c, 0x18,

    /* U+0057 "W" */
    0xcc, 0xf3, 0x37, 0xf9, 0xfe, 0x73, 0x9c, 0xe7,
    0x38,

    /* U+0058 "X" */
    0x66, 0x7e, 0x3c, 0x38, 0x3c, 0x6e, 0xe6,

    /* U+0059 "Y" */
    0x66, 0x7e, 0x3c, 0x18, 0x18, 0x18, 0x18,

    /* U+005A "Z" */
    0x7e, 0x1c, 0x71, 0xc7, 0x1e, 0x3f, 0x80,

    /* U+005B "[" */
    0xfb, 0x6d, 0xb6, 0xe0,

    /* U+005C "\\" */
    0x91, 0x24, 0x88,

    /* U+005D "]" */
    0xed, 0xb6, 0xdb, 0xe0,

    /* U+005E "^" */
    0x63, 0xb5, 0xb0,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0x40,

    /* U+0061 "a" */
    0x79, 0x27, 0xf7, 0xfc,

    /* U+0062 "b" */
    0xc3, 0xf, 0xb3, 0xcf, 0x3f, 0x80,

    /* U+0063 "c" */
    0x7b, 0x3c, 0x33, 0x78,

    /* U+0064 "d" */
    0xc, 0x37, 0xf3, 0xcf, 0x37, 0xc0,

    /* U+0065 "e" */
    0x7b, 0x3f, 0xf0, 0x78,

    /* U+0066 "f" */
    0x76, 0xf6, 0x66, 0x60,

    /* U+0067 "g" */
    0x7f, 0x3c, 0xf3, 0x7f, 0x37, 0x80,

    /* U+0068 "h" */
    0xc6, 0x3f, 0xfd, 0xef, 0x60,

    /* U+0069 "i" */
    0xcf, 0xfc,

    /* U+006A "j" */
    0x61, 0xb6, 0xdb, 0xe0,

    /* U+006B "k" */
    0xc3, 0xd, 0xbc, 0xfb, 0x6c, 0xc0,

    /* U+006C "l" */
    0xff, 0xfc,

    /* U+006D "m" */
    0xff, 0xdb, 0xdb, 0xdb, 0xdb,

    /* U+006E "n" */
    0xfe, 0xf7, 0xbd, 0x80,

    /* U+006F "o" */
    0x7b, 0x3c, 0xf3, 0x78,

    /* U+0070 "p" */
    0xfb, 0x3c, 0xf3, 0xfb, 0xc, 0x0,

    /* U+0071 "q" */
    0x7f, 0x3c, 0xf3, 0x7c, 0x30, 0xc0,

    /* U+0072 "r" */
    0xfc, 0xcc, 0xc0,

    /* U+0073 "s" */
    0x7b, 0x7, 0x92, 0xf8,

    /* U+0074 "t" */
    0x26, 0xf6, 0x66, 0x70,

    /* U+0075 "u" */
    0xde, 0xf7, 0xbf, 0x80,

    /* U+0076 "v" */
    0xcd, 0xa7, 0x8e, 0x30,

    /* U+0077 "w" */
    0xcd, 0xae, 0xdf, 0x6e, 0xe3, 0x30,

    /* U+0078 "x" */
    0x6c, 0xf0, 0xe3, 0xee, 0xc0,

    /* U+0079 "y" */
    0xcd, 0xb7, 0x9e, 0x30, 0xce, 0x0,

    /* U+007A "z" */
    0xf9, 0x9d, 0xcf, 0x80,

    /* U+007B "{" */
    0x76, 0x66, 0xc6, 0x66, 0x70,

    /* U+007C "|" */
    0xff, 0x80,

    /* U+007D "}" */
    0xe6, 0x66, 0x36, 0x66, 0xe0,

    /* U+007E "~" */
    0xe6, 0x60
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 53, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 53, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 80, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5, .adv_w = 106, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 18, .adv_w = 160, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 27, .adv_w = 142, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 44, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 35, .adv_w = 62, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 39, .adv_w = 62, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 43, .adv_w = 89, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 45, .adv_w = 106, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 49, .adv_w = 53, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 50, .adv_w = 53, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 51, .adv_w = 53, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 107, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 107, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 107, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 53, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 53, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 117, .adv_w = 106, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 121, .adv_w = 106, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 124, .adv_w = 106, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 128, .adv_w = 98, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 118, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 142, .adv_w = 124, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 124, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 107, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 133, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 133, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 62, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 133, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 151, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 133, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 133, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 133, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 249, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 116, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 133, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 124, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 283, .adv_w = 160, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 124, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 124, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 116, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 62, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 317, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 62, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 324, .adv_w = 106, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 327, .adv_w = 80, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 328, .adv_w = 53, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 329, .adv_w = 107, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 107, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 107, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 62, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 363, .adv_w = 107, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 53, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 53, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 374, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 53, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 160, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 107, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 107, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 401, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 407, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 98, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 107, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 422, .adv_w = 98, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 151, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 107, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 437, .adv_w = 98, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 443, .adv_w = 89, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 447, .adv_w = 62, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 452, .adv_w = 44, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 454, .adv_w = 62, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 459, .adv_w = 106, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 81,
    34, 86,
    34, 87,
    35, 13,
    35, 15,
    35, 34,
    35, 54,
    36, 13,
    36, 15,
    37, 13,
    37, 15,
    37, 34,
    37, 55,
    37, 56,
    37, 58,
    39, 13,
    39, 15,
    39, 34,
    39, 66,
    39, 70,
    39, 77,
    39, 80,
    39, 83,
    40, 13,
    40, 15,
    43, 13,
    43, 15,
    43, 34,
    43, 66,
    43, 70,
    43, 80,
    43, 86,
    43, 90,
    44, 36,
    44, 40,
    44, 48,
    44, 70,
    44, 80,
    44, 86,
    44, 87,
    44, 90,
    45, 36,
    45, 40,
    45, 48,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 88,
    45, 90,
    47, 34,
    48, 13,
    48, 15,
    48, 34,
    48, 53,
    48, 55,
    48, 56,
    48, 57,
    48, 58,
    49, 13,
    49, 15,
    49, 34,
    49, 66,
    49, 70,
    49, 80,
    50, 13,
    50, 15,
    50, 34,
    50, 53,
    50, 55,
    50, 58,
    51, 36,
    51, 40,
    51, 48,
    51, 50,
    51, 53,
    51, 54,
    51, 55,
    51, 58,
    51, 70,
    51, 80,
    51, 86,
    51, 88,
    53, 13,
    53, 14,
    53, 15,
    53, 27,
    53, 28,
    53, 34,
    53, 36,
    53, 40,
    53, 48,
    53, 50,
    53, 66,
    53, 68,
    53, 70,
    53, 73,
    53, 77,
    53, 78,
    53, 80,
    53, 83,
    53, 84,
    53, 86,
    53, 88,
    53, 90,
    53, 91,
    54, 13,
    54, 15,
    54, 34,
    55, 13,
    55, 14,
    55, 15,
    55, 27,
    55, 28,
    55, 34,
    55, 36,
    55, 40,
    55, 48,
    55, 50,
    55, 66,
    55, 70,
    55, 74,
    55, 80,
    55, 83,
    55, 86,
    56, 13,
    56, 14,
    56, 15,
    56, 36,
    56, 40,
    56, 48,
    56, 66,
    56, 69,
    56, 70,
    56, 73,
    56, 74,
    56, 80,
    56, 86,
    57, 36,
    57, 40,
    57, 48,
    58, 13,
    58, 14,
    58, 15,
    58, 27,
    58, 28,
    58, 34,
    58, 36,
    58, 40,
    58, 48,
    58, 52,
    58, 66,
    58, 69,
    58, 70,
    58, 80,
    58, 81,
    58, 82,
    58, 86,
    58, 87,
    66, 67,
    66, 72,
    66, 81,
    66, 85,
    66, 87,
    67, 67,
    67, 87,
    68, 73,
    68, 76,
    68, 77,
    68, 90,
    69, 69,
    69, 88,
    70, 67,
    70, 72,
    70, 87,
    70, 89,
    71, 1,
    71, 2,
    71, 13,
    71, 15,
    71, 32,
    71, 66,
    71, 70,
    71, 71,
    71, 76,
    71, 80,
    72, 72,
    72, 77,
    72, 83,
    72, 90,
    76, 70,
    76, 80,
    76, 90,
    77, 90,
    79, 87,
    80, 13,
    80, 15,
    80, 87,
    80, 88,
    80, 89,
    80, 90,
    80, 91,
    81, 13,
    81, 15,
    81, 88,
    81, 90,
    83, 13,
    83, 15,
    83, 27,
    83, 28,
    83, 66,
    83, 68,
    83, 69,
    83, 70,
    83, 72,
    83, 75,
    83, 76,
    83, 77,
    83, 78,
    83, 79,
    83, 80,
    83, 81,
    83, 82,
    83, 83,
    83, 84,
    83, 85,
    83, 86,
    83, 87,
    83, 90,
    84, 88,
    87, 13,
    87, 15,
    87, 68,
    87, 69,
    87, 70,
    87, 80,
    87, 82,
    88, 13,
    88, 15,
    88, 66,
    88, 68,
    88, 69,
    88, 70,
    88, 73,
    88, 80,
    88, 82,
    89, 68,
    89, 69,
    89, 70,
    89, 80,
    90, 13,
    90, 15,
    90, 66,
    90, 68,
    90, 69,
    90, 70,
    90, 80,
    91, 68,
    91, 69,
    91, 70,
    91, 80
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -3, -3, -3, -3, -11, -5, -9, 1,
    -14, 3, -2, -3, 4, 3, -3, -4,
    4, 3, -2, -3, -7, -5, 3, -5,
    -23, -24, -15, -4, -5, 1, -5, -5,
    3, 2, -3, -4, -4, -3, -4, -4,
    -4, -3, -5, -5, -5, -5, -5, -4,
    -3, -3, -3, -3, -3, -8, -4, -8,
    -3, -12, -3, -2, -2, -3, -4, -5,
    -4, -7, -3, -8, -11, -29, -30, -14,
    -3, -4, -4, 5, 3, 3, -3, -7,
    -8, -3, -3, -3, -3, -1, -3, -3,
    -7, -4, -4, -3, 3, -23, -11, -24,
    -5, -5, -11, -5, -5, -5, -5, -8,
    -10, -10, 4, 3, -7, -11, -7, -11,
    -7, -2, -3, -5, -4, -5, -5, -19,
    -7, -20, -4, -4, -9, -5, -5, -5,
    -5, -7, -8, 3, -8, -5, -5, -7,
    -2, -8, -3, -3, -3, -3, -4, -4,
    5, 5, -4, -3, -5, -5, -5, -26,
    -14, -27, -10, -10, -15, -10, -10, -10,
    -7, -14, -15, -15, -14, -8, -14, -10,
    -4, 2, 3, 2, -3, -3, 2, -4,
    -3, -3, -4, -3, 2, 2, -2, 4,
    -4, -4, 9, 13, -8, -10, 13, -2,
    -3, 4, 2, -3, 2, 2, 3, 3,
    -5, -5, 3, 3, -4, -2, -3, -5,
    -3, -6, -3, 3, -2, -3, -4, -3,
    -11, -12, 7, 7, 3, 3, 4, 3,
    4, 7, 5, 5, 8, 8, 3, 7,
    4, 7, 4, 8, 5, 9, 9, -4,
    -14, -15, -4, -3, -4, -4, -4, -12,
    -14, -2, -2, -2, -2, 3, -3, -3,
    -3, -3, -3, -3, -14, -15, -3, -3,
    -3, -3, -3, -2, -2, -2, -2
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 271,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_arial10 = {
#else
lv_font_t ui_font_arial10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 9,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_ARIAL10*/

