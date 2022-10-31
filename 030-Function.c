/*
    Functions
    ------------------------------------------------------------
    A function is a block of instructions. It is taking input. 
    After processing the input, it will produce the output. 


    Function Types: 
    1. No Arguments and No Return Values 
    2. With Arguments and No Return Values
    3. With Arguments and With Return Values
    4. No Arguments and With Return Values


*/

#include <stdio.h>

//Function Declaration is Mandatory 
int sum(int, int);
int subtract(int, int);
int multiply (int, int);
float division(int, int);

int main(void)
{
    printf("This is the main function.\n");

    //Function must be call
    float ans = sum(2, 3);

    printf("Answer is: %.2f\n", ans);

    return 0;
}

int sum(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply (int x, int y)
{
    return x * y;
}

float division(int x, int y)
{
    return (float)x / y;
}