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

    SafeResult result = safedivide(a, b);

    if (result.errorflag == 1) {
        printf("Error: Division by zero or overflow occurred.\n");
    } else {
        printf("Quotient: %d\n", result.value);
    }

    return 0;
}
