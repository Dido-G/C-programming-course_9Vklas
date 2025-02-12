#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error: Two arguments are required.\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    SafeResult result = safemultiply(a, b);

    if (result.errorflag == 1) {
        printf("Error: Overflow or underflow occurred.\n");
    } else {
        printf("Product: %d\n", result.value);
    }

    return 0;
}
