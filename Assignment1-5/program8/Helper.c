#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :        DisplayDigit();   
// Parameters :           Integer
// Return value :        integer
// Description :          used to count frequency 2
// Author :                  Pratik suklal chaudhari
// Date :                     3rd Aug 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
  int DisplayDigit(int iNo)
{
   int iDigit=0;
   int iFrequency=0;
   while(iNo!=0)
   {
      iDigit=iNo%10;
      if ((iDigit==2)||(iDigit==-2))
      {
         iFrequency++;
      }
      
      
      
      iNo=iNo/10;

   }
   
return iFrequency;
  
}

