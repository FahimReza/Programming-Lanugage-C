/*
    1. One-Day (24-Hour):
        > The earth completes one-rotation on its axis. 

    2. One-Year (365-Days):
        > The earth completes one-rotation around the Sun. 
        > Actual time taken is 365.25 days. (Astronomical-Year)
        > 0.25 * 4 = 1 Day 
        > Syncronized Common-Year with Astronomical Year, we have to add 1-Day after every 4-Year. (February with 29 Days) - Julian Calendar
        > So the year, which is divisible by 4, is a Leap-Year. 
        > Actual time taken is 365.2422 days. (Less than 11m:14s from a day)
        > 24 Hours = (24H * 60M * 60S = 86400 Sec) 
        > 11m:14s = (11M * 60S) + 14S = 674 Sec 
        > 86400S / 674S = 128.18991 
    3. Gregorian Calendar
        a) The year is evenly divisible by 4. 
        b) If the year can be evenly divided by 100, it is NOT a leap year. 
        c) The year is also evenly divisible by 400, Then it is a leap year.

*/

#include <stdio.h> 

int main(void)
{
    int Year; 

    printf("Please Input the Year: "); 
    scanf("%d", &Year); 

    if((Year % 4 == 0) && ((Year % 100 != 0) || (Year % 400 == 0))) printf("%d is a Leap-Year.\n", Year);  
    else printf("%d is a Common-Year.\n", Year);


    return 0;
}