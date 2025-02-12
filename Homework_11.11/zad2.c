#include <stdio.h>

#define ARRAY_SIZE 8

#if defined(ARRAY_SIZE) && (ARRAY_SIZE > 0 && ARRAY_SIZE < 11)
    #define CREATE_ARRAY(arr) \
        int arr[ARRAY_SIZE]; \
        for (int i = 0; i < ARRAY_SIZE; i++) { \
            arr[i] = 1 << i; \
        }
#else
    #define CREATE_ARRAY(arr) \
        printf("The array size is not supported\n");
#endif

int main() {
    #if defined(ARRAY_SIZE) && (ARRAY_SIZE > 0 && ARRAY_SIZE < 11)
        CREATE_ARRAY(arr);
        for (int i = 0; i < ARRAY_SIZE; i++) {
            printf("%d\n", arr[i]);
        }
    #else
        CREATE_ARRAY(arr);
    #endif

    return 0;
}
