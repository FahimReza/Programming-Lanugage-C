/*
Note: 
------------------------------------------------------------
> None of the variable allocate memory during compile time. (Memory will be allocated during run time only)
> Static Memory Allocation is just a Fixed Size Variable. 
> Every Variable is Static Variable. (After declaring a variable, we can't change the size of the memory block)
> Dynamic Memory Allocation means we can increase or decrease the size of the memory. 
> We need to take the help of stdlib.h library to allocate and deallocate the memory. 
    1. malloc() //Use to allocate memory to Structures (User Defined Data Types)
    2. calloc() //Use to allocate memory to Arrays (Drived Data Types)
    3. realloc() //Increase or Decrease the Size of Array 
    4. free() //Deallocates the memory previously allocated by a call to calloc, malloc, or realloc.

Function Prototype: 
------------------------------------------------------------
1. void* malloc(size_t size) [size_t is unsigned integer and void* is a generic pointer]
    > On Success = Return base address of the Memory Block 
    > On Failure = Return NULL Pointer 

Read: 
------------------------------------------------------------
> When a pointer pointing to the structure, we can't use the dot(.) operator to read the element. 
> We have to use Arrow (->) operator. 
> If any ordinary variable is pointing to structure, we are using dot(.) operator to access the element. 
*/

