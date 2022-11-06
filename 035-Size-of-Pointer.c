/*
    Compiler                    int                      Pointer
    ------------------------------------------------------------
    16-bit                      2-bytes                  2-bytes 
    32-bit                      4-bytes                  4-bytes
*/


#include <stdio.h> 

int main(void)
{
    int num = 10; 

    int *ptr; 

    ptr = &num; 

    printf("%u\n", sizeof(int*)); 

    return 0; 
}