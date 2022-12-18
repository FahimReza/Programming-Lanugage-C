/*
    Static in C
    ------------------------------------------------------------
    > Can be used with both variables and functions. 
    > The scope of the static-variable is throughout the program. 

    Can be used
    ------------------------------------------------------------
    1. Static global variable 
    2. Static Function 
    3. Static local variable 
        >> Scope is the sam as auto-local-variable. But memory is valid throughout the program. 
    4. Static member variable 
        >> Access by all the instances of a class. (not with a specific instance)
    5. Static method 
        >> Access by all the instances of a class. (not with a specific instance)

    Differences b/w Static and Global Variable
    ------------------------------------------------------------
    > Static variables are limited to the source file in which they are defined, i.e., they are not accessible by the other source files.
    > Static initialization (Initial value is 0) for both the Global and Local Variable.

    Differences b/w Static-Local and Static-Global Variable
    ------------------------------------------------------------
    > Static-Global: It is accessible throughout the program 
    > Static-Local: Same as auto-local-variable, but memory will be available throughout the program execution.
*/


#include <stdio.h> 

void myFunction(void); //Function prototype declaration 

static unsigned short int num;

int main(void)
{
    printf("Static Global Variable\t: %d\n", num);
    myFunction(); //Function Call

    printf("Static Global Variabl\t: %d\n", num);
    myFunction(); //Function Call

    printf("Static Global Variable\t: %d\n", num);
    myFunction(); //Function Call




    return 0;
}




void myFunction(void) //Function Body
{
    static unsigned short int count = 0;

    printf("Static Local Variable\t: %d\n", count);

    count++;
    num++;
    
}


