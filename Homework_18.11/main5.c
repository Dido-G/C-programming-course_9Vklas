#include <stdio.h>
#include "maths.h"

int main() {
    int number;
    printf("Enter number for factoriel: ");
    scanf("%d", &number);

    int result = factorial(number);

    if (result == -1) {
        printf("Factoriel isn't for negative numbers.\n");
    } else {
        printf("Factoriel of %d is %d\n", number, result);
    }

    return 0;
}
