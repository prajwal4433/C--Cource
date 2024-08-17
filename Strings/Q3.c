// Write a program to print a user name and its length.

#include <stdio.h>

int printLength(char arr[]);

int main()
{
    char name[50];
    printf("Enter your name : ");
    fgets(name, 50, stdin);
    printf("username is : ");
    puts(name);

    printf("count is %d ", printLength(name));
    return 0;
}

int printLength(char arr[])
{

    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {

        count++;
    }
    return count - 1;
}
