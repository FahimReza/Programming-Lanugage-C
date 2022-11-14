/*
    File
    ------------------------------------------------------------
    

    Syntax
    ------------------------------------------------------------
    FILE* <Identity>; 

    Access: 
    ------------------------------------------------------------
    1. fopen(); //Used to open a file in different modes 
        > fopen("path", "mode");
        > on-success: Return the address of file. 
        > on-failure: Return NULL pointer. 
    2. Mode 
        >> r = Open for reading 
            > If the file does not exist, fopen() returns NULL. 
        >> rb = Open for reading in binary mode
            > If the file does not exist, fopen() returns NULL. 
        >> w = Open for writing 
            > If the file exists, its contents are overwritten.
            > If the file does not exist, it will be created. 
        >> wb = Open for writing in binary mode. 
            > If the file exists, its contents are overwritten.
            > If the file does not exist, it will be created.
        >> a = Open for append. (Data is added to the end of the file)
            > If the file does not exist, it will be created.
        >> ab = Open for append in binary mode. (Data is added to the end of the file.)
            > If the file does not exist, it will be created. 
        >> r+ = Open for both reading and writing. 
            > If the file does not exist, fopen() returns NULL.
        >> rb+ = Open for both reading and writing in binary mode.
            > If the file does not exist, fopen() returns NULL.
        >> w+ = Open for both reading and writing.
            > If the file exists, its contents are overwritten.
            > If the file does not exist, it will be created.
        >> wb+ = Open for both reading and writing in binary mode.
            > If the file exists, its contents are overwritten.
            > If the file does not exist, it will be created.
        >> a+ = Open for both reading and appending.
            > If the file does not exist, it will be created.
        >> ab+ = Open for both reading and appending in binary mode.
            > If the file does not exist, it will be created. 
*/

#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
    FILE* fp; 

    fp = fopen("C:/Users/FAHIM/Desktop/test/test.txt", "w");

    if(fp == NULL) {printf("Error! Opening File!"); exit(1);} //exit() is declared on stdlib.h 
    else
    {
        fprintf(fp, "This file is edited by Fahim\n"); 
        fprintf(fp, "This file is edited by Reza\n"); 
    }

    fclose(fp); 


    return 0;
}