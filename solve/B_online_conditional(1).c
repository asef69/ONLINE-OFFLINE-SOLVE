#include <stdio.h>
#include <math.h>

int main()
{
    int c1x, c2x, r1, r2, c1y, c2y;

    printf("Circle1:\n");
    printf("Center: ");
    scanf("%d %d", &c1x, &c1y);
    printf("Radius: ");
    scanf("%d", &r1);

    printf("Circle2:\n");
    printf("Center: ");
    scanf("%d %d", &c2x, &c2y);
    printf("Radius: ");
    scanf("%d", &r2);

    int dx = c1x - c2x;
    int dy = c1y - c2y;
    int distance_squared = dx * dx + dy * dy;

    int sum_radii = r1 + r2;
    int sum_radii_squared = sum_radii * sum_radii;

    if (distance_squared == sum_radii_squared)
    {
        printf("Touch\n");
    }
    else if (distance_squared > sum_radii_squared)
    {
        printf("Separate\n");
    }
    else
    {
        printf("Intersect\n");
    }

    return 0;
}
