/*
Problem statment - Write a program factorial of given number 
*/
#include "header.h"
int main ()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number..\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("Factorial of a given number is %d",iRet);

    return 0;
}