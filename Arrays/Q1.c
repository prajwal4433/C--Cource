// Write a program to enter price of 3 items & print their final cost with gst.

#include <stdio.h>

int main()
{

    float price[3];

    printf("Enter 3 price : \n");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("final cost item 1 = %f\n", price[0] + (0.18 * price[0]));
    printf("final cost item 2 = %f\n", price[1] + (0.18 * price[1]));
    printf("final cost item 3 = %f\n", price[2] + (0.18 * price[2]));
    return 0;
}