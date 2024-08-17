// Write a program to store the  3 students information.

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
    strcpy(s1.name, "prajwal shinde");
    s1.roll = 1214;
    s1.cgpa = 7.63;

    printf("Student name is : %s\n", s1.name);
    printf("Student roll no is : %d \n", s1.roll);
    printf("Student cgpa id : %f\n", s1.cgpa);

    printf("\n");

    struct student s2;

    strcpy(s2.name, "Pavan");
    s2.roll = 1215;
    s2.cgpa = 7.52;

    printf("Student name is : %s\n", s2.name);
    printf("Student roll no is : %d \n", s2.roll);
    printf("Student cgpa id : %f\n", s2.cgpa);

    printf("\n");

    struct student s3;

    strcpy(s3.name, "Pravin");
    s3.roll = 1216;
    s3.cgpa = 8.36;

    printf("Student name is : %s\n", s3.name);
    printf("Student roll no is : %d \n", s3.roll);
    printf("Student cgpa id : %f\n", s3.cgpa);

    return 0;
}