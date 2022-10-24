#include <stdio.h>

/*
    Do Loop
    >  The body of do...while loop is executed at least once. Only then, the test expression is evaluated.  
*/

int main(void)
{
    printf("\n\nPerform Head Cleaning of Your Printer\n\n");

    int status = 1; //Status may read from the sensor. 

    do
    {
        printf("Cleaning Printer Head in progress...\n");

    } while (!status);
    
    printf("Head is Clean Now.\n");

    return 0; 
}


/*
> The real life example:
    When you want to surf channel in TV you must minimum watch 1 channel in TV and then 
    the conditions ‘While' say that if you bored, you can do surf channel. 
*/
