#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct Emp 
    {
        int eno;
        char ename[20];
        float esal;

    };

    struct Emp* ptr;
    
    ptr = (struct Emp*) malloc(sizeof (struct Emp));

    if(ptr == NULL) printf("Out of Memory Error!\n"); 
    else
    {
        printf("Enter Employee Details: ");
        scanf("%d %s %f", &ptr->eno, ptr->ename, &ptr->esal);

        printf("Number: %d\n", ptr->eno);
        printf("Name: %s\n", ptr->ename);
        printf("Salary: %f\n", ptr->esal);
    } 
     
    


    return 0;
}