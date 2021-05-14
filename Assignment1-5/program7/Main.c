/*
    Problem statement :Write a program which accept  number from user and check wether it contain o init or not 
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue1=0;
    
      BOOL bRet=0;
    printf("Enter Number..\n");
    scanf("%d",&iValue1);
   
    bRet=DisplayDigit(iValue1);

  if (bRet==TRUE)
    {
      printf("IT CONTAIN ZERO");
    }
    else
    {
      printf("IT NOT CONTAIN ZERO");
    }
    
    
    
        

    return 0;                               // It indicates successfull termination.
}




