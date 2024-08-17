#include <stdio.h>

int main()
{

    int age;
    printf("enter your ege \n");
    scanf("%d", &age);

    if (age >= 18 && age < 21)
    {
        printf("Adult");
    }
    else if (age < 40 && age > 21)

    {
        printf("Young");
    }
    else
    {
        printf("Teen");
    }

    return 0;
}