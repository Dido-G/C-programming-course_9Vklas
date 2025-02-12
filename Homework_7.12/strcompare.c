#include <stdio.h>
#include <stdlib.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error: Please enter two strings to compare.\n");
        return 1;
    }

    int result = strcompare(argv[1], argv[2]);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is before the second string.\n");
    } else {
        printf("The first string is after the second string.\n");
    }

    return 0;
}
