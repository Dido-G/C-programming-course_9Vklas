#include <stdio.h>

#define DEBUG

#ifdef DEBUG
#define PRINT_DEBUG(arr, size) { \
    printf("Sorted array: "); \
    for (int i = 0; i < size; i++) printf("%d ", arr[i]); \
    printf("\nElements at indexes divisible by 3: "); \
    for (int i = 0; i < size; i++) {  \
        printf("%d ", arr[i]); \
    } \
    printf("\n"); \
}
#else
#define PRINT_DEBUG(arr, size)
#endif

void bubble_sort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int sum_elements(int* arr, int size) {
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        if (i % 3 == 0) {
            sum += arr[i];
            
        }
    }

    PRINT_DEBUG(arr, size);
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, size);

    int result = sum_elements(arr, size);
    printf("Sum of elements at indexes divisible by 3: %d\n", result);

    return 0;
}
