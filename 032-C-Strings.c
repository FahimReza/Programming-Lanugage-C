/*
    C-Strings
    ------------------------------------------------------------
    Strings are actually one-dimensional array of characters terminated 
    by a null character '\0'. 

    
    String Operation: 
    1. strcpy(s1, s2); //Copies string s2 into string s1.
    2. strcat(s1, s2); //Concatenates string s2 onto the end of string s1.
    3. strlen(s1); //Returns the length of string s1.
    4. strcmp(s1, s2); //Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.
    5. strchr(s1, ch); //Returns a pointer to the first occurrence of character ch in string s1.
    6. strstr(s1, s2); //Returns a pointer to the first occurrence of string s2 in string s1.


*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("C Strings.\n\n");

    char msg1[15] = "PiLabsAcademy";
    char msg2[15] = "Labs";

    printf("Message is: %s\n", msg1);

    return 0;
}

