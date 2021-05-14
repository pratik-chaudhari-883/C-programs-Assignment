/*
    Problem statement :Write a program which accept  number from user and return of count of even digits 
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue1=0;
    int iRet=0; 
    printf("Enter Number..\n");
    scanf("%d",&iValue1);
   
    iRet=CountEvendigits(iValue1);
    printf("number of even digits are %d",iRet);
    return 0;                         // It indicates successfull termination.
}




