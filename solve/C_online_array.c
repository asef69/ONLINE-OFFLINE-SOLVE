#include <stdio.h>

void findUnion(int a[], int m, int b[], int n) {
    int unionArray[m + n];
    int unionSize = 0;

    int i = 0, j = 0;

    while (i < m && j < n) {
        if (a[i] < b[j]) {
            if (unionSize == 0 || unionArray[unionSize - 1] != a[i]) {
                unionArray[unionSize++] = a[i];
            }
            i++;
        } else if (a[i] > b[j]) {
            if (unionSize == 0 || unionArray[unionSize - 1] != b[j]) {
                unionArray[unionSize++] = b[j];
            }
            j++;
        } else {
            if (unionSize == 0 || unionArray[unionSize - 1] != a[i]) {
                unionArray[unionSize++] = a[i];
            }
            i++;
            j++;
        }
    }

    while (i < m) {
        if (unionSize == 0 || unionArray[unionSize - 1] != a[i]) {
            unionArray[unionSize++] = a[i];
        }
        i++;
    }

    while (j < n) {
        if (unionSize == 0 || unionArray[unionSize - 1] != b[j]) {
            unionArray[unionSize++] = b[j];
        }
        j++;
    }

    printf("Union: {");
    for (int k = 0; k < unionSize; k++) {
        printf("%d", unionArray[k]);
        if (k < unionSize - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}

void findIntersection(int a[], int m, int b[], int n) {
    int intersectionArray[m + n];
    int intersectionSize = 0;

    int i = 0, j = 0;

    while (i < m && j < n) {
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            if (intersectionSize == 0 || intersectionArray[intersectionSize - 1] != a[i]) {
                intersectionArray[intersectionSize++] = a[i];
            }
            i++;
            j++;
        }
    }

    printf("Intersection: {");
    for (int k = 0; k < intersectionSize; k++) {
        printf("%d", intersectionArray[k]);
        if (k < intersectionSize - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}

int main() {
    int m, n;

    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    findUnion(a, m, b, n);
    findIntersection(a, m, b, n);

    return 0;
}