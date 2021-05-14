/*
    Problem statement :Write a program which accept  number from user and count frequency 4 in it 
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
    printf("digits which Frequncy is less than six are %d",iRet);
    return 0;                            // It indicates successfull termination.
}




