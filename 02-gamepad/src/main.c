#include <stdio.h>
#include <stdint.h>
#include <gb/gb.h>


void demo_joypad(void) {
    uint8_t prev_keys = 0;
    uint8_t keys = 0;

    printf("Press what you want\n\n");

    // Infinit loop to read keys
    while (1) {
        // Read currently pressed keys
        keys = joypad();

        // If nothing changed from previous iteration, we continue to next
        // iteration (to avoid displaying the same message again and again, we
        // print a new message only when something changed)
        if (keys == prev_keys) {
            continue;
        }

        // We display the pressed keys...
        if (keys > 0) {
            if (keys & J_UP) printf("UP ");
            if (keys & J_DOWN) printf("DOWN ");
            if (keys & J_LEFT) printf("LEFT ");
            if (keys & J_RIGHT) printf("RIGHT ");
            if (keys & J_SELECT) printf("SELECT ");
            if (keys & J_START) printf("START ");
            if (keys & J_A) printf("A ");
            if (keys & J_B) printf("B ");
            printf("\n");

            // ... or "-" if no key is pressed.
        } else {
            printf("---\n");
        }

        // We keep the pressed keys
        prev_keys = keys;
    }
}

int main(void) {
    printf("\n==== joypad() =====\n");

    demo_joypad();
    return 0;
}