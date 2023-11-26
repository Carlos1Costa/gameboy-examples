#include <gbdk/console.h>
#include "game.h"
#include "helpers.h"

void clear_screen(void) {
    uint8_t x;
    uint8_t y = ROWS;
    while (y) {
        y -= 1;
        x = COLS;
        while (x) {
            x -= 1;
            gotoxy(x, y);
            setchar(' ');
        }
    }
}

void clear_line(uint8_t y) {
    uint8_t x = COLS;
    while (x) {
        x -= 1;
        gotoxy(x, y);
        setchar(' ');
    }
}

uint8_t coord_2d_to_1d(uint8_t x, uint8_t y) {
    return y * GAME_BOARD_SIZE + x;
}
