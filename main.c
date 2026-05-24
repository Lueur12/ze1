#include <stdio.h>

void findAndReplaceDuplicates(int* arr, int size, int replaceWith) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = replaceWith;
            }
        }
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5, 6, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original: ");
    printArray(arr, size);

    findAndReplaceDuplicates(arr, size, 0);

    printf("After: ");
    printArray(arr, size);

    return 0;
}
