#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strncpy(char *dest, const char *src, int n) {
    char *original_dest = dest;

    while (n > 0 && *src != '\0') {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }

    return original_dest;
}

int main() {
    char src[100];
    char dest[100];

    printf("Enter a source string: ");
    fgets(src, sizeof(src), stdin);

    size_t len = strlen(src);
    if (len > 0 && src[len - 1] == '\n') {
        src[len - 1] = '\0';
    }

    int n;
    printf("Enter the number of characters to copy: ");
    scanf("%d", &n);

    my_strncpy(dest, src, n);
    dest[n] = '\0';

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}