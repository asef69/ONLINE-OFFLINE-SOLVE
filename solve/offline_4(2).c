#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void mode(int n)
{

    int *A = (int *)calloc(10001, sizeof(int));
    if (A == NULL)
    {
        return;
    }

    int max_frequency = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        if (num < 0 || num > 10000)
        {
            return;
        }

        *(A + num) += 1;

        if (*(A + num) > max_frequency)
        {
            max_frequency = *(A + num);
        }
    }

    for (int i = 0; i <= 10000; i++)
    {
        if (*(A + i) == max_frequency)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    free(A);
}

int main()
{
    int n;

    scanf("%d", &n);

    if (n <= 0)
    {
        return 0;
    }

    mode(n);

    return 0;
}
