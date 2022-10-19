#include <stdio.h>

int main(void)
{
    int binary_conversion(int num);

    int a = 2; 
    int b = 3;

    /*
        a  = 0000 0000
                 |
        b  = 0000 0011
        ---------------
             0000 0011

        
        a  = 0000 0010
                 |
        b  = 0000 0011
        ---------------
             0000 0011
    
    */

    printf("\'a\' | \'b\' = %d\n", binary_conversion(a | b)); 



    return 0; 
}




int binary_conversion(int num)
{
    if (num == 0) return 0; 
    else return (num % 2) + 10 * binary_conversion(num / 2); 
}