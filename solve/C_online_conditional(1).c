#include<stdio.h>
#include<math.h>
int main()
{
    float cx, cy, radius, x, y, distance;
    printf("Enter circle center: ");
    scanf("%f %f", &cx, &cy);
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Enter point coordinates: ");
    scanf("%f %f", &x, &y);

    distance = sqrt(pow(x - cx, 2) + pow(y - cy, 2));

    if (distance < radius)
    {
        printf("Point is inside the circle\n");
    }
    else if (distance == radius)
    {
        printf("Point is on the circle\n");
    }
    else
    {
        printf("Point is outside the circle\n");
    }
}
