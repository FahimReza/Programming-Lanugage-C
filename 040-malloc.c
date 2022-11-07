/*
Declaration: 
------------------------------------------------------------
    void *malloc(size_t size) [size_t is unsigned integer and void* is a generic pointer]

Parameters: 
------------------------------------------------------------
    > size − This is the size of the memory block, in bytes.

Return Value: 
------------------------------------------------------------
    > This function returns a pointer to the allocated memory, or NULL if the request fails.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num; 

    printf("Enter the Size of Array: ");
    scanf("%d", &num); 

    int *ptr = (int *) malloc(num * sizeof(int)); //Dynamically Allocated Array Size 

    for(int i = 0; i<num; i++) ptr[i] = i + 1;

    for(int i = 0; i<num; i++) printf(" %d", ptr[i]); 

    


    return 0;
}