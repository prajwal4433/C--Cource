// calculate sum take a and b value from user (calculate using function).
#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a, b;
    printf("Enter no a : \n");
    scanf("%d", &a);
    printf("Enter no b : \n");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("Sum is :%d ", s);
}

int sum(int a, int b)
{
    return a + b;
}