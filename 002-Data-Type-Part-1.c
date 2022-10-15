#include <stdio.h>

int main(void)
{
    /*
        data_type Identifier;
        
        1. Primitive Data Type  
            1. int  
                1. short int [2-bytes] 
                    1. signed short int 
                    2. unsigned short int 
                2. int [2-bytes or 4-bytes] 
                    1. signed int 
                    2. unsigned int 
                3. long int [4-bytes] 
                    1. signed long int 
                    2. unsigned long int 
            2. char [1-bytes] 
                1. signed char 
                2. unsinged char 
            3. float 
                1. float [4-bytes] 
                2. double [8-bytes] 
                3. long double [10-bytes] 
            4. void
        2. Drived Data Type 
            1. Array 
            2. String 
            3. Pointer 
            4. Function 
        3. User Defined Data Types 
            1. Structure 
            2. Union
            3. TypeDef 
            4. Enum 
    */
    
    signed short int a; //Variable declaration 

    printf("Please input your age: ");
    
    scanf("%d", &a);
    printf("Your age is: %d\n", a);

    return 0;
}