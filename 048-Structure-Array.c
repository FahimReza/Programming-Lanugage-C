#include <stdio.h>
#include <string.h>

int main(void)
{
    char nameList[5][20] = {"Fahim", "Bkash", "Mishu", "Monju", "Jarif"};
    int marksList[5][6] = {
        {45, 60, 55, 35, 74, 36},
        {76, 30, 90, 45, 77, 36},
        {47, 86, 92, 77, 71, 22},
        {74, 73, 19, 46, 49, 98},
        {55, 52, 49, 76, 81, 91}
    };
    float resultList[5] = {3.45, 3.20, 3.45, 2.25, 3.61};

    struct Student
    {
        int roll;
        char name[20];
        int marks[6];
        float result;
    };

    struct Student S[5];

    printf("Size is: %d\n\n", sizeof(S));

    for(int i = 0; i<5; i++)
    {
        S[i].roll = 111 + i; 
        strcpy(S[i].name, nameList[i]);
        for(int r = 0; r < 6; r++) S[i].marks[r] = marksList[i][r];
        S[i].result = resultList[i];
    }

    for(int i = 0; i<5; i++)
    {
        printf("Roll: %d\n", S[i].roll);
        printf("Name: %s\n", S[i].name);
        printf("Marks: ");
        for(int j = 0; j<6; j++) printf("%d ",  marksList[i][j]);
        printf("\nResult: %.2f\n\n", resultList[i]);
    }

    return 0;
}