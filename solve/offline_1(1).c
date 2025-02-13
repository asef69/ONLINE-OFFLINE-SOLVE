#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int n, number, mini = INT_MAX, maxi = 0, sum = 0, even = 0, odd = 0;
    float average;
    printf("How many numbers do you want to enter?");
    scanf("%d", &n);
    printf("Enter %d numbers:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number);
        sum += number;
        if (number % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (number > maxi)
        {
            maxi = number;
        }
        if (number < mini)
        {
            mini = number;
        }
    }
    average = (float)sum / n;
    printf("Minimum Number: %d\n", mini);
    printf("Maximum Number: %d\n", maxi);
    printf("Sum of all Numbers: %d\n", sum);
    printf("Average : %f\n", average);
    printf("Even Number Count: %d\n", even);
    printf("Odd Number Count: %d\n", odd);
    return 0;
}
