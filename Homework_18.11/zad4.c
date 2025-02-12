#include <stdio.h>
#include <math.h>

int main() {
    long arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        arr[i] = (long)pow(arr[i], 4); 
    }

    printf(" Modifyed array: ");
    for (int i = 0; i < size; i++) {
        printf("%ld ", arr[i]);
    }
    printf("\n");

    return 0;
}
