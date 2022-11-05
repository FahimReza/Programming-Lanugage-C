/*
    Pointer
    ------------------------------------------------------------
    Pointer  is a variable which stores the address of another variable.  
    The size of the pointer depends on the architecture. However, in 32-bit architecture the size of a pointer is 2 byte.

    Declaration: 
    The pointer in c language can be declared using * (asterisk symbol / indirection operator). 

*/


#include <stdio.h> 

int main(void)
{
    int num = 10; 

    int *ptr; 

    ptr = &num; 

    printf("Address of ptr variable is: %u \n", ptr); 
    printf("Value of ptr variable is: %x \n", *ptr); 

    return 0; 
}