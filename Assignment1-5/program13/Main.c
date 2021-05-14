/*
    Problem statement :Write a program which accept  number from user and return the count of digits between 3 abd 7
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue1=0;
    int iRet=0; 
    printf("Enter Number..\n");
    scanf("%d",&iValue1);
   
    iRet=CountDigits(iValue1);
    printf("number of digits between 3 and 7 are %d",iRet);
    return 0;                        // It indicates successfull termination.
}




