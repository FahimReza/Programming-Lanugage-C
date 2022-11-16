
#include <stdio.h> 

const float PI = 3.14;

int main(void)
{
    float areaCircle(int);

    float radius; 

    printf("Radius of the Circle: "); 
    scanf("%f", &radius); 

    printf("Area of a Circle is: %.2f\n", areaCircle(radius));

    return 0; 
}


float areaCircle(int radius)
{
    return PI * radius * radius;
}