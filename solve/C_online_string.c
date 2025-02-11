#include<stdio.h>
#include<string.h>
void compressString(char str[]){
    int count=1;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==str[i+1]){
            count++;
        }
        else{
            if(count==1) printf("%c",str[i]);
            else{
            printf("%c%d",str[i],count);
            count=1;
            }
        }
    }
}
int main(){
    char str[100];
    fgets(str,100,stdin);
    compressString(str);
}
