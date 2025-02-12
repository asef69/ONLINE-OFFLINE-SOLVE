#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for (int *p = arr; p < arr + n; p++)
    {
        scanf("%d", p);
    }

    int x, b;
    scanf("%d %d", &x, &b);

    int newSize = n;
    if (b > 0)
    {
        newSize += b;
    }
    else if (b == 0)
    {
        newSize -= 1;
    }
    else if (b < 0)
    {
        newSize += -b;
    }

    int *res = (int *)malloc(newSize * sizeof(int));
    int *resPtr = res;

    for (int *p = arr; p < arr + n; p++)
    {
        if (p - arr == x)
        {
            if (b > 0)
            {
                for (int j = 0; j < b; j++)
                {
                    *resPtr++ = *p;
                }
            }
            else if (b == 0)
            {
                continue;
            }
            else
            {
                for (int j = 0; j < -b; j++)
                {
                    *resPtr++ = *p;
                }
            }
        }
        else
        {
            *resPtr++ = *p;
        }
    }

    if (b < 0)
    {
        int rotation = -b;
        int *temp = (int *)malloc((resPtr - res) * sizeof(int));
        for (int *p = res; p < resPtr; p++)
        {
            *(temp + (p - res)) = *p;
        }

        for (int *p = res; p <resPtr; p++)
        {
            *p = *(temp + ((p - res + rotation) % (resPtr - res)));
        }

        free(temp);
    }

    for (int *p = res; p < resPtr; p++)
    {
        printf("%d ", *p);
    }
    printf("\n");

    free(arr);
    free(res);

    return 0;
}
