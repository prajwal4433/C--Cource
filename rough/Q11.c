// Add 18% gst in the price.

#include <stdio.h>

void calculateprice(float value);

int main()
{
    float value = 16.0;

    calculateprice(value);
}

void calculateprice(float value)
{
    value = value + (0.18 * value);
    printf("%f", value);
}
