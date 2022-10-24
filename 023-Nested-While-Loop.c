#include <stdio.h>

/*
    Nested While Loop
    > Another While-Loop in a While-Loop. 
*/

int main(void)
{
    printf("\n\nControl Statement - Nested While Loop\n\n");
    
    int num1=1, num2=1;

    while(num1 <= 5)
    {
        num2 = 1;

        while (num2 <= 5)
        {
            printf("%d ", num2);

            num2++;
        }

        printf("\n");
        num1++;
        
    }


    return 0; 
}

