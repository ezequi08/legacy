#include "font.h"

unsigned char PROGMEM fontIndex_v5[] = {                                    0, /*   */
                                    1, /* ! */
                                    2, /* " */
                                    5, /* # */
                                    11, /* $ */
                                    16, /* % */
                                    21, /* & */
                                    26, /* ' */
                                    28, /* ( */
                                    31, /* ) */
                                    34, /* * */
                                    39, /* + */
                                    44, /* , */
                                    46, /* - */
                                    50, /* . */
                                    51, /* / */
                                    54, /* 0 */
                                    59, /* 1 */
                                    61, /* 2 */
                                    66, /* 3 */
                                    71, /* 4 */
                                    75, /* 5 */
                                    80, /* 6 */
                                    85, /* 7 */
                                    89, /* 8 */
                                    94, /* 9 */
                                    99, /* : */
                                    100, /* ; */
                                    102, /* < */
                                    105, /* = */
                                    110, /* > */
                                    113, /* ? */
                                    118, /* @ */
                                    123, /* A */
                                    128, /* B */
                                    133, /* C */
                                    138, /* D */
                                    143, /* E */
                                    148, /* F */
                                    153, /* G */
                                    158, /* H */
                                    163, /* I */
                                    164, /* J */
                                    169, /* K */
                                    174, /* L */
                                    178, /* M */
                                    183, /* N */
                                    188, /* O */
                                    193, /* P */
                                    198, /* Q */
                                    203, /* R */
                                    208, /* S */
                                    213, /* T */
                                    218, /* U */
                                    223, /* V */
                                    228, /* W */
                                    233, /* X */
                                    238, /* Y */
                                    243, /* Z */
                                    248, /* [ */
                                    251, /* \ */
                                    254, /* ] */
                                    257, /* ^ */
                                    262, /* _ */
                                    268, /* ` */
                                    270, /* a */
                                    275, /* b */
                                    280, /* c */
                                    285, /* d */
                                    290, /* e */
                                    295, /* f */
                                    299, /* g */
                                    304, /* h */
                                    309, /* i */
                                    310, /* j */
                                    313, /* k */
                                    317, /* l */
                                    320, /* m */
                                    327, /* n */
                                    332, /* o */
                                    337, /* p */
                                    342, /* q */
                                    347, /* r */
                                    351, /* s */
                                    357, /* t */
                                    361, /* u */
                                    366, /* v */
                                    371, /* w */
                                    378, /* x */
                                    383, /* y */
                                    388, /* z */
                                    393, /* { */
                                    396, /* | */
                                    397, /* } */
                                    400, /* ~ */
                                    403
};

unsigned char PROGMEM fontData_v5[] = {
                                0x00, /*          */
                                0x5c, /*  # ###   */
                                0x06, /*      ##  */
                                0x00, /*          */
                                0x06, /*      ##  */
                                0x28, /*   # #    */
                                0x7c, /*  #####   */
                                0x28, /*   # #    */
                                0x28, /*   # #    */
                                0x7c, /*  #####   */
                                0x28, /*   # #    */
                                0x48, /*  #  #    */
                                0x54, /*  # # #   */
                                0xd6, /* ## # ##  */
                                0x54, /*  # # #   */
                                0x24, /*   #  #   */
                                0x4c, /*  #  ##   */
                                0x24, /*   #  #   */
                                0x7c, /*  #####   */
                                0x48, /*  #  #    */
                                0x64, /*  ##  #   */
                                0x28, /*   # #    */
                                0x54, /*  # # #   */
                                0xd6, /* ## # ##  */
                                0x44, /*  #   #   */
                                0x28, /*   # #    */
                                0x04, /*      #   */
                                0x02, /*       #  */
                                0x38, /*   ###    */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x38, /*   ###    */
                                0x54, /*  # # #   */
                                0x38, /*   ###    */
                                0x6c, /*  ## ##   */
                                0x38, /*   ###    */
                                0x54, /*  # # #   */
                                0x10, /*    #     */
                                0x10, /*    #     */
                                0x7c, /*  #####   */
                                0x10, /*    #     */
                                0x10, /*    #     */
                                0x80, /* #        */
                                0x40, /*  #       */
                                0x10, /*    #     */
                                0x10, /*    #     */
                                0x10, /*    #     */
                                0x10, /*    #     */
                                0x40, /*  #       */
                                0x60, /*  ##      */
                                0x18, /*    ##    */
                                0x06, /*      ##  */
                                0x38, /*   ###    */
                                0x44, /*  #   #   */
                                0x54, /*  # # #   */
                                0x44, /*  #   #   */
                                0x38, /*   ###    */
                                0x08, /*     #    */
                                0x7c, /*  #####   */
                                0x60, /*  ##      */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x58, /*  # ##    */
                                0x50, /*  # #     */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x38, /*   ###    */
                                0x30, /*   ##     */
                                0x28, /*   # #    */
                                0x24, /*   #  #   */
                                0x7c, /*  #####   */
                                0x58, /*  # ##    */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x74, /*  ### #   */
                                0x38, /*   ###    */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x30, /*   ##     */
                                0x04, /*      #   */
                                0x64, /*  ##  #   */
                                0x14, /*    # #   */
                                0x0c, /*     ##   */
                                0x28, /*   # #    */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x28, /*   # #    */
                                0x08, /*     #    */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x38, /*   ###    */
                                0x50, /*  # #     */
                                0x80, /* #        */
                                0x50, /*  # #     */
                                0x10, /*    #     */
                                0x28, /*   # #    */
                                0x44, /*  #   #   */
                                0x28, /*   # #    */
                                0x28, /*   # #    */
                                0x28, /*   # #    */
                                0x28, /*   # #    */
                                0x28, /*   # #    */
                                0x44, /*  #   #   */
                                0x28, /*   # #    */
                                0x10, /*    #     */
                                0x08, /*     #    */
                                0x04, /*      #   */
                                0x54, /*  # # #   */
                                0x14, /*    # #   */
                                0x08, /*     #    */
                                0x38, /*   ###    */
                                0x44, /*  #   #   */
                                0x5c, /*  # ###   */
                                0x54, /*  # # #   */
                                0x1c, /*    ###   */
                                0x70, /*  ###     */
                                0x28, /*   # #    */
                                0x24, /*   #  #   */
                                0x28, /*   # #    */
                                0x70, /*  ###     */
                                0x78, /*  ####    */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x68, /*  ## #    */
                                0x38, /*   ###    */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x74, /*  ### #   */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x38, /*   ###    */
                                0x38, /*   ###    */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x58, /*  # ##    */
                                0x78, /*  ####    */
                                0x24, /*   #  #   */
                                0x24, /*   #  #   */
                                0x24, /*   #  #   */
                                0x08, /*     #    */
                                0x38, /*   ###    */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x54, /*  # # #   */
                                0x34, /*   ## #   */
                                0x7c, /*  #####   */
                                0x10, /*    #     */
                                0x10, /*    #     */
                                0x10, /*    #     */
                                0x7c, /*  #####   */
                                0x7c, /*  #####   */
                                0x20, /*   #      */
                                0x40, /*  #       */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x3c, /*   ####   */
                                0x7c, /*  #####   */
                                0x10, /*    #     */
                                0x18, /*    ##    */
                                0x24, /*   #  #   */
                                0x40, /*  #       */
                                0x3c, /*   ####   */
                                0x40, /*  #       */
                                0x40, /*  #       */
                                0x20, /*   #      */
                                0x7c, /*  #####   */
                                0x08, /*     #    */
                                0x10, /*    #     */
                                0x08, /*     #    */
                                0x7c, /*  #####   */
                                0x7c, /*  #####   */
                                0x08, /*     #    */
                                0x10, /*    #     */
                                0x20, /*   #      */
                                0x7c, /*  #####   */
                                0x38, /*   ###    */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x38, /*   ###    */
                                0x78, /*  ####    */
                                0x14, /*    # #   */
                                0x14, /*    # #   */
                                0x14, /*    # #   */
                                0x1c, /*    ###   */
                                0x38, /*   ###    */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x24, /*   #  #   */
                                0x58, /*  # ##    */
                                0x78, /*  ####    */
                                0x14, /*    # #   */
                                0x14, /*    # #   */
                                0x34, /*   ## #   */
                                0x4c, /*  #  ##   */
                                0x58, /*  # ##    */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x74, /*  ### #   */
                                0x08, /*     #    */
                                0x04, /*      #   */
                                0x7c, /*  #####   */
                                0x04, /*      #   */
                                0x08, /*     #    */
                                0x3c, /*   ####   */
                                0x40, /*  #       */
                                0x40, /*  #       */
                                0x40, /*  #       */
                                0x3c, /*   ####   */
                                0x1c, /*    ###   */
                                0x20, /*   #      */
                                0x40, /*  #       */
                                0x20, /*   #      */
                                0x1c, /*    ###   */
                                0x3c, /*   ####   */
                                0x40, /*  #       */
                                0x30, /*   ##     */
                                0x40, /*  #       */
                                0x3c, /*   ####   */
                                0x44, /*  #   #   */
                                0x28, /*   # #    */
                                0x10, /*    #     */
                                0x28, /*   # #    */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x28, /*   # #    */
                                0x10, /*    #     */
                                0x08, /*     #    */
                                0x04, /*      #   */
                                0x44, /*  #   #   */
                                0x64, /*  ##  #   */
                                0x54, /*  # # #   */
                                0x4c, /*  #  ##   */
                                0x40, /*  #       */
                                0x7c, /*  #####   */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x06, /*      ##  */
                                0x18, /*    ##    */
                                0x60, /*  ##      */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x7c, /*  #####   */
                                0x10, /*    #     */
                                0x08, /*     #    */
                                0x0c, /*     ##   */
                                0x08, /*     #    */
                                0x10, /*    #     */
                                0x80, /* #        */
                                0x80, /* #        */
                                0x80, /* #        */
                                0x80, /* #        */
                                0x80, /* #        */
                                0x80, /* #        */
                                0x01, /*        # */
                                0x02, /*       #  */
                                0x20, /*   #      */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x38, /*   ###    */
                                0x7e, /*  ######  */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x38, /*   ###    */
                                0x38, /*   ###    */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x28, /*   # #    */
                                0x38, /*   ###    */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x7e, /*  ######  */
                                0x38, /*   ###    */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x18, /*    ##    */
                                0x7c, /*  #####   */
                                0x12, /*    #  #  */
                                0x12, /*    #  #  */
                                0x04, /*      #   */
                                0x18, /*    ##    */
                                0xa4, /* # #  #   */
                                0xa4, /* # #  #   */
                                0xa4, /* # #  #   */
                                0x78, /*  ####    */
                                0x7e, /*  ######  */
                                0x04, /*      #   */
                                0x04, /*      #   */
                                0x04, /*      #   */
                                0x78, /*  ####    */
                                0x7a, /*  #### #  */
                                0x80, /* #        */
                                0x80, /* #        */
                                0x7a, /*  #### #  */
                                0x7e, /*  ######  */
                                0x10, /*    #     */
                                0x28, /*   # #    */
                                0x40, /*  #       */
                                0x3e, /*   #####  */
                                0x40, /*  #       */
                                0x40, /*  #       */
                                0x78, /*  ####    */
                                0x04, /*      #   */
                                0x04, /*      #   */
                                0x18, /*    ##    */
                                0x04, /*      #   */
                                0x04, /*      #   */
                                0x78, /*  ####    */
                                0x78, /*  ####    */
                                0x04, /*      #   */
                                0x04, /*      #   */
                                0x04, /*      #   */
                                0x78, /*  ####    */
                                0x38, /*   ###    */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x38, /*   ###    */
                                0xfc, /* ######   */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x38, /*   ###    */
                                0x38, /*   ###    */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0xfc, /* ######   */
                                0x78, /*  ####    */
                                0x04, /*      #   */
                                0x04, /*      #   */
                                0x08, /*     #    */
                                0x48, /*  #  #    */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x54, /*  # # #   */
                                0x20, /*   #      */
                                0x3e, /*   #####  */
                                0x44, /*  #   #   */
                                0x44, /*  #   #   */
                                0x20, /*   #      */
                                0x3c, /*   ####   */
                                0x40, /*  #       */
                                0x40, /*  #       */
                                0x40, /*  #       */
                                0x3c, /*   ####   */
                                0x1c, /*    ###   */
                                0x20, /*   #      */
                                0x40, /*  #       */
                                0x20, /*   #      */
                                0x1c, /*    ###   */
                                0x3c, /*   ####   */
                                0x40, /*  #       */
                                0x40, /*  #       */
                                0x38, /*   ###    */
                                0x40, /*  #       */
                                0x40, /*  #       */
                                0x3c, /*   ####   */
                                0x44, /*  #   #   */
                                0x28, /*   # #    */
                                0x10, /*    #     */
                                0x28, /*   # #    */
                                0x44, /*  #   #   */
                                0x1c, /*    ###   */
                                0xa0, /* # #      */
                                0xa0, /* # #      */
                                0xa0, /* # #      */
                                0x7c, /*  #####   */
                                0x44, /*  #   #   */
                                0x64, /*  ##  #   */
                                0x54, /*  # # #   */
                                0x4c, /*  #  ##   */
                                0x40, /*  #       */
                                0x10, /*    #     */
                                0x6c, /*  ## ##   */
                                0x44, /*  #   #   */
                                0x7c, /*  #####   */
                                0x44, /*  #   #   */
                                0x6c, /*  ## ##   */
                                0x10, /*    #     */
                                0x02, /*       #  */
                                0x04, /*      #   */
                                0x02, /*       #  */
};
font font_ = {8, fontIndex_v5, fontData_v5, ' ', '~', '.', 1};
