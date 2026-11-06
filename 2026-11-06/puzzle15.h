
#define BOARD_SIDE 3
#define NPIECES (BOARD_SIDE* BOARD_SIDE)

typedef  unsigned char  byte;

// tipo para representar o tabuleiro
typedef byte board_t[BOARD_SIDE][BOARD_SIDE];


// strings para desenhar as quadrículas do tabuleiro

#define HORIZ "\xE2\x94\x80"
#define VERT "\xE2\x94\x82"
#define VERT_BOLD "\xE2\x94\x83"

#define UPPER_LEFT_CORNER "\xE2\x94\x8C"
#define UPPER_RIGHT_CORNER "\xE2\x94\x90"
#define BOTTOM_LEFT_CORNER "\xE2\x94\x94"
#define BOTTOM_RIGHT_CORNER "\xE2\x94\x98"

#define JUNCTION_LEFT "\xE2\x94\x9C"
#define JUNCTION_TOP "\xE2\x94\xAC"
#define JUNCTION_RIGHT "\xE2\x94\xA4"
#define JUNCTION_BOTTOM "\xE2\x94\xB4"
#define CROSS "\xE2\x94\xBC"
 
 
