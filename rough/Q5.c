// print the numers 0 to n, if n is given by user.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number : \n");
    scanf("%d", &n);

    // for loop
    for (int i = 0; i <= n; i++)
    {

        printf("%d\n", i);
    }

    // while loop

    int i = 1;
    while (i <= n)
    {
        printf("%d", i);
        i++;
    }

    return 0;
}