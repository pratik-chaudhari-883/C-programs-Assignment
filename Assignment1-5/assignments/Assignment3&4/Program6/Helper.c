#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :      DisplyEven
// Parameters :           Integer
// Return value :         None
// Description :           It is used to display multiplication of even factor 
// Author :                  Pratik suklal chaudhari
// Date :                     1 Aug 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
 void DisplayMultiFact(int iNo)
{

    int iCnt=0;
    int iMulti=1;

    if (iNo<=0)
    {
        return;

    }
     
     for(iCnt=1;iCnt<=(iNo/2);iCnt++)
     {
         if((iNo%iCnt)==0)
         {
            
             printf("%d\t",iCnt);

             iMulti=iMulti*iCnt;


            
            
            
         }
            
           

     }
 
    printf("Multiplication of Even factor is %d",iMulti);
}

