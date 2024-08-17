// Create a sring firstName & lastName to stores details of user & print all the charcater using loop.

#include <stdio.h>

void printS(char arr[]);

int main()
{

    char firstName[] = "Prajwal";
    char lastName[] = "Shinde";

    printS(firstName);
    printS(lastName);

    return 0;
}

void printS(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}