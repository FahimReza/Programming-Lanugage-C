#include <stdio.h>

int main(void)
{
    /*
        Modify Operator in C
        ==========================
        Unary Operator: 
        --------------------------
            ++, -- 
    */
    
    /*
        1. Pre-Increment and Pre-Decrement 
        2. Substitution 
        3. Evaluation 
        4. Assignment 
        5. Post-Increment and Post-Decrement 
    */

    int x = 10, y = 20, z = 0; //x = 10 >> x = 11, y = 20 >> y = 19, z = 0 >> z = 190 

    z = x++ * --y; 

    printf("%d, %d, %d", x, y, z); // 10 * 19 >> z = 190


    return 0;
}