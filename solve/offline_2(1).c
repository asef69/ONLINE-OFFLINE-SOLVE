#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if ((a[i] == b[k] && a[j] == b[l]))
                    {
                        count++;
                    }
                }
            }
        }
    }
    printf("%d", count);
}
