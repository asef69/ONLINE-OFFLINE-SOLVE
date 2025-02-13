#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int x, n;
    scanf("%d %d", &x, &n);

    double sum = 0.0;

    for (int i = 0; i <= n; i++) {
        double term = pow(-1, i) * pow(x, i) / factorial(i);
        sum += term;

        for (int j = 0; j <= i; j++) {
            if (j > 0) {
                printf("%c", (j % 2 == 1) ? '-' : '+');
            }
            printf("%g", pow(x, j) / factorial(j));
        }
        printf("\n");
    }

    printf("sum=%.4lf\n", sum);

    return 0;
}
