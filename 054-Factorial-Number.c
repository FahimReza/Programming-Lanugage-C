#include <stdio.h> 

long factorial(int); 

int main(void)
{
    int num;
    long ans; 

    printf("Please Input the Number: "); 
    scanf("%d", &num); 

    ans = factorial(num); 

    printf("%d! is = %ld", num, ans); 


    return 0;
}


long factorial(int num)
{
    if(num == 0) return 1; 
    else return (num * factorial(num - 1));
}