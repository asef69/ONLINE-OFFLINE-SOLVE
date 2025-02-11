#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char s1[100], s2[100];
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
    
    double n1=atof(s1),n2=atof(s2);
    printf("%f\n",n1+n2);
}