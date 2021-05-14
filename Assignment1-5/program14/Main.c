/*
    Problem statement :Write a program which accept  number from user and return of count of odd digits 
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue1=0;
    int iRet=0; 
    printf("Enter Number..\n");
    scanf("%d",&iValue1);
   
    iRet=MultiDigits(iValue1);
    printf("number of odd digits are %d",iRet);
    return 0;                        // It indicates successfull termination.
}




