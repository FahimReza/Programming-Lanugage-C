#include <stdio.h>

/*
    Nested If-Block
    > Defining "If-Block" defining in another "If-Block" is called "Nested If-Block".
*/

int main(void)
{
    int num1, num2; 
    printf("Greater Number Checker Program\n\n");
    
    printf("Please input the First Number: ");
    scanf("%d", &num1);

    printf("Please input the Second Number: ");
    scanf("%d", &num2);

    if(num1 != num2)
    {
        if(num1 > num2)
        {
            printf("%d is greater than %d.\n", num1, num2);
        }
        else
        {
            printf("%d is greater than %d.\n", num2, num1);
        }
    }

    else
    {
        printf("%d and %d are equal.\n", num1, num2);
    }


    return 0; 
}

