/*
    Problem statement :Write a program which accept  number from user and  display its digits in revers order 
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue1=0;
    
      int iRet=0.0;
    printf("Enter Number..\n");
    scanf("%d",&iValue1);
   
    DisplayDigit(iValue1);
        

    return 0;                               // It indicates successfull termination.
}




