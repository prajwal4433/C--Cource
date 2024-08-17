// make a program to read 5 intigers from a file.

#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    int n;
    fscanf(fptr, "%d", &n);
    printf("%d\n", n);
    fscanf(fptr, "%d", &n);
    printf("%d\n", n);
    fscanf(fptr, "%d", &n);
    printf("%d\n", n);
    fscanf(fptr, "%d", &n);
    printf("%d\n", n);
    fscanf(fptr, "%d", &n);
    printf("%d\n", n);

    fclose(fptr);
}