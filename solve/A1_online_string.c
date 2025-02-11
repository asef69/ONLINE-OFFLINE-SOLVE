#include<stdio.h>
#include<string.h>
void removeDuplicates(char str[]){
    int i,j;
    char ch;
    for(int i=0;i<strlen(str);i++){
        ch=str[i];
        for(j=i+1;j<strlen(str);j++){
            if(ch==str[j]){
                for(int k=j;k<strlen(str);k++){
                    str[k]=str[k+1];
                }
                j--;
            }
        }
    }
}
int main(){
    char str[100];
    fgets(str, 100, stdin);
    removeDuplicates(str);
    printf("%s", str);
}