#include <stdio.h>

/*
    Array
    > Drived Data Type.  
    > We can store multiple value in a single variable. 
    > Students number, mobile number, students id number. 
    > Using an array, we can store n-number of elements (Only homogenous data is allowed). 
    > Syntax: 
        > data_type Identity [size of the array] 
    > Array elements always process with the help of index number. 
    > Index number always start with 0 and maximum is [size - 1].  
    > Array variable always hold the base address of the memory block. 
    > Array variable is called "Internal Pointer Variable". 
    > Local declaration with no assignment, variable holds garbage value. 
    > Global declaration with no assignment, variable holds zero for eatch array-elements. 
    > Global declaration with partial assignment, empty-elemnets holds zero for eatch array-elements.
    > Using iterator we can process array-elements for easy use. 


*/

int main(void)
{
    int a = 34; 
    a = 39;
    
    int arrayVariable[5] = {0, 1, 2, 3, 4}; 
   
    printf("Value is: %d\n", arrayVariable[2]);




    char arrayName[5] = {'H', 'e', 'l', 'l', 'o'};

    printf("Value is: %c\n", arrayName[1]);

    

    int i = 0;
    while(arrayName[i] != '\0')
    {
        printf("%c", arrayName[i]);

        i++;
    }
    printf("\n");


    return 0; 
}

