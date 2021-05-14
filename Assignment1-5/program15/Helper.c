#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :        DisplayDigit();   
// Parameters :           Integer
// Return value :        integer
// Description :          used to return diffrence between summation of even and odd Digits
// Author :                  Pratik suklal chaudhari
// Date :                     3rd Aug 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
  int Countdigits(int iNo)
  {
   int iDigit=0;
   int iSumeven=0;
   int iSumodd=0;
   int iDiffrence=0;
   while(iNo!=0)
   {
      iDigit=iNo%10;
      if ((iDigit%2)==0)
      {
        iSumeven=iSumeven+iDigit;
      }else
      {
          iSumodd=iSumodd+iDigit;
      }
  
      iNo=iNo/10;

   }

    iDiffrence=iSumeven-iSumodd;//return(iSumevev-iSumodd);
   
     return iDiffrence;
  
}

