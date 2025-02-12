#include <stdio.h>
#include <stdlib.h>

void maxCommSubArray(int *arr1, int n1, int *arr2, int n2, int **out, int *n3) {
    int maxLen = 0, endIdx = -1;
    int *dp = (int *)calloc((n1 + 1) * (n2 + 1), sizeof(int));
    
    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= n2; j++) {
            if (*(arr1 + i - 1) == *(arr2 + j - 1)) {
                *(dp + i * (n2 + 1) + j) = *(dp + (i - 1) * (n2 + 1) + (j - 1)) + 1;
                if (*(dp + i * (n2 + 1) + j) > maxLen) {
                    maxLen = *(dp + i * (n2 + 1) + j);
                    endIdx = i - 1;
                }
            }
        }
    }
    
    *n3 = maxLen;
    *out = (int *)malloc(maxLen * sizeof(int));
    for (int i = 0; i < maxLen; i++) {
        *(*out + i) = *(arr1 + endIdx - maxLen + 1 + i);
    }
    
    free(dp);
}

int main() {
    int n1, n2, *arr1, *arr2, *out, n3;
    
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    arr1 = (int *)malloc(n1 * sizeof(int));
    printf("Enter elements of first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", (arr1 + i));
    }
    
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    arr2 = (int *)malloc(n2 * sizeof(int));
    printf("Enter elements of second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", (arr2 + i));
    }
    
    maxCommSubArray(arr1, n1, arr2, n2, &out, &n3);
    
    printf("Longest common subarray: ");
    for (int i = 0; i < n3; i++) {
        printf("%d ", *(out + i));
    }
    printf("\n");
    
    free(arr1);
    free(arr2);
    free(out);
    
    return 0;
}