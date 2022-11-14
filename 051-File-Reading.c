#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(void)
{
    char dataBuffer[500];
    
    FILE* fp; 

    fp = fopen("C:/Users/FAHIM/Desktop/test/test.txt", "r");

    if(fp == NULL) {printf("Error! Opening File!"); exit(1);} //exit() is declared on stdlib.h 
    else
    {
        while(fscanf(fp, "%[^\n] ", dataBuffer) != EOF) //Will read all characters until you reach \n (or EOF)
        {
            printf("%s\n", dataBuffer);
        }
    }

    fclose(fp); 


    return 0;
}