#include <stdio.h>
#include <stdlib.h>

void merge(int *arr1, int n1, int *arr2, int n2, int *out) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (*(arr1 + i) < *(arr2 + j)) {
            *(out + k) = *(arr1 + i);
            i++;
        } else {
            *(out + k) = *(arr2 + j);
            j++;
        }
        k++;
    }

    while (i < n1) {
        *(out + k) = *(arr1 + i);
        i++;
        k++;
    }

    while (j < n2) {
        *(out + k) = *(arr2 + j);
        j++;
        k++;
    }
}

int main() {
    int n1, n2, i;
    int *arr1, *arr2, *out;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    arr1 = (int *)malloc(n1 * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d sorted integers for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    arr2 = (int *)malloc(n2 * sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed\n");
        free(arr1);
        return 1;
    }

    printf("Enter %d sorted integers for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    out = (int *)malloc((n1 + n2) * sizeof(int));
    if (out == NULL) {
        printf("Memory allocation failed\n");
        free(arr1);
        free(arr2);
        return 1;
    }

    merge(arr1, n1, arr2, n2, out);

    printf("Merged sorted array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", out[i]);
    }
    printf("\n");

    free(arr1);
    free(arr2);
    free(out);

    return 0;
}