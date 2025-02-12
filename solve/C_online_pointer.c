#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *input=(char *)malloc(100*sizeof(char));
    printf("Enter the BCD string: ");
    scanf("%s", input);

    int len = strlen(input);
    if (len % 4 != 0)
    {
        printf("Invalid BCD string: length must be a multiple of 4.\n");
        return 1;
    }

    char *output = (char *)malloc((len / 4 + 1) * sizeof(char));
    char *outputPtr = output;

    for (char *p = input; p < input + len; p += 4)
    {
        int value = 0;
        for (int i = 0; i < 4; i++)
        {
            value = value * 2 + (*(p + i) - '0');
        }
        *outputPtr++ = value + '0';
    }

    *outputPtr = '\0';

    printf("Output: %s\n", output);

    free(output);

    return 0;
}
