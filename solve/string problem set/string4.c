#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            printf("\n");
            continue;
        }
        printf("%c",str[i]);
    }
}