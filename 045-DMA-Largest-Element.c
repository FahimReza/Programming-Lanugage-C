#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int *ptr;

    printf("Please input the total number of Array Elements: ");
    scanf("%d", &num);

    ptr = (int *) malloc(num * sizeof(num)); 

    if(ptr == NULL) 
    {
        printf("Error! Memory not Allocated.\n"); 
        exit(0);
    }
    else
    {
        for(int i = 0; i<num; i++) 
        {
            printf("Enter Number %d: ", i + 1); 
            scanf("%d", ptr + i);
        }


    }

    for(int i = 1; i<num; i++) 
    {
        if(*ptr < *(ptr + i)) *ptr = *(ptr + i);
    }

    printf("The Largest Number is: %d\n", *ptr);

    free(ptr);


    return 0;
}