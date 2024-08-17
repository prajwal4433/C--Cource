// Make a program to input student information from user & enter into the file.

#include <stdio.h>
int main()
{

    FILE *fptr;
    fptr = fopen("Studentinfo.txt", "w");

    char name[100];
    int age;
    float cgpa;
    printf("Enter your name : ");
    scanf("%s", &name);
    printf("Enter your edge : ");
    scanf("%d", &age);
    printf("Enter your cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Name : %s\n", name);
    fprintf(fptr, "Age : %d\n", age);
    fprintf(fptr, "cgpa : %f", cgpa);

    fclose(fptr);

    return 0;
}