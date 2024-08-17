// write a function to calculate area of a squre, circle and rectangle.

#include <stdio.h>

float areaSqure(float side);
float areaCircle(float rad);
float areaRectangle(int a, int b);

int main()
{
    int a = 4;
    int b = 4;
    float side = 4.0;
    float rad = 8;
    printf("Area of squre : %f\n", areaSqure(side));
    printf("Area of circle : %f\n", areaCircle(rad));
    printf("Area of rectangle :%f\n", areaRectangle(a, b));

    return 0;
}

float areaSqure(float side)
{
    return side * side;
}

float areaCircle(float rad)
{
    return 3.14 * rad * rad;
}

float areaRectangle(int a, int b)
{
    return a * b;
}