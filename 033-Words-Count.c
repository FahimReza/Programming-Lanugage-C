#include <stdio.h> 

int main(void)
{
    char msg[100]; 
    int count = 0, wrd = 0; 

    printf("Please input the message to count the words: \n"); 
    //gets(msg); //It can't hold neline! 
    fgets(msg, sizeof msg, stdin); 

    /*
        fgets(char *str, int n, FILE *stream)

            str - It is the variable in which the string is going to be stored
            n - It is the maximum length of the string that should be read
            stream - It is the filehandle, from where the string is to be read.
    */

    while(msg[count] != '\0')
    {
        if((msg[count] == ' ') || (msg[count] == '\n') || (msg[count] == '\t')) wrd++;

        count++;

    }

    printf("Total number of words in the message is : %d\n", wrd);

    return 0; 
}