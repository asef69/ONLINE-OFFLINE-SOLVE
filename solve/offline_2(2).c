#include <stdio.h>
#include<limits.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    printf("Initial Order:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int s;
    scanf("%d", &s);

    for (int i = 0; i < s; i++)
    {
        int x; scanf("%d",&x);
        if (x > 0)
        {
            int k = x;
            for (int i = 0, j = n - 1; i < j; j--, i++)
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            for (int i = 0, j = k - 1; i < j; j--, i++)
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            for (int i = k, j = n - 1; i < j; j--, i++)
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            printf("After instruction:");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
        }
        else
        {
            int k = -x;

            for (int j = 1; j <= k; j++)
            {
                int temp = a[0];
                for (int i = 0; i < n - 1; i++)
                {
                    a[i] = a[i+1];
                }
                a[n - 1] = temp;
            }
            printf("After instruction:");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
        }

    }
     int index;
     int max=a[0];
     for(int i=1;i<n;i++){
        if(a[i]<max){
            continue;
        }
        else{
            index=i+1;
            max=a[i];
        }
     }
     printf("Winner : Child %d",index);
}
