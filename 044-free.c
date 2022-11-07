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

    free(ptr); //Deallocates the Memory


    return 0;
}