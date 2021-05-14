#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :        DisplayDigit();   
// Parameters :           Integer
// Return value :        None
// Description :          used to reverse digit 
// Author :                  Pratik suklal chaudhari
// Date :                     3rd Aug 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
  BOOL DisplayDigit(int iNo)
{
   int iDigit=0;
   while(iNo!=0)
   {
      iDigit=iNo%10;
      if (iDigit==0)
      {
         break;
      }
      
      
      iNo=iNo/10;

   }
   
    if (iDigit==0)
      {
         return TRUE;
      }
      else
      {
        return FALSE;
      }
  
}

