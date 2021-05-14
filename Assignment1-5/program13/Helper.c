#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :        DisplayDigit();   
// Parameters :           Integer
// Return value :        integer
// Description :          used to count  digt in number between 3 and 7 
// Author :                  Pratik suklal chaudhari
// Date :                     3rd Aug 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
  int CountDigits(int iNo)
  {
   int iDigit=0;
   int iCount=0;
   
   while(iNo!=0)
   {
      iDigit=iNo%10;
      if (iDigit>3 && iDigit<7)
      {
        iCount++;
      }
  
      iNo=iNo/10;

   }
   
return iCount;
  
}

