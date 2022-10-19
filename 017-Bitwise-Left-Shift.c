#include <stdio.h>

//symbol tilde (~). //til-da

int main(void)
{
    int binary_conversion(int);
    
    int a = 3; //Right Shift of 'a' 
    int b = 5; //Right Shift by 'b' 

    /*
        1 << 0  = 0000 0001 << 0 
        -------------------------
             1  = 0000 00001

        
        1 << 1  = 0000 0001 << 1 
        -------------------------
             2  = 0000 0010
    */

    printf("Bitwise Left-Shift of %d << %d = %d\n",binary_conversion(a), b, binary_conversion(1 << b)); //Set only bit-a with all others to zero.  

    printf("Bitwise Left-Shift of %d << %d = %d\n",binary_conversion(a), b, binary_conversion(a | (1 << b))); //Set bit-b with unchanged all other bit-of-a.   



    return 0; 
}




int binary_conversion(int num)
{
    if (num == 0) return 0; 
    else return (num % 2) + 10 * binary_conversion(num / 2); 
}