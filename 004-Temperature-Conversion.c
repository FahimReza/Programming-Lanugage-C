#include <stdio.h>

int main(void)
{
    float temp, cel2farh;

    printf("Please input the Temperature in Celsius: ");
    scanf("%f", &temp);

    //(C * 1.8) + 32 = F 

    cel2farh = (temp * 1.8) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit", temp, cel2farh);

    return 0;
}