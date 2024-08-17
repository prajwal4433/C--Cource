// Convert celsius in to farnite.(celsius*9.5+32)

#include <stdio.h>

float calculateTemp(float celsius);

int main()
{
    float far = calculateTemp(32);
    printf("far is : %f", far);
    return 0;
}

float calculateTemp(float celsius)
{
    float far = celsius * (9.0 / 5.0) + 32;
    return far;
}