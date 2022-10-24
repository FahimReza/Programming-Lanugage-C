#include <stdio.h>

/*
    Do Loop
    >  The body of do...while loop is executed at least once. Only then, the test expression is evaluated.  
*/

int main(void)
{
    printf("\n\nDo-While Loop\n\n");

    int num = 0;

    do
    {
        printf("Value is: %d\n", num);

        num++;

    } while (num <= 5);
    


    return 0; 
}

