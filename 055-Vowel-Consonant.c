#include <stdio.h> 

int main(void)
{
    char c;

    printf("Please Input an Alphabet: "); 
    scanf("%c", &c); 

    if((c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U') || (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')) printf("%c is = Vowel", c); 
    else printf("%c is = Consonant", c); 


    return 0;
}

