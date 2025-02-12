#include <stdio.h>
#include <stdlib.h>

size_t strcspn_custom(const char *src, const char *search) {
    const char *p = src;
    while (*p) {
        const char *s = search;
        while (*s) {
            if (*p == *s) {
                return p - src;
            }
            s++;
        }
        p++;
    }
    return p - src;
}

size_t strlen_custom(const char *str) {
    size_t len = 0;
    while (*str++) {
        len++;
    }
    return len;
}

void remove_newline(char *str) {
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main() {
    char src[100];
    char search[100];

    printf("Enter the source string: ");
    fgets(src, sizeof(src), stdin);
    remove_newline(src);

    printf("Enter the search string: ");
    fgets(search, sizeof(search), stdin);
    remove_newline(search);

    size_t length = strcspn_custom(src, search);
    printf("Length of initial segment without any characters from search string: %zu\n", length);

    return 0;
}