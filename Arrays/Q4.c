// Arrays as function arguments.

#include <stdio.h>
void printNumber(int arr[], int n);

int main()
{
    int arr[] = {1, 5, 6, 8, 4, 5};
    printNumber(arr, 6);

    return 0;
}

void printNumber(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}