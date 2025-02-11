#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char s1[100], s2[100],s3[100],s4[100];
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
    fgets(s3, 100, stdin);
    fgets(s4, 100, stdin);
    int n1=atoi(s1),n2=atoi(s2),n3=atoi(s3),n4=atoi(s4);
    printf("%d\n",n1+n2+n3+n4);
}