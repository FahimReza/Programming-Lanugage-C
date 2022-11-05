/*
    Pointer
    ------------------------------------------------------------
    Pointer  is a variable which stores the address of another variable.  
    The size of the pointer depends on the architecture. However, in 32-bit architecture the size of a pointer is 2 byte.

    Types
    ------------------------------------------------------------
    1. Typed Pointer (Point to specific type of data only i.e int* -> int data, float* -> float data)
    2. Untyped Pointer (Point to any type of data only i.e void* also called as Generic Pointer)

    Declaration: 
    ------------------------------------------------------------
    The pointer in c language can be declared using * (asterisk symbol / indirection operator). 

    Operators: 
    ------------------------------------------------------------
    1. Asterisk Operator (*) -> Return the value inside a specific address. 
    2. Address Operator (&) -> Return the address of a particular variable. 
*/


#include <stdio.h> 

int main(void)
{
    int num = 10; 

    int *ptr; 

    ptr = &num; 

    printf("%u\n", num); 
    printf("%u\n", ptr); 
    printf("%u\n", &num); 
    printf("%u\n", &ptr); 
    printf("%u\n", *ptr); 
    printf("%u\n", *(&num)); 

    return 0; 
}