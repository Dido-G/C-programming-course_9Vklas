#include <stdio.h>
#define SQUARE(A, B) (((A) + (B)) * ((A) + (B)))

int main() {
    int a = 5, b = 10;
    int result = SQUARE(a, b);
    printf("Square of the sum of %d and %d is: %d\n", a, b, result);

    return 0;
}