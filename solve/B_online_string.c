#include<stdio.h>
#include<string.h>
int isRotation(char str1[],char str2[]){
    int len1=strlen(str1);
    int len2=strlen(str2);
    if(len1!=len2) return 0;
    char temp[2*len1+1];
    strcpy(temp,str1); 
    strcat(temp,str1);
    if(strstr(temp,str2)!=NULL) return 1;
    return 0;
}
int main(){
    char str1[100];
    char str2[100];
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);
    if(isRotation(str1, str2)) printf("Yes");
    else printf("No");
}