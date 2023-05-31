//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// StyleAsCode exporter v1.2 - Style data exported as a values array            //
//                                                                              //
// USAGE: On init call: GuiLoadStyle3DViewExplorerStyle();                             //
//                                                                              //
// more info and bugs-report:  github.com/raysan5/raygui                        //
// feedback and support:       ray[at]raylibtech.com                            //
//                                                                              //
// Copyright (c) 2020-2022 raylib technologies (@raylibtech)                    //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

#define STYLE_STYLE_PROPS_COUNT  17

// Custom style name: 3DViewExplorerStyle
static const GuiStyleProp ViewExplorerStyleStyleProps[STYLE_STYLE_PROPS_COUNT] = {
    { 0, 0, 0x878787ff },    // DEFAULT_BORDER_COLOR_NORMAL 
    { 0, 1, 0x2c2c2cff },    // DEFAULT_BASE_COLOR_NORMAL 
    { 0, 2, 0xf8f8f8ff },    // DEFAULT_TEXT_COLOR_NORMAL 
    { 0, 3, 0xe1e1e1ff },    // DEFAULT_BORDER_COLOR_FOCUSED 
    { 0, 4, 0x848484ff },    // DEFAULT_BASE_COLOR_FOCUSED 
    { 0, 5, 0x181818ff },    // DEFAULT_TEXT_COLOR_FOCUSED 
    { 0, 6, 0x000000ff },    // DEFAULT_BORDER_COLOR_PRESSED 
    { 0, 7, 0xefefefff },    // DEFAULT_BASE_COLOR_PRESSED 
    { 0, 8, 0x202020ff },    // DEFAULT_TEXT_COLOR_PRESSED 
    { 0, 9, 0x6a6a6aff },    // DEFAULT_BORDER_COLOR_DISABLED 
    { 0, 10, 0x818181ff },    // DEFAULT_BASE_COLOR_DISABLED 
    { 0, 11, 0x606060ff },    // DEFAULT_TEXT_COLOR_DISABLED 
    { 0, 16, 0x00000010 },    // DEFAULT_TEXT_SIZE 
    { 0, 17, 0x00000000 },    // DEFAULT_TEXT_SPACING 
    { 0, 18, 0xffffffff },    // DEFAULT_LINE_COLOR 
    { 0, 19, 0x0d0909ff },    // DEFAULT_BACKGROUND_COLOR 
    { 1, 8, 0x898989ff },    // LABEL_TEXT_COLOR_PRESSED 
};

// WARNING: This style uses a custom font:  (size: 16, spacing: 0)

#define STYLE_COMPRESSED_DATA_SIZE 1346

// Font image pixels data compressed (DEFLATE)
// NOTE: Original pixel data simplified to GRAYSCALE
static unsigned char ViewExplorerStyleFontData[STYLE_COMPRESSED_DATA_SIZE] = { 0xed,
    0xdd, 0xbd, 0x6e, 0x1c, 0x55, 0x18, 0x80, 0xe1, 0x6f, 0x71, 0x83, 0x44, 0x0a, 0x4b, 0x34, 0x88, 0xc6, 0x57, 0x10, 0x09,
    0x45, 0xc8, 0x12, 0x05, 0x10, 0x61, 0x4a, 0x84, 0xa2, 0xa9, 0x90, 0x42, 0xc1, 0x05, 0x50, 0x70, 0x09, 0x6e, 0xe9, 0x82,
    0x44, 0x43, 0x81, 0x44, 0x91, 0x4b, 0xa0, 0xca, 0x55, 0x04, 0xaa, 0x74, 0xd0, 0x01, 0x57, 0x40, 0xc7, 0x87, 0xd6, 0x3f,
    0xf9, 0x51, 0xe2, 0x99, 0x3d, 0x67, 0xce, 0xfc, 0xec, 0xfa, 0x79, 0xde, 0x02, 0xc7, 0xbb, 0x6b, 0xaf, 0xe7, 0xec, 0xcc,
    0x8e, 0x99, 0x33, 0xe3, 0xc7, 0x7f, 0x3d, 0x8c, 0xc7, 0xff, 0x3e, 0x8c, 0xad, 0x2f, 0x22, 0x62, 0x73, 0xf1, 0x51, 0xc4,
    0x2f, 0x27, 0x5d, 0xc4, 0xfb, 0xdd, 0xe5, 0x3f, 0xce, 0xdf, 0xfb, 0x7c, 0xfb, 0x9f, 0xe3, 0x88, 0x38, 0xfa, 0x67, 0x13,
    0x47, 0x57, 0xf7, 0x89, 0x78, 0xfa, 0xd9, 0xf6, 0xfe, 0x77, 0xb6, 0x1f, 0xde, 0x3f, 0xd9, 0xde, 0xe7, 0xfe, 0x37, 0xa7,
    0x5d, 0xbc, 0x15, 0x11, 0x5f, 0x9f, 0x76, 0xf1, 0xe0, 0x5e, 0xf7, 0xfc, 0x9e, 0x5f, 0x9d, 0x76, 0xf1, 0xeb, 0xef, 0x9b,
    0xf8, 0xed, 0xe9, 0x83, 0x8f, 0xe3, 0xea, 0x31, 0x4f, 0x36, 0x11, 0x3f, 0x3c, 0x3a, 0xbe, 0xf8, 0xf7, 0xa3, 0x93, 0x17,
    0xf7, 0xbd, 0x76, 0xf9, 0x5c, 0xce, 0x3f, 0x7d, 0xf9, 0x73, 0xc7, 0x2f, 0x7d, 0x7c, 0xe7, 0xfa, 0x3e, 0x57, 0xdf, 0xe7,
    0xcb, 0x6f, 0xff, 0x38, 0xbb, 0xbe, 0xed, 0xed, 0x7b, 0x5d, 0x7c, 0xf8, 0x41, 0xf7, 0xfc, 0xe7, 0xb9, 0xf6, 0xe3, 0xe9,
    0xeb, 0x9f, 0x7b, 0x93, 0xcc, 0xcc, 0xed, 0x7f, 0xff, 0xbc, 0xdb, 0xc5, 0xb3, 0xbb, 0xdd, 0xc5, 0xf3, 0x7e, 0xf6, 0xfd,
    0xcf, 0x9f, 0x5c, 0xde, 0xfa, 0xdd, 0x59, 0xc4, 0xbb, 0x67, 0x71, 0xfe, 0xe4, 0x6c, 0xf3, 0xea, 0x63, 0x62, 0xb0, 0xac,
    0xb8, 0x65, 0xbe, 0xb2, 0xf7, 0xb3, 0xb9, 0xe3, 0x63, 0x72, 0xd5, 0x4b, 0x21, 0x7b, 0xbf, 0x4f, 0x0e, 0x3e, 0xbb, 0x2c,
    0x5c, 0x3e, 0x65, 0xcb, 0xf8, 0xb0, 0xc7, 0x3f, 0x27, 0x1b, 0xff, 0x9c, 0x65, 0xfc, 0x6f, 0x5e, 0x06, 0x97, 0x6a, 0x9f,
    0xeb, 0x3a, 0x46, 0xbf, 0x6f, 0xa9, 0x64, 0xef, 0x12, 0x7b, 0xf3, 0xd2, 0xc8, 0xc2, 0xaf, 0xb4, 0xf4, 0x92, 0xc8, 0x1d,
    0xc6, 0x5f, 0x87, 0x5c, 0xc9, 0x5a, 0xac, 0xc3, 0x7c, 0x05, 0x58, 0x06, 0xc6, 0x5f, 0xba, 0x75, 0x7d, 0xf4, 0x77, 0x1e,
    0x59, 0x0a, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x16, 0x3e, 0x42, 0x57, 0x76, 0x6c, 0xb9, 0xee, 0x78, 0xf4, 0xcd,
    0x8f, 0xa8, 0x9f, 0xd3, 0x71, 0xd3, 0xf3, 0x28, 0x3f, 0xee, 0x9e, 0xbd, 0x73, 0x0e, 0x86, 0x96, 0x44, 0x9b, 0xc7, 0x64,
    0xcf, 0xcf, 0x53, 0x33, 0x4a, 0xbb, 0x1c, 0x81, 0x69, 0x3b, 0xb7, 0x24, 0x2b, 0x6e, 0x99, 0xe6, 0x48, 0x52, 0xd9, 0x12,
    0xc9, 0xe6, 0x3f, 0xd5, 0x98, 0x5b, 0xda, 0x8c, 0x52, 0xab, 0xf1, 0x8f, 0x55, 0x8c, 0x7f, 0xf9, 0x3c, 0xa1, 0xf2, 0xd7,
    0x6d, 0x16, 0xcf, 0x47, 0xcb, 0xa6, 0x73, 0xb6, 0xb2, 0xe9, 0x28, 0xed, 0x3a, 0xfe, 0x25, 0xdb, 0xe5, 0xf1, 0x6b, 0xd8,
    0x92, 0xeb, 0x7f, 0xff, 0xf3, 0xce, 0x8a, 0xf9, 0x88, 0xfb, 0x3f, 0xfe, 0xe5, 0xef, 0xad, 0x63, 0xdf, 0x61, 0xe7, 0x98,
    0x4b, 0x90, 0x15, 0x33, 0x32, 0xeb, 0xc6, 0xbf, 0x7c, 0xed, 0x19, 0xfa, 0x6a, 0xa5, 0x4b, 0xf5, 0xc5, 0x96, 0xab, 0x64,
    0x8f, 0x66, 0xcc, 0xb6, 0x3c, 0x06, 0x5f, 0x15, 0xeb, 0x9d, 0x95, 0x5d, 0x37, 0xfe, 0x43, 0xfb, 0x99, 0xcb, 0xaf, 0xff,
    0x39, 0xc1, 0xfa, 0x3f, 0xcf, 0x7c, 0xe4, 0x9c, 0xf5, 0x55, 0x32, 0xb4, 0x16, 0xb5, 0x7a, 0x57, 0xdb, 0x97, 0xf1, 0x9f,
    0xfb, 0x67, 0xcb, 0x55, 0xce, 0x1a, 0x9b, 0x6e, 0x19, 0xad, 0x7d, 0xff, 0xbf, 0xd5, 0x6f, 0xec, 0x63, 0xde, 0xc3, 0xe6,
    0x1c, 0xfd, 0xac, 0xfa, 0xff, 0x20, 0x35, 0xfb, 0x48, 0x6d, 0x7f, 0xff, 0x2f, 0xdf, 0x83, 0x4f, 0x33, 0x30, 0x25, 0x49,
    0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0xe9, 0x56, 0xcd, 0xff, 0x9f, 0x67, 0x46, 0x50, 0xcd, 0x1c, 0xb3, 0x39,
    0xe6, 0xdc, 0xc7, 0x88, 0xa3, 0xf1, 0xb9, 0xf0, 0x0c, 0xf3, 0xfe, 0xb3, 0x05, 0xf6, 0x7b, 0xfc, 0x97, 0xbf, 0x25, 0x2a,
    0xae, 0xdf, 0x39, 0xe7, 0xf8, 0x47, 0xc5, 0x68, 0xb4, 0x99, 0x25, 0x5f, 0xf6, 0x55, 0xf2, 0xb5, 0x8f, 0xd6, 0x38, 0xfe,
    0x31, 0xcb, 0xf8, 0xe7, 0xde, 0x8f, 0x7f, 0xcd, 0xb9, 0x16, 0xfd, 0x33, 0x6b, 0x8d, 0xff, 0xf0, 0xb2, 0xcd, 0xaa, 0xb3,
    0x30, 0xda, 0x8f, 0x7f, 0x56, 0x7e, 0x95, 0x1c, 0x78, 0x45, 0xb5, 0x9d, 0x73, 0xdf, 0x66, 0x9e, 0xde, 0xbc, 0xe3, 0xdf,
    0xf2, 0xec, 0x8f, 0xb5, 0xad, 0xff, 0xbb, 0x9d, 0x77, 0x35, 0xf5, 0xec, 0xe3, 0x31, 0x6b, 0xfa, 0x92, 0xeb, 0x7f, 0xbb,
    0xcf, 0x2f, 0xf3, 0xfe, 0x3f, 0xd5, 0xfe, 0x5f, 0x14, 0x6f, 0x4d, 0x72, 0xb5, 0xe3, 0x3f, 0x66, 0x2f, 0xb4, 0xf5, 0xf8,
    0xe7, 0x9e, 0xec, 0xff, 0x47, 0xc5, 0xeb, 0x73, 0xea, 0xfd, 0xff, 0x9b, 0xd7, 0xe3, 0xfd, 0x19, 0xff, 0x18, 0xf1, 0xfe,
    0x9a, 0xb3, 0xfc, 0xfe, 0x1f, 0x03, 0xbf, 0x6d, 0xb4, 0xf9, 0x3e, 0xd1, 0xec, 0xfa, 0xfd, 0xaf, 0x3e, 0xb7, 0xf2, 0x73,
    0xf5, 0x4b, 0xaf, 0x58, 0xe0, 0xaa, 0xeb, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x64, 0xfe, 0xff,
    0xd0, 0x11, 0xe4, 0xf2, 0x63, 0xd1, 0xd1, 0xf0, 0xd8, 0x7e, 0x36, 0x9a, 0xc9, 0x10, 0x3d, 0x47, 0xe2, 0x4b, 0xaf, 0xc0,
    0xd7, 0x66, 0x66, 0x6e, 0xdf, 0xb3, 0x6f, 0x77, 0x4e, 0x43, 0x8c, 0x7e, 0x46, 0xe5, 0xd7, 0x13, 0x5c, 0xfe, 0xca, 0xb2,
    0xd9, 0x70, 0x66, 0xd7, 0x7c, 0x67, 0xdb, 0x4c, 0x39, 0x67, 0xbc, 0xf5, 0xf9, 0x1f, 0xad, 0x96, 0x46, 0x8e, 0xd8, 0x32,
    0x4c, 0x3d, 0xfe, 0xf5, 0x57, 0xfa, 0xae, 0x7d, 0x7d, 0xcd, 0x31, 0xfe, 0x6d, 0x66, 0x91, 0x96, 0x8f, 0xfc, 0x3c, 0xd7,
    0xd3, 0x1e, 0xfa, 0x7b, 0x2a, 0xf3, 0xcd, 0x7d, 0xac, 0x99, 0x41, 0x7b, 0xa8, 0xe3, 0xbf, 0xfc, 0xf5, 0xb4, 0xa7, 0x3a,
    0xb3, 0xab, 0xed, 0x0c, 0x7a, 0xe3, 0x3f, 0xdd, 0xb9, 0x7d, 0x39, 0xe3, 0x96, 0xa9, 0xf6, 0x0c, 0x9a, 0xe9, 0xce, 0x19,
    0x6c, 0x7d, 0x16, 0xc9, 0xf4, 0xdb, 0xff, 0xba, 0xbf, 0x73, 0x55, 0xf3, 0xd7, 0x81, 0xd6, 0xb6, 0xfe, 0xb7, 0x9c, 0x3b,
    0xbd, 0x96, 0xf1, 0xaf, 0xdf, 0xcb, 0x8f, 0x46, 0x7b, 0xa5, 0xcb, 0x6d, 0xff, 0xe7, 0xfe, 0x8b, 0x17, 0xf5, 0xfb, 0xe1,
    0x4b, 0x3c, 0x93, 0x9a, 0xef, 0x5c, 0xf3, 0xa8, 0xd2, 0x99, 0xfd, 0x2d, 0xc7, 0x7f, 0x7d, 0xaf, 0x00, 0x2d, 0xbd, 0x15,
    0xd3, 0x61, 0xbd, 0x02, 0x9c, 0x81, 0x23, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0xa4, 0x58, 0xd9, 0x11, 0xf7,
    0xfe, 0x59, 0x3a, 0xd9, 0x64, 0xc6, 0xcd, 0xda, 0xaf, 0xa5, 0x1f, 0x03, 0xd7, 0xa7, 0xdd, 0x6d, 0x6e, 0x57, 0xae, 0xf6,
    0x78, 0x70, 0xed, 0xf2, 0x6f, 0x35, 0x7f, 0x7a, 0xed, 0xd7, 0xd2, 0x1f, 0x7f, 0x4d, 0xce, 0x1c, 0x78, 0x75, 0xec, 0xe3,
    0xf8, 0xd7, 0xcc, 0x19, 0x5d, 0xfe, 0x5a, 0xca, 0x59, 0x35, 0xe3, 0x35, 0x57, 0x3e, 0x67, 0x6e, 0x4d, 0x73, 0xb1, 0xe7,
    0xdc, 0xfe, 0x67, 0xf5, 0xe8, 0x64, 0x83, 0x79, 0xd0, 0xc6, 0x3f, 0x8a, 0xcf, 0xc5, 0x5b, 0xf3, 0xfa, 0xbf, 0xc4, 0xb5,
    0xd7, 0x0f, 0x6f, 0xfc, 0x5b, 0x9e, 0x71, 0x35, 0xc5, 0xb5, 0xb4, 0xcb, 0xcf, 0xee, 0x3c, 0xfc, 0xf5, 0xbf, 0x76, 0xff,
    0xbf, 0xcd, 0xf6, 0x7f, 0xee, 0x6b, 0x69, 0x97, 0xef, 0xff, 0xdf, 0x8e, 0xed, 0xff, 0x98, 0x7b, 0x94, 0xbc, 0xd6, 0xf6,
    0x6f, 0x5e, 0xae, 0xf1, 0xbf, 0xed, 0xf3, 0x72, 0xc7, 0xfe, 0xfe, 0x2f, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92,
    0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49,
    0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24,
    0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92,
    0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49,
    0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24,
    0x49, 0x0d, 0xdb, 0xfa, 0xe9, 0x9d, 0xff, 0x8e, 0x2e, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x8a, 0xfc, 0x0f };

// Font characters rectangles data
static const Rectangle ViewExplorerStyleFontRecs[95] = {
    { 4, 4, 4 , 16 },
    { 16, 4, 1 , 9 },
    { 25, 4, 3 , 3 },
    { 36, 4, 6 , 9 },
    { 50, 4, 5 , 13 },
    { 63, 4, 7 , 9 },
    { 78, 4, 5 , 9 },
    { 91, 4, 1 , 3 },
    { 100, 4, 3 , 9 },
    { 111, 4, 3 , 9 },
    { 122, 4, 5 , 5 },
    { 135, 4, 5 , 5 },
    { 148, 4, 2 , 3 },
    { 158, 4, 4 , 1 },
    { 170, 4, 1 , 1 },
    { 179, 4, 3 , 9 },
    { 190, 4, 5 , 9 },
    { 203, 4, 3 , 9 },
    { 214, 4, 5 , 9 },
    { 227, 4, 5 , 9 },
    { 240, 4, 5 , 9 },
    { 4, 28, 5 , 9 },
    { 17, 28, 5 , 9 },
    { 30, 28, 5 , 9 },
    { 43, 28, 5 , 9 },
    { 56, 28, 5 , 9 },
    { 69, 28, 1 , 7 },
    { 78, 28, 2 , 9 },
    { 88, 28, 3 , 5 },
    { 99, 28, 4 , 3 },
    { 111, 28, 3 , 5 },
    { 122, 28, 5 , 9 },
    { 135, 28, 7 , 9 },
    { 150, 28, 5 , 9 },
    { 163, 28, 5 , 9 },
    { 176, 28, 5 , 9 },
    { 189, 28, 5 , 9 },
    { 202, 28, 5 , 9 },
    { 215, 28, 5 , 9 },
    { 228, 28, 5 , 9 },
    { 241, 28, 5 , 9 },
    { 4, 52, 1 , 9 },
    { 13, 52, 5 , 9 },
    { 26, 52, 5 , 9 },
    { 39, 52, 5 , 9 },
    { 52, 52, 7 , 9 },
    { 67, 52, 5 , 9 },
    { 80, 52, 5 , 9 },
    { 93, 52, 5 , 9 },
    { 106, 52, 5 , 9 },
    { 119, 52, 5 , 9 },
    { 132, 52, 5 , 9 },
    { 145, 52, 5 , 9 },
    { 158, 52, 5 , 9 },
    { 171, 52, 5 , 9 },
    { 184, 52, 7 , 9 },
    { 199, 52, 5 , 9 },
    { 212, 52, 5 , 9 },
    { 225, 52, 5 , 9 },
    { 238, 52, 3 , 9 },
    { 4, 76, 3 , 9 },
    { 15, 76, 3 , 9 },
    { 26, 76, 5 , 3 },
    { 39, 76, 5 , 1 },
    { 52, 76, 2 , 2 },
    { 62, 76, 5 , 7 },
    { 75, 76, 5 , 9 },
    { 88, 76, 5 , 7 },
    { 101, 76, 5 , 9 },
    { 114, 76, 5 , 7 },
    { 127, 76, 4 , 9 },
    { 139, 76, 5 , 9 },
    { 152, 76, 5 , 9 },
    { 165, 76, 1 , 9 },
    { 174, 76, 5 , 11 },
    { 187, 76, 5 , 9 },
    { 200, 76, 2 , 9 },
    { 210, 76, 7 , 7 },
    { 225, 76, 5 , 7 },
    { 238, 76, 5 , 7 },
    { 4, 100, 5 , 9 },
    { 17, 100, 5 , 9 },
    { 30, 100, 5 , 7 },
    { 43, 100, 5 , 7 },
    { 56, 100, 4 , 8 },
    { 68, 100, 5 , 7 },
    { 81, 100, 5 , 7 },
    { 94, 100, 7 , 7 },
    { 109, 100, 5 , 7 },
    { 122, 100, 5 , 9 },
    { 135, 100, 5 , 7 },
    { 148, 100, 4 , 9 },
    { 160, 100, 1 , 9 },
    { 169, 100, 4 , 9 },
    { 181, 100, 6 , 2 },
};

// Font glyphs info data
// NOTE: No glyphs.image data provided
static const GlyphInfo ViewExplorerStyleFontChars[95] = {
    { 32, 0, 13, 4, { 0 }},
    { 33, 2, 4, 5, { 0 }},
    { 34, 2, 4, 7, { 0 }},
    { 35, 1, 4, 8, { 0 }},
    { 36, 1, 2, 7, { 0 }},
    { 37, 1, 4, 9, { 0 }},
    { 38, 1, 4, 7, { 0 }},
    { 39, 2, 4, 5, { 0 }},
    { 40, 3, 4, 7, { 0 }},
    { 41, 1, 4, 7, { 0 }},
    { 42, 1, 4, 7, { 0 }},
    { 43, 1, 6, 7, { 0 }},
    { 44, 1, 12, 5, { 0 }},
    { 45, 1, 8, 6, { 0 }},
    { 46, 2, 12, 5, { 0 }},
    { 47, 1, 4, 5, { 0 }},
    { 48, 1, 4, 7, { 0 }},
    { 49, 2, 4, 7, { 0 }},
    { 50, 1, 4, 7, { 0 }},
    { 51, 1, 4, 7, { 0 }},
    { 52, 1, 4, 7, { 0 }},
    { 53, 1, 4, 7, { 0 }},
    { 54, 1, 4, 7, { 0 }},
    { 55, 1, 4, 7, { 0 }},
    { 56, 1, 4, 7, { 0 }},
    { 57, 1, 4, 7, { 0 }},
    { 58, 2, 6, 5, { 0 }},
    { 59, 1, 6, 5, { 0 }},
    { 60, 1, 6, 5, { 0 }},
    { 61, 1, 7, 6, { 0 }},
    { 62, 1, 6, 5, { 0 }},
    { 63, 1, 4, 7, { 0 }},
    { 64, 1, 4, 9, { 0 }},
    { 65, 1, 4, 7, { 0 }},
    { 66, 1, 4, 7, { 0 }},
    { 67, 1, 4, 7, { 0 }},
    { 68, 1, 4, 7, { 0 }},
    { 69, 1, 4, 7, { 0 }},
    { 70, 1, 4, 7, { 0 }},
    { 71, 1, 4, 7, { 0 }},
    { 72, 1, 4, 7, { 0 }},
    { 73, 2, 4, 5, { 0 }},
    { 74, 1, 4, 7, { 0 }},
    { 75, 1, 4, 7, { 0 }},
    { 76, 1, 4, 7, { 0 }},
    { 77, 1, 4, 9, { 0 }},
    { 78, 1, 4, 7, { 0 }},
    { 79, 1, 4, 7, { 0 }},
    { 80, 1, 4, 7, { 0 }},
    { 81, 1, 4, 7, { 0 }},
    { 82, 1, 4, 7, { 0 }},
    { 83, 1, 4, 7, { 0 }},
    { 84, 1, 4, 7, { 0 }},
    { 85, 1, 4, 7, { 0 }},
    { 86, 1, 4, 7, { 0 }},
    { 87, 1, 4, 9, { 0 }},
    { 88, 1, 4, 7, { 0 }},
    { 89, 1, 4, 7, { 0 }},
    { 90, 1, 4, 7, { 0 }},
    { 91, 3, 4, 7, { 0 }},
    { 92, 1, 4, 5, { 0 }},
    { 93, 1, 4, 7, { 0 }},
    { 94, 1, 4, 7, { 0 }},
    { 95, 0, 14, 5, { 0 }},
    { 96, 1, 4, 5, { 0 }},
    { 97, 1, 6, 7, { 0 }},
    { 98, 1, 4, 7, { 0 }},
    { 99, 1, 6, 7, { 0 }},
    { 100, 1, 4, 7, { 0 }},
    { 101, 1, 6, 7, { 0 }},
    { 102, 1, 4, 6, { 0 }},
    { 103, 1, 6, 7, { 0 }},
    { 104, 1, 4, 7, { 0 }},
    { 105, 2, 4, 5, { 0 }},
    { 106, 1, 4, 7, { 0 }},
    { 107, 1, 4, 7, { 0 }},
    { 108, 2, 4, 5, { 0 }},
    { 109, 1, 6, 9, { 0 }},
    { 110, 1, 6, 7, { 0 }},
    { 111, 1, 6, 7, { 0 }},
    { 112, 1, 6, 7, { 0 }},
    { 113, 1, 6, 7, { 0 }},
    { 114, 1, 6, 7, { 0 }},
    { 115, 1, 6, 7, { 0 }},
    { 116, 1, 5, 6, { 0 }},
    { 117, 1, 6, 7, { 0 }},
    { 118, 1, 6, 7, { 0 }},
    { 119, 1, 6, 9, { 0 }},
    { 120, 1, 6, 7, { 0 }},
    { 121, 1, 6, 7, { 0 }},
    { 122, 1, 6, 7, { 0 }},
    { 123, 2, 4, 7, { 0 }},
    { 124, 2, 4, 5, { 0 }},
    { 125, 1, 4, 7, { 0 }},
    { 126, 1, 4, 8, { 0 }},
};

// Style loading function: 3DViewExplorerStyle
static void GuiLoadStyle(void)
{
    // Load style properties provided
    // NOTE: Default properties are propagated
    for (int i = 0; i < STYLE_STYLE_PROPS_COUNT; i++)
    {
        GuiSetStyle(ViewExplorerStyleStyleProps[i].controlId, ViewExplorerStyleStyleProps[i].propertyId, ViewExplorerStyleStyleProps[i].propertyValue);
    }

    Font font = LoadFontEx("resources/anonymous_pro_bold.ttf", 20, 0, 0);
    GuiSetFont(font);

    // TODO: Setup a white rectangle on the font to be used on shapes drawing,
    // this way we make sure all gui can be drawn on a single pass because no texture change is required
    // NOTE: Setting up this rectangle is a manual process (for the moment)
    //Rectangle whiteChar = { 0, 0, 0, 0 };
    //SetShapesTexture(font.texture, whiteChar);

    //-----------------------------------------------------------------

    // TODO: Custom user style setup: Set specific properties here (if required)
    // i.e. Controls specific BORDER_WIDTH, TEXT_PADDING, TEXT_ALIGNMENT
}