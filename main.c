#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

 /*
 Author: Growth Programmer
 Purpose: Game Boy Advanced Emulator Main
 Date: 12/11/2024
 */

int main(int argc, char **argv) {
    if (puts("Starting EZ GameBoy Emulator...") == EOF) {
        puts("EZ GameBoy Emulator Start Up Failed...");
        return EXIT_FAILURE;
    }

    printf("Enter a number:");
    char buf[1024];
    if (!fgets(buf, 300, stdin)){
        return EXIT_FAILURE;
    }
    char *end_ptr;
    errno = 0;
    long a = strtol(buf, &end_ptr, 10);
    printf("You entered %ld.\n", a);

    return EXIT_SUCCESS;
}
