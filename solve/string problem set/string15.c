#include<stdio.h>
#include<string.h>
int strindex(char *str,char *ptr){
    int idx1=strlen(str)-1;
    int idx2=strlen(ptr)-1;
    int start=0,end=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ptr[0]){
            start=i;
            for(int j=0;ptr[j]!='\0';j++){
                if(str[i++]!=ptr[j]){
                    break;
                }
            }
        }
    }
    return start;

}
int main(){
    char str[100];
    fgets(str, 100, stdin);
    char ptr[100];
    fgets(ptr, 100, stdin);
    printf("%d\n",strindex(str,ptr));
}