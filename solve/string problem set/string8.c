#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str, 100, stdin);
    for(int i=0;str[i]!='\0';i++){
        if(!isupper(str[i])){
            printf("%c",toupper(str[i]));
        }
        else{
            printf("%c",str[i]);
        }
    }
    printf("\n");
    for(int i=0;str[i]!='\0';i++){
        if(!islower(str[i])){
            printf("%c",tolower(str[i]));
        }
        else{
            printf("%c",str[i]);
        }
    }
}