#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(void) {
    if (puts("Starting EZ GameBoy Emulator...") == EOF) {
        puts("EZ GameBoy Emulator Start Up Failed...");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
