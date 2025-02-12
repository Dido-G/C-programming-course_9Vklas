#include <stdio.h>
#include <stdlib.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error: Please enter one argument for the lenght of the string.\n");
        return 1;
    }
    int length = strlength(argv[1]);
    printf("Length of the string is: %d\n", length);
    return 0;
}
