
#include <stdio.h> 

int main(void)
{
    void swap(int*, int*);
    
    int num1 = 10; 
    int num2 = 20; 

    printf("Before Swap, the value is: %d and %d\n", num1, num2); 

    swap(&num1, &num2);

    printf("After Swap, the value is: %d and %d\n", num1, num2); 

    return 0; 
}


void swap(int* x, int* y)
{
    int temp = *x; 

    *x = *y; 
    *y = temp; 
}