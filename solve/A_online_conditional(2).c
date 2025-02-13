#include<stdio.h>
int main(){
    int sales;
    scanf("%d",&sales);
    double commission=0;
    if(sales<=20000){
        printf("Commission: BDT 0 Tk");
        return 0;
    }

    else if(sales>20000&&sales<=50000){
        commission+=(sales-20000)*5/100;
    }
    else if(sales>50000&&sales<=100000){
        commission+=(30000*5/100)+(sales-50000)*7/100;
    }
    else{
        commission+=(30000*5/100)+(50000*7/100)+(sales-100000)*10/100;
    }
    printf("Commission: BDT %lf Tk",commission);

}
