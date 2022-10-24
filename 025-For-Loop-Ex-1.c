#include <stdio.h>

/*
    For Loop
    > Problem: Sum of n-Number using For-Loop.  
*/

int main(void)
{
    printf("\n\nSum of the n-Number\n\n");

    int count = 0;
    int answer = 0; 

    printf("Please input the n-Number: ");
    scanf("%d", &count);

    for(int i=0; i<=count; i++)
    {
        answer += i;
    }

    printf("SUM of (0 to %d) is: %d\n", count, answer); 


    return 0; 
}

