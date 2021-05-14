#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :      DisplyEven
// Parameters :           Integer
// Return value :         None
// Description :           It is used to print check even number of that number
// Author :                  Pratik suklal chaudhari
// Date :                     1 Aug 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
void DisplayEven(int iNo )
{

    int iCnt=0;
    int isum=0;

    if (iNo<=0)
    {
        return;

    }
     
     for(iCnt=1;iCnt<=(iNo*iNo);iCnt++)
     {
         if((iCnt%2)==0)
         {
             printf("%d\t",iCnt);

             isum++;
            
            
            
         }
            
        if(isum==iNo)
            {
               
                break;
            }           

     }
 
    
}

