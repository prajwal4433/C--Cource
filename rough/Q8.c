// keep taking numbers as a input from user until user enters an odd number.

#include <stdio.h>
int main()

{
    int n;
    do
    {
        printf("Enter no : ");
        scanf("%d", &n);

        if (n % 2 != 0)
        {
            break;
        }

    } while (1);
    printf("Thank you\n");
}