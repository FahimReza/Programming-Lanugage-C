#include <stdio.h>
#include <limits.h>

/*
1. sizeof() -> returns the size 

We can pass: 
--------------------------------
    1) Variable 
    2) Data Types 
    3) Expression 
    4) Pointer 

*/

/*
2. limits of data_type (Header File Name: limits.h)
    a) Global Pre-Defined Variables
    b) Constant Variable (We can't modify)

    short:
        > SHRT_MIN
        > SHRT_MAX 
        > USHRT_MAX 

    int: 
        > INT_MIN 
        > INT_MAX
        > UINT_MAX

    long:
        > LONG_MIN
        > LONG_MAX
        > ULONG_MAX

    char: 
        > CHAR_MIN
        > CHAR_MAX 
        > UCHAR_MAX 
*/

int main(void)
{
    char c = 5;
    short s = 10; 

    printf("Size of \'char\' is: %d byte(s)\n", sizeof(c));
    printf("Size of \'short\' is: %d byte(s)\n", sizeof(s));
    printf("Size of \'float\' is: %d byte(s)\n", sizeof(float));
    printf("Size of \'char + short\' is: %d byte(s)\n", sizeof(c + s));

    printf("Limit of \'char\' minimum value is: %d byte(s)\n", CHAR_MIN);
    printf("Limit of \'unsigned char\' maximum value is: %d byte(s)\n", UCHAR_MAX);

    int n = 10;
    int * nptr = &n;

    // To find the memory allocated to pointers
    printf("Size of int-pointer is: %lu\n", sizeof(nptr));

    return 0;
}