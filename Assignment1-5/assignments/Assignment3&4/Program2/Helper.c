#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :      DisplyEvenFact
// Parameters :           Integer
// Return value :         None
// Description :           It is used to print evenfactor of that number
// Author :                  Pratik suklal chaudhari
// Date :                     1 Aug 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
void DisplayEvenFact(int iNo )
{

    int iCnt=0;
   

    if (iNo<=0)
    {
        iNo=-iNo;

    }
     
     for(iCnt=1;iCnt<(iNo/2);iCnt++)
     {
         if((iNo%iCnt)==0)
         {
                      if((iCnt%2)==0)

                    {
                        printf("%d\t",iCnt);

                
                    }
            
         }
            
      
     }
 
    
}

