#include "header.h"
//////////////////////////////////////////////////////////////
//
// Function name :      ChkEvenOdd
// Parameters :           Integer
// Return value :         Integer 
// Description :           It is used to return   Factorial
// Author :                  Pratik suklal chaudhari
// Date :                     3rd Aug 2020
//
/////////////////////////////////////////////////////////////

void  DisplayTableRevers(int iNo)
{
    int iCnt=0;
    int iTable=0;

    if (iNo<0)                     //updater
    {
        iNo=-iNo;                  //negative value convert into possitive
    }
    if (iNo==0)                      // input validation
    {
        return;
    }
    
    
    for (iCnt=10; iCnt>=1; iCnt--)
    {
        iTable=iNo*iCnt;
        printf("%d\n",iTable);
    }
      
      
}