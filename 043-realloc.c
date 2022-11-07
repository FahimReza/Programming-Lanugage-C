/*
Declaration: 
------------------------------------------------------------
    void *realloc(void *ptr, size_t size) [size_t is unsigned integer and void* is a generic pointer]

Parameters: 
------------------------------------------------------------
    > ptr − This is the pointer to a memory block previously allocated with malloc, calloc or realloc to be reallocated. 
        If this is NULL, a new block is allocated and a pointer to it is returned by the function.
    > size − This is the new size for the memory block, in bytes. 
        If it is 0 and ptr points to an existing block of memory, the memory block pointed by ptr is deallocated 
        and a NULL pointer is returned. 

Return Value: 
------------------------------------------------------------
    > This function returns a pointer to the newly allocated memory, or NULL if the request fails.
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

    int *newPtr = (int *) realloc(ptr, (num/2)*sizeof(int)); //Reallocated Array Size 

    printf("Previous Block Address: %d, New Address: %d\n", ptr, newPtr);

    for(int i = 0; i<num; i++) printf(" %d", newPtr[i]); 

    


    return 0;
}