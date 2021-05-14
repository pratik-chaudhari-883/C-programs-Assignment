/*
Problem statment -Write a program which  accept number from user and if number is less than 50 then print small ,if it is greater than 50 and iess than 100
then print medium ,if it is greater than 100 then print lagge  
*/
#include "header.h"
int main ()
{
    int iValue=0;
    printf("Enter Number..\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}