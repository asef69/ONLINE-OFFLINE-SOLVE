#include<stdio.h>
#include<stdlib.h>
void itoa1(int n,char *arr){
    int i=0;
    while(n>0){
        arr[i]=n%10+'0';
        n=n/10;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%c",arr[j]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    char *arr=(char *)malloc(n*sizeof(char));
    itoa1(n,arr);
    free(arr);
}