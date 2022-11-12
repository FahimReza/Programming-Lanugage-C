/*
    Structures
    ------------------------------------------------------------
    Structures is a User Defined data types, which holds more than one element of differents data types. 

    

    Syntax
    ------------------------------------------------------------
    struct <Identity>
    {
        data-type element1; 
        data-type element2; 
        data-type element3; 
        data-type element4; 
        -------------------
        --------
        ---
    };

    Access: 
    ------------------------------------------------------------
    Structures variable we can access with the help of accesser (dot operator). 
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    struct Student
    {
        int sno;
        char sname[20];
        float sres;
    };

    struct Student S1;

    S1.sno = 111;
    strcpy(S1.sname, "Fahim"); 
    S1.sres = 3.94;

    printf("Student ID: %d\n", S1.sno);
    printf("Student Name: %s\n", S1.sname);
    printf("Student Result: %.2f\n", S1.sres);


    return 0;
}