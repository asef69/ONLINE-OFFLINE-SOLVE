#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseWords(char *a, char *t)
{
    int length = strlen(a);
    char *start, *end;
    if (length > 0 && *(a + length - 1) == '\n')
    {
        *(a + length - 1) = '\0';
        length--;
    }
    char *endword = a + length - 1;
    while (endword >= a && *endword == ' ')
    {
        endword--;
    }
    while (endword >= a)
    {
        end = endword;
        while (endword >= a && *endword != ' ')
        {
            endword--;
        }
        start = endword + 1;
        while (start <= end)
        {
            *t = *start;
            t++;
            start++;
        }
        while (endword >= a && *endword == ' ')
        {
            endword--;
        }
        if (endword >= a)
        {
            *t = ' ';
            t++;
        }
    }
    *t = '\0';
}

int main()
{
    char *a = (char *)malloc(100 * sizeof(char));
    char *t = (char *)malloc(100 * sizeof(char));
    fgets(a, 100, stdin);
    reverseWords(a, t);
    printf("%s", t);
    free(a);
    free(t);
    return 0;
}
