// Write function to count the number of odd number in an array.

#include <stdio.h>
int countNum(int arr[], int n);

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};

    printf("%d", countNum(arr, 6));
    return 0;
}

int countNum(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }

    return count;
}