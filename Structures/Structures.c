// Structure :  A collection of values of different data types.

#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;

    s1.roll = 1214;
    s1.cgpa = 7.63;
    strcpy(s1.name, "Prajwal");

    printf("Student name is : %s\n", s1.name);
    printf("Student roll no is : %d\n", s1.roll);
    printf("Student cgpa is : %f\n", s1.cgpa);

    return 0;
}