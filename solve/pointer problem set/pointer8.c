#include <stdio.h>
#include <stdlib.h>

void my_atof(const char *str, float *num) {
    float result = 0.0;
    float fraction = 1.0;
    int sign = 1;

    if (*str == '-') {
        sign = -1;
        str++;
    }

    while (*str >= '0' && *str <= '9') {
        result = result * 10.0 + (*str - '0');
        str++;
    }

    if (*str == '.') {
        str++;
        while (*str >= '0' && *str <= '9') {
            fraction /= 10.0;
            result += (*str - '0') * fraction;
            str++;
        }
    }

    *num = result * sign;
}

int main() {
    char str[100];
    float num;

    printf("Enter a floating-point number as a string: ");
    fgets(str, sizeof(str), stdin);

    my_atof(str, &num);
    printf("The floating-point value is: %.4f\n", num);

    return 0;
}