#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char s1[100], s2[100];
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
    printf("%d",strcmp(s1,s2));
}