#include <stdio.h>

int main(void)
{
    /*
    Relational Operator
    --------------------------
        <, <=, >, >=, ==, != 
    */
    
    int num1 = 30; 
    int num2 = 5; 

    printf("Relational Operator\n");
    printf("Value is = %d\n", num1 > num2); //Greater than 
    printf("Value is = %d\n", num1 >= num2); //Greater than or equal to
    printf("Value is = %d\n", num1 < num2); //Less than
    printf("Value is = %d\n", num1 <= num2); //Less than or equal to
    printf("Value is = %d\n", num1 == num2); //Equal to
    printf("Value is = %d\n", num1 != num2); //Not equal to

    return 0; 
}