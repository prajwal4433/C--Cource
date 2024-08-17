// Use library function to calculate squre of a given by user.

#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("Enter no : ");
    scanf("%d", &n);

    printf(" %f\n", pow(n, 2));

    return 0;
}