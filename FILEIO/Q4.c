// 2 numbers - a & b written in file . Write a profram to replace with their sum.

#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r");

    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);
    fptr = fopen("Test.txt", "w");

    fprintf(fptr, "%d", a + b);
    fclose(fptr);

    return 0;
}