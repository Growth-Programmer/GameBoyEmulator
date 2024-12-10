#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (puts("Starting EZ GameBoy Emulator...") == EOF) {
        puts("EZ GameBoy Emulator Start Up Failed...");
        return EXIT_FAILURE;
    }
    struct instruction {
        int k;
        int j;
        char i;
    };

    struct instruction set = {};

    return EXIT_SUCCESS;
}
