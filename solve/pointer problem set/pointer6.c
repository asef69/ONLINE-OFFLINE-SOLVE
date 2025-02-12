#include<stdio.h>
#include<stdlib.h>
int atoi1(char *str){
    int result = 0;
    int sign = 1;
    int num;

    if (*str == '-') {
        sign = -1;
        str++;
    }

    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }

    num = result * sign;
    return num;
}
int main(){
    char str[100];
    fgets(str,100,stdin);
    printf("%d",atoi1(str));
}