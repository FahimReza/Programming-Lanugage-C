#include <stdio.h>

//symbol tilde (~). //til-da

int main(void)
{
    int binary_conversion(int);
    
    int a = 179; //Right Shift of 'a' 
    int b = 4; //Right Shift by 'b' 

    /*
        1 << 0  = 0000 0001 >> 0 
        -------------------------
             0  = 0000 00000

        
        1 << 1  = 0000 1000 >> 1 
        -------------------------
             4  = 0000 0100
    */

    printf("Bitwise Right-Shift of %d >> %d = %d\n",binary_conversion(a), b, binary_conversion(a >> b)); //Send MSB to LSB  



    return 0; 
}




int binary_conversion(int num)
{
    if (num == 0) return 0; 
    else return (num % 2) + 10 * binary_conversion(num / 2); 
}