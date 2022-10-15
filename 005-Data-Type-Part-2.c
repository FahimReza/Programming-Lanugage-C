#include <stdio.h>

int main(void)
{
    printf("Memory Mapping....\n");

    signed char a = 129; 

    unsigned char b = 'A';
    unsigned char c = 'a';

    printf("Value is: %d\n", a); //Print the out-of-range value of a 1-byte memory 
    
    //ASCII = American Standard Code for Information Interchange
    printf("ASCII Value of %c is: %d\n", b, b); 
    printf("ASCII Value of %c is: %d\n", c, c); 

    return 0; 
}