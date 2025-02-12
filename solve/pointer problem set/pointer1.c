#include <stdio.h>
#include <stdlib.h>

void _bubbleSort(int *items, int n, int *comp) {
    int i, j, temp;
    *comp = 0;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (*(items + j) > *(items + j + 1)) {
                temp = *(items + j);
                *(items + j) = *(items + j + 1);
                *(items + j + 1) = temp;
                (*comp)++;
            }
        }
    }
}

int main() {
    int n, i, comparisons;
    int *items;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    items = (int *)malloc(n * sizeof(int));
    if (items == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &items[i]);
    }

    _bubbleSort(items, n, &comparisons);

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", items[i]);
    }
    printf("\n");

    printf("Number of comparisons: %d\n", comparisons);

    free(items);

    return 0;
}