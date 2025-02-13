#include <stdio.h>
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int binomial_coefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}
int main(){
    int n;
    scanf("%d",&n);
    int k=n/2;
    int max=binomial_coefficient(n,k);
    for(int i=0;i<=n;i++){
        int k=i;
        int star=binomial_coefficient(n,k);
        for(int i=0;i<(max-star);i++){
            printf(" ");
        }
        for(int i=0;i<star;i++){
            printf("*");
        }
        printf("\n");
    }
}
