#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error: Please enter two strings to concatenate.\n");
        return 1;
    }
    
    if (strlen(argv[1]) > 50 || strlen(argv[2]) > 50) {
        printf("Error: Strings should not exceed 50 characters.\n");
        return 1;
    }

    strconcat(argv[1], argv[2]);
    printf("Result of concatenation: %s\n", argv[1]);
    return 0;
}
