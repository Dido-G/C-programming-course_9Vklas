#include <stdio.h>

#define SWAP(A, B, TYPE) \
    TYPE temp = A;           \
    A = B;                   \
    B = temp;               \


#define SORT(ARRAY, SIZE, TYPE, COMPARE)                  \
        for (int i = 0; i < SIZE - 1; i++) {               \
            for (int j = 0; j < SIZE - i - 1; j++) {       \
                if (ARRAY[j] COMPARE ARRAY[j + 1]) {      \
                    SWAP(ARRAY[j], ARRAY[j + 1], TYPE);   \
                }                                           \
            }                                               \
        }                                                   \
    

int main() {
    int array[5] = {5, 3, 4, 1, 2};

    SORT(array, 5, int, <);
    printf("Ascending: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    SORT(array, 5, int, >);
    printf("Descending: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}