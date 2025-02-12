#include<stdio.h>
#include<stdlib.h>
void reverse(int *arr,int n){
    for(int i=n-1;i>=0;i--){
        printf("%d ",*(arr+i));
    }
}
int main(){
    int n; scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
    reverse(arr,n);
    free(arr);
}