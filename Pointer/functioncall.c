// Pointers in function call.

#include <stdio.h>

int squre(int n);
int _squre(int *n);
int main()
{
    int number = 5;
    squre(number);
    printf("%d\n", number);
    _squre(&number);
    printf("%d\n", number);
    return 0;
}

int squre(int n)
{
    n = n * n;
    printf("squre : %d\n", n);
}

int _squre(int *n)
{
    *n = (*n) * (*n);

    printf("squre : %d\n", *n);
}