#include <stdio.h>

int main(void)
{
    int binary_conversion(int num);
    
    int a = 2; 
    int b = 3;
    int c;

    /*
        a  = 0000 0000
                 &
        b  = 0000 0011
        ---------------
             0000 0000

        
        a  = 0000 0010
                 &
        b  = 0000 0011
        ---------------
             0000 0010
    
    */

    printf("\'a\' & \'b\' = %d\n", a & b); 


    
    printf("\'c\' = %d\n", binary_conversion(c)); 
    printf("\'c\' & \'1\' = %d\n", binary_conversion(c & 255)); //Thus we can find the unknown value for variable 'c';



    return 0; 
}


int binary_conversion(int num)
{
    if (num == 0) return 0; 
    else return (num % 2) + 10 * binary_conversion(num / 2); 
}