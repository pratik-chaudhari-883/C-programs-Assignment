#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :      DisplyEven
// Parameters :           Integer
// Return value :         None
// Description :           It is used to display  factor in decrising order
// Author :                  Pratik suklal chaudhari
// Date :                     1 Aug 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
 void DisplayFact(int iNo)
{

    int iCnt=0;
    
    if (iNo<=0)
    {
        return;

    }
     
     for(iCnt=iNo/2;iCnt>=1;iCnt--)
     {
         if(iNo%iCnt==0)
         {
            
             printf("%d\t",iCnt);
            
         }
            


     }
 
    
}

