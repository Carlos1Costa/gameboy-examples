#ifndef _HELPERS_H
#define _HELPERS_H

#include <stdint.h>

#define COLS 20  // Console width
#define ROWS 18  // Console height

// Helper function to clear the entire screen
void clear_screen(void);

// Helper function that clears the given line
void clear_line(uint8_t y);

// Convers coordinate between 2D (x, y) to 1D (index in an one-dimensional
// array)
uint8_t coord_2d_to_1d(uint8_t x, uint8_t y);

#endif
