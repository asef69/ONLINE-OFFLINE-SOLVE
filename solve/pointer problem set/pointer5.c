#include<stdio.h>
#include<stdlib.h>
void stchr(char *s,char ch){
    int i=0;
    int flag=0,index;
    while(s[i]!='\0'){
        if(s[i]==ch){
            flag=1;
            index=i;
        }
        i++;
    }
    if(flag==1){
        printf("Character found at index %d",index);
    }
    else{
        printf("Character not found");
    }
}
int main(){
    char str[100];
    fgets(str,100,stdin);
    char ch;
    scanf("%c",&ch);
    stchr(str,ch);
}