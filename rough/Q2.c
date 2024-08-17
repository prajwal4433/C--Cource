#include <stdio.h>
int main()
{
    int mark;
    printf("Enter your mark");
    scanf("%d", &mark);

    if (mark < 30)
    {
        printf("Grade C\n");
    }
    else if (mark > 30 && mark <= 70)
    {
        printf("Grade B\n");
    }
    else if (mark > 70 && mark < 90)
    {
        printf("Grade A\n");
    }
    else if (mark > 90 && mark < 100)
    {
        printf("Grade is A+\n");
    }

    return 0;
}