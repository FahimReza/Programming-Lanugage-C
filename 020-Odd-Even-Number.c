#include <stdio.h>

/*
    > An even number is an integer that is exactly divisible by 2. For example: 0, 8, -24
    > An odd number is an integer that is not exactly divisible by 2. For example: 1, 7, -11, 15
*/

int main(void)
{
    int num; 

    printf("Please input a number to check whether it is Odd or Even Number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("%d is an Even Number.\n", num);
    }
    else
    {
        printf("%d is a Odd Number.\n", num);
    }


    return 0; 
}

