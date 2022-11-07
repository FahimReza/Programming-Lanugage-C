/*
Declaration: 
------------------------------------------------------------
void *calloc(size_t nitems, size_t size) 
    > nitems − This is the number of elements to be allocated.
    > size − This is the size of elements.
    
    > size_t is unsigned integer 
    > void* is a generic pointer

Parameters: 
------------------------------------------------------------
    > This function returns a pointer to the allocated memory, or NULL if the request fails. 

Return Value: 
------------------------------------------------------------
    > This function returns a pointer to the allocated memory, or NULL if the request fails. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int *numPtr;
    
    printf("Number of elements to be entered: "); 
    scanf("%d", &num);

    numPtr = (int*) calloc(num, sizeof(int));

    printf("\nEnter %d Numbers: ", num); 
    for(int i=0; i<num; i++) scanf("%d", &numPtr[i]);

    printf("\nYou have entered: "); 
    for(int i=0; i<num; i++) printf("%d ", numPtr[i]);
    
    free(numPtr);
    

    return 0;
}