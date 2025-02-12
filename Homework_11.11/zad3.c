#include <stdio.h>

#ifdef _WIN32
    #define OS_WINDOWS
#elif __linux__
    #define OS_LINUX
#elif __APPLE__
    #define OS_MACOS
#else
    #define OS_OTHER
#endif

// Bubble Sort
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

// Selection Sort
void selection_sort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

// Insertion Sort
void insertion_sort(int* arr, int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Reverse array
void reverse_array(int* arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void sort_array(int* arr, int size) {
    #ifdef OS_WINDOWS
        printf("Using Bubble Sort (Мехурчето) for Windows.\n");
        bubble_sort(arr, size);
    #elif defined(OS_LINUX)
        printf("Using Selection Sort (Пряка селекция) for Linux.\n");
        selection_sort(arr, size);
    #elif defined(OS_MACOS)
        printf("Using Insertion Sort (Пряко вмъкване) for MacOS.\n");
        insertion_sort(arr, size);
    #else
        printf("Using Reverse Array for Other OS.\n");
        reverse_array(arr, size);
    #endif
}

void print_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_array(arr, size);

    sort_array(arr, size);

    printf("Sorted array: ");
    print_array(arr, size);

    return 0;
}
