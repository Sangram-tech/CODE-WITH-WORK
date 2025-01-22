#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    while (i < n1)
        arr3[k++] = arr1[i++];

    
    while (j < n2)
        arr3[k++] = arr2[j++];
}

int main() {
    int n1, n2;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter elements of first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter elements of second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int arr3[n1 + n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);

    printf("Array after merging: ");
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", arr3[i]);

    return 0;
}
