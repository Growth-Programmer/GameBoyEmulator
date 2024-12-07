#include <stdio.h>
#include <stdlib.h>


int main(void) {
    if (puts("Starting GameBoy Emulator...") == EOF) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
