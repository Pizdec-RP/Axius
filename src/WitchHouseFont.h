const uint8_t WitchHouseFontBitmaps[] PROGMEM = {
    0x00, 0x00, 0x00, 0xF4, 0x16, 0x80, 0x00, 0x02, 0xBE, 0xAF, 0xA8, 0x23,
    0xE8, 0xE2, 0xF8, 0x80, 0x06, 0x74, 0x45, 0xCC, 0x74, 0x9A, 0xD9, 0x34,
    0x60, 0x6A, 0x90, 0x95, 0x60, 0x05, 0x5D, 0x50, 0x00, 0x01, 0x74, 0x00,
    0x01, 0x60, 0x00, 0x70, 0x00, 0x04, 0x25, 0x29, 0x00, 0x56, 0xDA, 0x80,
    0x59, 0x25, 0xC0, 0x69, 0x12, 0x4F, 0xE4, 0xF3, 0xC0, 0x99, 0x9F, 0x11,
    0xF8, 0x8F, 0x1F, 0xF8, 0x8F, 0x9F, 0xF1, 0x12, 0x22, 0xF9, 0x9F, 0x9F,
    0xF9, 0x9F, 0x1F, 0x28, 0x04, 0x70, 0x05, 0x44, 0x40, 0x00, 0xF0, 0xF0,
    0x11, 0x15, 0x00, 0x69, 0x12, 0x02, 0x74, 0x6F, 0xAB, 0xA4, 0x21, 0x14,
    0xA8, 0xC4, 0xE9, 0xE9, 0x9E, 0x78, 0x99, 0x87, 0xE9, 0x99, 0x9E, 0xE1,
    0x21, 0xE0, 0xF8, 0xF8, 0xB8, 0xF8, 0x88, 0x9F, 0x99, 0x9F, 0x99, 0x5D,
    0x25, 0xC0, 0x24, 0x93, 0x80, 0xB7, 0x6B, 0x40, 0x88, 0x88, 0x8F, 0x8E,
    0xEB, 0x18, 0xC4, 0x8C, 0x67, 0x5C, 0xC4, 0x35, 0x25, 0x9A, 0x4A, 0xC0,
    0xF9, 0x9F, 0x88, 0x64, 0xA5, 0x27, 0x04, 0x79, 0x97, 0x59, 0x7D, 0x28,
    0xE2, 0xF8, 0x80, 0x27, 0xC8, 0x66, 0x10, 0xDA, 0xA3, 0x18, 0xB8, 0x8C,
    0x54, 0xA2, 0x10, 0x45, 0xFD, 0x57, 0xF5, 0x45, 0x00, 0x8A, 0x88, 0x45,
    0x44, 0x8C, 0x54, 0x42, 0x10, 0xF8, 0x44, 0x44, 0x7C, 0xEA, 0xB0, 0x91,
    0x22, 0x40, 0xD5, 0x70, 0x22, 0xA2, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x44,
    0x80, 0x00, 0x01, 0x14, 0xA8, 0xFC, 0x1E, 0xFB, 0xC0, 0x1E, 0x59, 0xC0,
    0x04, 0xFB, 0xC0, 0x18, 0xB3, 0x80, 0x1A, 0x79, 0x00, 0x07, 0x8B, 0x96,
    0x12, 0x7B, 0x40, 0x55, 0x24, 0x80, 0x11, 0x70, 0x09, 0xAC, 0xA9, 0x2A,
    0xB0, 0x04, 0x7F, 0x5A, 0xD4, 0x00, 0x9B, 0xD9, 0x01, 0x54, 0xE5, 0x50,
    0x1A, 0xE9, 0x00, 0x0E, 0xB2, 0x40, 0x07, 0x97, 0x59, 0x1E, 0x73, 0xC0,
    0x0B, 0xA4, 0x80, 0x00, 0x0C, 0xD2, 0x48, 0xC0, 0x16, 0xDA, 0x80, 0x05,
    0x6B, 0xFA, 0xB8, 0x09, 0x96, 0x99, 0x17, 0xAE, 0x80, 0x0F, 0x16, 0x8F,
    0x05, 0x64, 0x40, 0xFC, 0x11, 0x35, 0x00, 0x00, 0x11, 0x51, 0x00, 0x75,
    0x55, 0x57};

const GFXglyph WitchHouseFontGlyphs[] PROGMEM = {
    {0, 3, 6, 4, 0, -5},     // 0x20 ' '
    {3, 1, 6, 2, 0, -5},     // 0x21 '!'
    {4, 3, 6, 4, 0, -5},     // 0x22 '"'
    {7, 5, 6, 6, 0, -5},     // 0x23 '#'
    {11, 5, 7, 6, 0, -6},    // 0x24 '$'
    {16, 5, 6, 6, 0, -5},    // 0x25 '%'
    {20, 5, 6, 6, 0, -5},    // 0x26 '&'
    {24, 1, 6, 4, 1, -5},    // 0x27 '''
    {25, 2, 6, 3, 0, -5},    // 0x28 '('
    {27, 2, 6, 3, 0, -5},    // 0x29 ')'
    {29, 5, 6, 6, 0, -5},    // 0x2A '*'
    {33, 3, 6, 4, 0, -5},    // 0x2B '+'
    {36, 2, 6, 3, 0, -5},    // 0x2C ','
    {38, 3, 6, 4, 0, -5},    // 0x2D '-'
    {41, 1, 6, 2, 0, -5},    // 0x2E '.'
    {42, 3, 6, 4, 0, -5},    // 0x2F '/'
    {45, 3, 6, 4, 0, -5},    // 0x30 '0'
    {48, 3, 6, 4, 0, -5},    // 0x31 '1'
    {51, 4, 6, 5, 0, -5},    // 0x32 '2'
    {54, 3, 6, 4, 0, -5},    // 0x33 '3'
    {57, 4, 6, 5, 0, -5},    // 0x34 '4'
    {60, 4, 6, 5, 0, -5},    // 0x35 '5'
    {63, 4, 6, 5, 0, -5},    // 0x36 '6'
    {66, 4, 6, 5, 0, -5},    // 0x37 '7'
    {69, 4, 6, 5, 0, -5},    // 0x38 '8'
    {72, 4, 6, 5, 0, -5},    // 0x39 '9'
    {75, 1, 6, 2, 0, -5},    // 0x3A ':'
    {76, 2, 6, 3, 0, -5},    // 0x3B ';'
    {78, 3, 6, 4, 0, -5},    // 0x3C '<'
    {81, 4, 6, 5, 0, -5},    // 0x3D '='
    {84, 3, 6, 4, 0, -5},    // 0x3E '>'
    {87, 4, 6, 5, 0, -5},    // 0x3F '?'
    {90, 5, 6, 6, 0, -5},    // 0x40 '@'
    {94, 5, 6, 6, 0, -5},    // 0x41 'A'
    {98, 4, 6, 5, 0, -5},    // 0x42 'B'
    {101, 4, 6, 5, 0, -5},   // 0x43 'C'
    {104, 4, 6, 5, 0, -5},   // 0x44 'D'
    {107, 4, 5, 5, 0, -4},   // 0x45 'E'
    {110, 4, 6, 5, 0, -5},   // 0x46 'F'
    {113, 4, 6, 5, 0, -5},   // 0x47 'G'
    {116, 4, 6, 5, 0, -5},   // 0x48 'H'
    {119, 3, 6, 4, 0, -5},   // 0x49 'I'
    {122, 3, 6, 4, 0, -5},   // 0x4A 'J'
    {125, 3, 6, 4, 0, -5},   // 0x4B 'K'
    {128, 4, 6, 5, 0, -5},   // 0x4C 'L'
    {131, 5, 6, 6, 0, -5},   // 0x4D 'M'
    {135, 5, 6, 6, 0, -5},   // 0x4E 'N'
    {139, 6, 6, 7, 0, -5},   // 0x4F 'O'
    {144, 4, 6, 5, 0, -5},   // 0x50 'P'
    {147, 5, 6, 6, 0, -5},   // 0x51 'Q'
    {151, 4, 6, 5, 0, -5},   // 0x52 'R'
    {154, 5, 7, 6, 0, -5},   // 0x53 'S'
    {159, 5, 6, 6, 0, -5},   // 0x54 'T'
    {163, 5, 6, 6, 0, -5},   // 0x55 'U'
    {167, 5, 6, 6, 0, -5},   // 0x56 'V'
    {171, 7, 6, 8, 0, -5},   // 0x57 'W'
    {177, 5, 6, 6, 0, -5},   // 0x58 'X'
    {181, 5, 6, 6, 0, -5},   // 0x59 'Y'
    {185, 5, 6, 6, 0, -5},   // 0x5A 'Z'
    {189, 2, 6, 3, 0, -5},   // 0x5B '['
    {191, 3, 6, 4, 0, -5},   // 0x5C '\'
    {194, 2, 6, 3, 0, -5},   // 0x5D ']'
    {196, 5, 6, 6, 0, -5},   // 0x5E '^'
    {200, 4, 6, 5, 0, -5},   // 0x5F '_'
    {203, 3, 6, 4, 0, -5},   // 0x60 '`'
    {206, 5, 6, 6, 0, -5},   // 0x61 'a'
    {210, 3, 6, 4, 0, -5},   // 0x62 'b'
    {213, 3, 6, 4, 0, -5},   // 0x63 'c'
    {216, 3, 6, 4, 0, -5},   // 0x64 'd'
    {219, 3, 6, 4, 0, -5},   // 0x65 'e'
    {222, 3, 6, 4, 0, -5},   // 0x66 'f'
    {225, 4, 6, 5, 0, -5},   // 0x67 'g'
    {228, 3, 6, 4, 0, -5},   // 0x68 'h'
    {231, 3, 6, 4, 0, -5},   // 0x69 'i'
    {234, 2, 6, 3, 0, -5},   // 0x6A 'j'
    {236, 4, 6, 5, 0, -5},   // 0x6B 'k'
    {239, 2, 6, 3, 0, -5},   // 0x6C 'l'
    {241, 5, 6, 6, 0, -5},   // 0x6D 'm'
    {245, 4, 6, 5, 0, -5},   // 0x6E 'n'
    {248, 5, 6, 6, 0, -5},   // 0x6F 'o'
    {252, 3, 6, 4, 0, -5},   // 0x70 'p'
    {255, 3, 6, 4, 0, -5},   // 0x71 'q'
    {258, 4, 6, 5, 0, -5},   // 0x72 'r'
    {261, 3, 6, 4, 0, -5},   // 0x73 's'
    {264, 3, 6, 4, 0, -5},   // 0x74 't'
    {267, 6, 6, 7, 0, -5},   // 0x75 'u'
    {272, 3, 6, 4, 0, -5},   // 0x76 'v'
    {275, 5, 6, 6, 0, -5},   // 0x77 'w'
    {279, 4, 6, 5, 0, -5},   // 0x78 'x'
    {282, 3, 6, 4, 0, -5},   // 0x79 'y'
    {285, 4, 6, 5, 0, -5},   // 0x7A 'z'
    {288, 3, 6, 4, 0, -5},   // 0x7B '{'
    {291, 1, 6, 4, 1, -5},   // 0x7C '|'
    {292, 3, 6, 4, 0, -5},   // 0x7D '}'
    {295, 5, 6, 6, 0, -5},   // 0x7E '~'
    {299, 4, 6, 4, -1, -5}}; // 0x7F ''

const GFXfont WitchHouseFont PROGMEM = {
    (uint8_t *)WitchHouseFontBitmaps,
    (GFXglyph *)WitchHouseFontGlyphs, 0x20, 0x7F, 1};

// Approx. 981 bytes