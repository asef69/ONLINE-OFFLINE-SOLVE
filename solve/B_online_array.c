#include <stdio.h>
#include <string.h>

void longestPalindromicSubarray(int arr[], int n)
{
    int dp[n][n];
    memset(dp, 0, sizeof(dp));

    int maxLength = 1;
    int start = 0;

    for (int i = 0; i < n; i++)
    {
        dp[i][i] = 1;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            dp[i][i + 1] = 1;
            maxLength = 2;
            start = i;
        }
    }

    for (int length = 3; length <= n; length++)
    {
        for (int i = 0; i < n - length + 1; i++)
        {
            int j = i + length - 1;

            if (arr[i] == arr[j] && dp[i + 1][j - 1])
            {
                dp[i][j] = 1;

                if (length > maxLength)
                {
                    maxLength = length;
                    start = i;
                }
            }
        }
    }

    printf("[");
    for (int i = start; i < start + maxLength; i++)
    {
        printf("%d", arr[i]);
        if (i < start + maxLength - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    longestPalindromicSubarray(arr, n);

    return 0;
}