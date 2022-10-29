#include <stdio.h>

/*
    Array
    > Program to find maximum and minimum element in array


*/

int main(void)
{
    int a = 34; 
    a = 39;
    
    int arrayVariable[5] = {0, 1, 2, 3, 4}; 
   
    int sizeArray = sizeof(arrayVariable) / 4; //Each integer variable occupy 4-byte of memory. 

    int max = arrayVariable[0], min = arrayVariable[0]; 
    
    for(int i=1; i<sizeArray; i++)
    {
        if(arrayVariable[i] > max) max = arrayVariable[i];
        if(arrayVariable[i] < min) min = arrayVariable[i];
    }

    printf("Minimum value is = %d\n", min);
    printf("Maximum value is = %d\n", max);
    






    return 0; 
}

