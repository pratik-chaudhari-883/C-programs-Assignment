#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :        DisplayDigit();   
// Parameters :           Integer
// Return value :        integer
// Description :          used to return Multiplication of all  digit
// Author :                  Pratik suklal chaudhari
// Date :                     3rd Aug 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
  int MultiDigits(int iNo)
  {
   int iDigit=0;
   int iMulti=1;
  
   while(iNo!=0)
   {
      iDigit=iNo%10;
      if(iDigit!=0)
      {
      iMulti=iMulti*iDigit;
      }
      
      
      iNo=iNo/10;

   }
   
return iMulti;
  
}

 