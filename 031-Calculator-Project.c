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
float sum(float, float);
float subtract(float, float);
float multiply (float, float);
float division(float, float);

int main(void)
{
    float num1, num2;

    printf("Please input the first number: ");
    scanf("%f", &num1);

    printf("Please input the second number: ");
    scanf("%f", &num2);

    printf("Which arithmetic operation do you want to perform: ");
    
    char arithmetic_operation;
    scanf("%s", &arithmetic_operation);

    printf("\n");//New Line

    float ans;
    if(arithmetic_operation == '+') ans = sum(num1, num2);
    else if(arithmetic_operation == '-') ans = subtract(num1, num2);
    else if(arithmetic_operation == '*') ans = multiply(num1, num2);
    else if(arithmetic_operation == '/') ans = division(num1, num2);
    else printf("Input is invalid!\n");

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