#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[80];
    fgets(str, sizeof(str), stdin);
    int k=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            continue;
        }
        str[k++]=str[i];
    }
    str[k]='\0';
    printf("%s",str);
}