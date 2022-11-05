#include <stdio.h> 

int main(void)
{
    char msg[100]; 
    int count = 0, wrd = 0; 

    printf("Please input the message to count the words: \n"); 
    fgets(msg, sizeof msg, stdin); 

    while(msg[count] != '\0')
    {
        if((msg[count] == ' ') || (msg[count] == '\n') || (msg[count] == '\t')) wrd++;

        count++;

    }

    printf("Total number of words in the message is : %d\n", wrd);

    return 0; 
}