#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *msg;

    msg = (char *) malloc(15); //Initial Memory Allocation 

    strcpy(msg, "Pi Labs Academy"); 
    printf("Size is: %u\n", sizeof(msg)); 
    printf("Message is: %s and Address is: %u", msg, msg); 

    //msg = (char *) realloc(msg, 50); //Reallocating Memory 
    strcat(msg, ", Preparing for the Future");

    printf("\nSize is: %u", sizeof(msg)); 
    printf("\nMessage is: %s and Address is: %u", msg, msg); 

    free(msg); //Deallocate allocated memory. 

    printf("\nSize is: %u", sizeof(msg)); 

    return 0; 
}