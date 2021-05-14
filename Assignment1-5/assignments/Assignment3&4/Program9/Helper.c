#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :      DisplyEven
// Parameters :           Integer
// Return value :         None
// Description :           It is used to display NOn factor 
// Author :                  Pratik suklal chaudhari
// Date :                     1 Aug 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
 int DisplayNonFact(int iNo)
{

    int iCnt=0;
    int isum1=0;
    int isum2=0;
    iAns=0;
  
    if (iNo<=0)
    {
        return;

    }
     
     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
         if(iNo%iCnt==0)
         {
            
             printf("factor are%d\n ",iCnt);
             isum1=isum1+iCnt;

             
         }
         else if(iNo%iCnt==1)
          {  
           
            printf(" non facror are %d\n",iCnt);
            isum2=isum2+iCnt;
            
          }
     }
    iAns=isum1-isum2;   
    return iAns;
}

