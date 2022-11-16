/*
    Least Common Multiple (LCM)
*/

#include <stdio.h> 

int main(void)
{
    int num1=4, num2=6, max; 

    max = (num1 > num2)? num1 : num2;

    while(1)
    {
        if((max % num1 == 0) && (max % num2 == 0)) {printf("LCM of %d and %d is %d", num1, num2, max); break;} 
        max++;
    }


    return 0;
}