// Write the function to calculate sum ,product and avg of two numbers , print that int main function.

#include <stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);
int main()
{

    int a = 5, b = 5;
    int sum;
    int prod;
    int avg;
    doWork(a, b, &sum, &prod, &avg);
    printf("sum =%d\nproduct =%d\navg =%d", sum, prod, avg);

    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg)
{

    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}