/*
The only condition in which using goto is preferable is, when we need to break the multiple loops using a single statement at the same time.
*/

#include <stdio.h> 

int main(void)
{

    unsigned short int count = 0; 

    takeOver:
    count++; 

    printf("%d\n", count);

    if(count < 10) goto takeOver;


    return 0;
}