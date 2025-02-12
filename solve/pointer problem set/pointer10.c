#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int stend(char *str,char *name){
   int i=strlen(str)-1;
    int j=strlen(name)-1;
    while(i>=0 && j>=0){
        if(str[i]!=name[j]){
            return 0;
        }
        i--;
        j--;
    }
    return 1;
}
int main(){
    char *str=(char *)malloc(100*sizeof(char));
    fgets(str,100,stdin);
    char *name=(char *)malloc(100*sizeof(char));
    fgets(name,100,stdin);
    printf("%d",stend(str,name));
}