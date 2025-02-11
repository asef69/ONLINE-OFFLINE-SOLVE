#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[5];
    fgets(str, sizeof(str), stdin);
    if(str==NULL || str[0]=='\n'){
        return 0;
    }
    int integer=atoi(str);
    printf("%d",integer);
}