#include <stdio.h>

int main(int argc, char** args) {
    // This is just to show you how program arguments
    // work.

    // args[0] is the nane of the program
    printf("Argument Count: %d (in hex -> 0x%x)\n", argc, argc);

    printf("program name: %s\n" , args[0]);
    for (int i=1; i < argc; i++) {
        printf("argument %d: %s\n" , i, args[i]);
    }
    return 0;
}