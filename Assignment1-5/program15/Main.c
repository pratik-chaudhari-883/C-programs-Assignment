/*
    Problem statement :Write a program which accept  number from user and diffrenc between summation of even digits and summation of odd digits 
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue1=0;
    int iRet=0; 
    printf("Enter Number..\n");
    scanf("%d",&iValue1);
   
    iRet= Countdigits(iValue1);
    printf(" Diffrence between even and odd Digits are %d",iRet);
    return 0;                       // It indicates successfull termination.
}




