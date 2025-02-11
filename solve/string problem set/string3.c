#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    int space,k=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '&& str[i+1]==' '){
            continue;
        }
        str[k++]=str[i];
    }
    str[k]='\0';
    printf("%s",str);
}