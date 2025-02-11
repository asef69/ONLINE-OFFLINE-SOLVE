#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    gets(str);
    strrev(str);
   int i,j;
    for(i=0; str[i]!='\0'; i++)
      {
  
         if(str[i+1]==' ' || str[i+1]=='\0')
         {
             for(j=i; j>=0 && str[j]!=' '; j--)
              printf("%c",str[j]);
         }
         else
         continue;
         printf(" ");
      }
}