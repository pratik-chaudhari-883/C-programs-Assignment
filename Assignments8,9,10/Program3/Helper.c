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
//////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt=0;
    int iFact=1;

    for(iCnt=iNo; iCnt>0; iCnt--)
    {
        iFact=iFact*iCnt;
        //printf("%d",iCnt);
    }
      
      return iFact;
}