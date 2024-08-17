// Will the output address is same.

#include <stdio.h>

void printAdd(int *a);

int main()
{
    int a = 2;
    printAdd(&a);
    printf("%p\n", &a);

    return 0;
}

void printAdd(int *a)
{
    printf("%p\n", a);
}
