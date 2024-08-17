// calculate percentage.

#include <stdio.h>

int calPercentage(int a, int b, int c);
int main()
{
    int a = 25;
    int b = 56;
    int c = 96;
    printf("percentage is : %d ", calPercentage(a, b, c));
    printf("%c", '%');
    return 0;
}

int calPercentage(int a, int b, int c)
{
    return ((a + b + c) / 3);
}