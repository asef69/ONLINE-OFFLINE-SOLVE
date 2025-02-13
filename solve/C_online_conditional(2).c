#include<stdio.h>
#include<math.h>
int main()
{
    int units;
    float bill = 0;
    printf("Enter consumed units: ");
    scanf("%d", &units);

    if (units > 500)
    {
        bill += (units - 500) * 7;
        units = 500;
    }
    if (units > 300)
    {
        bill += (units - 300) * 5;
        units = 300;
    }
    if (units > 100)
    {
        bill += (units - 100) * 2.5;
        units = 100;
    }
    bill += units * 2;

    printf("Bill: BDT %.2f Tk\n", bill);
}
