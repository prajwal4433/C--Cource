// Write a function to print reverse an array.

#include <stdio.h>

void reversearr(int arr[], int n);
void printArr(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    reversearr(arr, 6);
    printArr(arr, 6);
}

void reversearr(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstvalue = arr[i];
        int secoundvalue = arr[n - i - 1];
        arr[i] = secoundvalue;
        arr[n - i - 1] = firstvalue;
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}