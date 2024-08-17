// print the sum of n natural numbers.
#include <stdio.h>
int main()
{

    int sum = 0;
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("sum is : %d", sum);
    return 0;
}