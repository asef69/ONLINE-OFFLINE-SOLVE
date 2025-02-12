#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortNames(char **names, int n) {
    char *temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(*(names + i), *(names + j)) > 0) {
                temp = *(names + i);
                *(names + i) = *(names + j);
                *(names + j) = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    getchar();  
    
    char **names = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        *(names + i) = (char *)malloc(100 * sizeof(char));
        printf("Enter name %d: ", i + 1);
        fgets(*(names + i), 100, stdin);
        strtok(*(names + i), "\n"); 
    }
    
    sortNames(names, n);
    
    printf("\nSorted Names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", *(names + i));
    }
    
    for (int i = 0; i < n; i++) {
        free(*(names + i));
    }
    free(names);
    
    return 0;
}
