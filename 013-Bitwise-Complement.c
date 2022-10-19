#include <stdio.h>

//symbol tilde (~). //til-da

int main(void)
{
    int binary_conversion(int);
    
    int a = 7; 

    /*
        ~1  =  0000 0001 
            ~
        -------------------------
        -2  = -0000 00010

        
        ~7  =  0000 0111 
                  ~
        -------------------------
        -8  = -0000 1000
    */

    printf("Bitwise complement of %d = %d\n",binary_conversion(a), binary_conversion(~a)); 
 


    return 0; 
}




int binary_conversion(int num)
{
    if (num == 0) return 0; 
    else return (num % 2) + 10 * binary_conversion(num / 2); 
}