#include<stdio.h>
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float max,min,second;
    if(a>b&&a>c){
        max=a;
        if(b>c) {
        min=c;
        second=b;
        }
        else {
            min=b;
            second=c;
        }
    }
    else if(b>a && b>c){
          max=b;
        if(a>c) {
        min=c;
        second=a;
        }
        else {
            min=a;
            second=c;
        }
    }
    else{
         max=c;
        if(a>b) {
        min=b;
        second=a;
        }
        else {
            min=a;
            second=b;
        }
    }
    if(min+second>max){
        printf("Valid\n");
    }
    else printf("Invalid");
}
