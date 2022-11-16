/*
    Greatest Common Divisor (GCD)
*/

#include <stdio.h> 

int main(void)
{
    int num1=81, num2=153, gcd; 

    for(int i = 1; ((i<= num1) && (i<= num2)); i++)
    {
        if((num1 % i == 0) && (num2 % i == 0)) gcd = i; 
    }

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);


    return 0;
}