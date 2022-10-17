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

    int x = 5, y = 0; //x = 5 >> x = 6 >> x = 7, y = 0 >> y = 12 

    y = x++ + ++x; // 5 + 7 >> y = 12  
    
    printf("%d\n", y);
    printf("%d\n", x);

    return 0;
}