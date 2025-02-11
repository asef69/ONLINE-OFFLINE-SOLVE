#include <stdio.h>
#include <string.h>

int countOccurrences(char *sentence, char *word) {
    int count = 0;
    char *token = strtok(sentence, " ");
    
    while (token != NULL) {
        if (strcmp(token, word) == 0) {
            count++;
        }
        token = strtok(NULL, " ");
    }
    
    return count;
}

int main() {
    char sentence[1000], word[100];

    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    printf("Enter the word to count: ");
    scanf("%s", word);

    sentence[strcspn(sentence, "\n")] = 0;
    
    int result = countOccurrences(sentence, word);
    printf("%d\n", result);
    
    return 0;
}
