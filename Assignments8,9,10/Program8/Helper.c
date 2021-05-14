#include "header.h"
//////////////////////////////////////////////////////////////
//
// Function name :      ChkEvenOdd
// Parameters :           Integer
// Return value :         None
// Description :           It is used to print Number line of given number 
// Author :                  Pratik suklal chaudhari
// Date :                     7 rd Aug 2020
//
/////////////////////////////////////////////////////////////

void  DisplayNumberLine(int iNo)
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
    
    
    for (iCnt=-iNo; iCnt<=iNo; iCnt++)
    {
        
        printf("%d\t",iCnt);
    }
      
      
}