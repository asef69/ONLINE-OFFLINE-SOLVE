#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int index,len;
    scanf("%d %d",&index,&len);
    if(len==0){
        printf("%s",str);
    }
    else{
        for(int i=index-1;i<index+len-1;i++){
            printf("%c",str[i]);
        }
    }
}