#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    char *vowels = (char *)malloc(len * sizeof(char));
    int vowelCount = 0;

    for (char *p = str; *p != '\0'; p++) {
        if (isVowel(*p)) {
            vowels[vowelCount++] = *p;
        }
    }

    for (int i = 0, j = vowelCount - 1; i < j; i++, j--) {
        char temp = vowels[i];
        vowels[i] = vowels[j];
        vowels[j] = temp;
    }

    int vowelIndex = 0;
    for (char *p = str; *p != '\0'; p++) {
        if (isVowel(*p)) {
            *p = vowels[vowelIndex++];
        }
    }

    printf("%s\n", str);

    if (isVowel(str[0])) {
        char firstVowel = str[0];
        for (char *p = str; *(p + 1) != '\0'; p++) {
            *p = *(p + 1);
        }
        str[len - 1] = firstVowel;
        str[len] = '\0';
    }

    printf("%s\n", str);

    free(vowels);

    return 0;
}
