#include <stdio.h>
#include <string.h>

int main(void)
{
    struct Student
    {
        int roll;
        char name[20];
        float result;
    };

    struct Student S1, S2;

    printf("Size is: %d\n\n", sizeof(S1));

    S1.roll = 111;
    strcpy(S1.name, "Fahim"); 
    S1.result = 3.94;

    S2.roll = 112;
    strcpy(S2.name, "Reza"); 
    S2.result = 3.90;

    printf("Student ID: %d\n", S1.roll);
    printf("Student Name: %s\n", S1.name);
    printf("Student Result: %.2f\n", S1.result);

    printf("\n");

    printf("Student ID: %d\n", S2.roll);
    printf("Student Name: %s\n", S2.name);
    printf("Student Result: %.2f\n", S2.result);



    return 0;
}