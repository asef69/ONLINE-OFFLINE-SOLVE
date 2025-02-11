#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    gets(str);
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            freq[str[i]-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            printf("%c:%d\n",i+'a',freq[i]);
        }
    }
}