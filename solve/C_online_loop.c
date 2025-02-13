#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    int series_sum1 = 0, series_sum2 = 0;

    for (int i = 1; i <= n; i++) {
        series_sum1 += (i % 2 == 1) ? (2 * i - 1) : -(2 * i - 1);
        series_sum2 += (i % 2 == 1) ? (2 * i) : -(2 * i);

        sum += series_sum1 * series_sum2;

        if (i > 1) {
            printf(" + ");
        }
        printf("(");
        for (int j = 1; j <= i; j++) {
            if (j > 1) {
                printf("%c", (j % 2 == 1) ? '+' : '-');
            }
            printf("%d", 2 * j - 1);
        }
        printf(")*(");
        for (int j = 1; j <= i; j++) {
            if (j > 1) {
                printf("%c", (j % 2 == 1) ? '+' : '-');
            }
            printf("%d", 2 * j);
        }
        printf(")");
    }

    printf("\nsum=%d\n", sum);

    return 0;
}
