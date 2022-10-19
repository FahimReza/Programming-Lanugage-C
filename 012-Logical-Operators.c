#include <stdio.h>

int main(void)
{
    /*
    Logical Operator 
    --------------------------
        &&      Logical AND (&&)
        ||      Logical OR (||)
        !       Logical NOT (!)
    */
    
    int num1 = 30; 
    int num2 = 5; 

    printf("Logical Operator\n");
    printf("Value is = %d\n", num1 && num2); //Returns true, if all conditions satisfied 
    printf("Value is = %d\n", num1 || num2); //Returns true, if both or one of the condition(s) satisfied 
    printf("Value is = %d\n", !num1); //Returns true, if condition not satisfied


    return 0; 
}