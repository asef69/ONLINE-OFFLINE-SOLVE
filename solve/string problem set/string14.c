#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int strend(char *str,char *ptr){
    int j=strlen(str)-1;
    for(int i=strlen(ptr)-1;ptr[i]!='\0';i--){
        if(ptr[i]!=str[j--]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char str[100];
    fgets(str, 100, stdin);
    char ptr[100];
    fgets(ptr, 100, stdin);
    printf("%d\n",strend(str,ptr));
}