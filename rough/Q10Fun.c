// write two functions if user enter indian (i) then print Namaste if user enter French (f) then print Bonjour.

#include <stdio.h>

void namaste();
void bonjour();

int main()
{
    char ch;
    printf("Enter i for indian and f for french : ");
    scanf("%c", &ch);

    if (ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }

    return 0;
}

void namaste()
{
    printf("Namaste\n");
}

void bonjour()
{
    printf("Bonjour\n");
}