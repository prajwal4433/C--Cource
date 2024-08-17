// print hello world five times using recursion.

#include <stdio.h>

void printHellowr(int count);
int main()
{

    printHellowr(5);
    return 0;
}

// Recurssive function
void printHellowr(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("hello world\n");

    printHellowr(count - 1);
}