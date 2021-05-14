#include "header.h"
//////////////////////////////////////////////////////////////
//
// Function name :     MultipleDisplay
// Parameters :           Integer
// Return value :         Integer 
// Description :           It is used to print first 5 multiple of N number 
// Author :                  Pratik suklal chaudhari
// Date :                     3rd Aug 2020
//
/////////////////////////////////////////////////////////////

void  MultipleDisplay(int iNo)
{
    int iCnt=0;
    int iTable=0;
    int iCount=0;
    if (iNo<0)                     //updater
    {
        iNo=-iNo;                  //negative value convert into possitive
    }
    if (iNo==0)                      // input validation
    {
        return;
    }
    
    
    for (iCnt=1; iCnt<=(iNo*iNo); iCnt++)
    {
        iTable=iNo*iCnt;
        printf("%d\n",iTable);
        iCount++;
        if (iCount>=iNo)
      {
          break ;
      }

    }
      
      
      
}