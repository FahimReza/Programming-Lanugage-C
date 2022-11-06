/*
    Pointer to Function
    ------------------------------------------------------------
    The declaration is completely depends on the function prototype. 

    Syntax
    ------------------------------------------------------------
    return_type (*Identity) (args_list)

    Declaration: 
    ------------------------------------------------------------
    
*/

#include <stdio.h> 

int main(void)
{
    float sum(float, float);
    float subtract(float, float);
    float multiply (float, float);
    float multiply (float, float);

    float (*ptr) (float, float);//Can points to any function which is taking 2 int args, and return int data. 

    ptr = &sum;
    float ans; 

    ans = ptr(30, 50);


    printf("Answer is: %.2f\n", ans);

    return 0; 
}


float sum(float x, float y)
{
    return x + y;
}

float subtract(float x, float y)
{
    return x - y;
}

float multiply (float x, float y)
{
    return x * y;
}

float division(float x, float y)
{
    return x / y;
}