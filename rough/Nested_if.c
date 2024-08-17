#include <stdio.h>
int main()
{
    int number;
    printf("Enetr your no = ");
    scanf("%d", &number);

    if (number >= 0)
    {
        printf("positive\n");

        if (number % 2 == 0)
        {
            printf("Even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    else
    {
        printf("Negetive\n");
    }

    return 0;
}