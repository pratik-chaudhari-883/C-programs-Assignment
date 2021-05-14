/*
    Problem statement :Write a program which accept  number from user and count frequency 2 in it 
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue1=0;
    int iRet=0; 
    printf("Enter Number..\n");
    scanf("%d",&iValue1);
   
    iRet=DisplayDigit(iValue1);
    printf("Freqency of 2 is %d",iRet);
    return 0;                               // It indicates successfull termination.
}




