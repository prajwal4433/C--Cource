

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
    // struct student ECE[100];

    // strcpy(ECE[0].name, "Prajwal");
    // ECE[1].roll = 1214;
    // ECE[2].cgpa = 7.63;
    // printf("Name is : %s", ECE[0].name);

    struct student s1 = {"Pavan", 1215, 7.5};
    printf("Name is : %s", s1.name);
}