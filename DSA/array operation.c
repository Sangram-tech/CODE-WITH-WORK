#include <stdio.h>

void traverseArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertElement(int arr[], int size, int element, int position, int capacity) {
    if (size >= capacity) {
        printf("Insertion not possible. Array is full.\n");
        return size;
    }
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    return size + 1;
}

int deleteElement(int arr[], int size, int position) {
    if (position >= size || position < 0) {
        printf("Deletion not possible. Invalid position.\n");
        return size;
    }
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return size - 1;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5, capacity = 10;

    // Traversal
    traverseArray(arr, size);

    // Insertion
    size = insertElement(arr, size, 99, 2, capacity);
    printf("After insertion:\n");
    traverseArray(arr, size);

    // Deletion
    size = deleteElement(arr, size, 3);
    printf("After deletion:\n");
    traverseArray(arr, size);

    return 0;
}