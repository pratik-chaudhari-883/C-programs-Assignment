#include "header.h"
//////////////////////////////////////////////////////////////
//
// Function name :      ChkEvenOdd
// Parameters :           Integer
// Return value :         None
// Description :           It is used to print $ & *
// Author :                  Pratik suklal chaudhari
// Date :                     7 rd Aug 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt=0;
    

    if (iNo<0)                     //updater
    {
        iNo=-iNo;                  //negative value convert into possitive
    }
    if (iNo==0)                      // input validation
    {
        return;
    }
    
    
    for (iCnt=1; iCnt<=iNo; iCnt++)
    {
        
        printf(" $\t*\t");
    }
      
      
}