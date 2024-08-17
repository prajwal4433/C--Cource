#include <stdio.h>
int main()
{
    int day;
    printf("Enter no between 1-7 = ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wensday\n");
        break;
    case 4:
        printf("Thusrday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Satarday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Enetr valid no");
    }
}