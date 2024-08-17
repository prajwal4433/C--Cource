// Ask the user to enter their full name & print it back to them.

#include <stdio.h>

int main()
{

    char name[50];
    printf("Please enter your name :");
    fgets(name, 50, stdin);
    printf("your name is :");
    puts(name);

    return 0;
}