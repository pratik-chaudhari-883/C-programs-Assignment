#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :        DisplayDigit();   
// Parameters :           Integer
// Return value :        integer
// Description :          used to count even digt in number 
// Author :                  Pratik suklal chaudhari
// Date :                     3rd Aug 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
  int CountEvendigits(int iNo)
  {
   int iDigit=0;
   int iCount=0;
   if (iNo<=0)
   {
      iNo=-iNo;
   }
   
   while(iNo!=0)
   {
      iDigit=iNo%10;
      if ((iDigit%2)==0)
      {
         iCount++;
      }
      
      
      
      iNo=iNo/10;

   }
   
return iCount;
  
}

