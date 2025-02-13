#include <stdio.h>

int main()
{
    int mark;
    printf("Mark: ");
    scanf("%d", &mark);

    int grade_range = mark / 10;

    switch (grade_range)
    {
    case 10:
    case 9:
    case 8:
        printf("Grade: A+\n");
        break;
    case 7:
        printf("Grade: A\n");
        break;
    case 6:
        printf("Grade: B\n");
        break;
    case 5:
        printf("Grade: C\n");
        break;
    case 4:
        printf("Grade: D\n");
        break;
    default:
        printf("Grade: F\n");
        break;
    }

    return 0;
}
