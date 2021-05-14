#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :        DisplayDigit();   
// Parameters :           Integer
// Return value :        integer
// Description :          used to count odd digt in number 
// Author :                  Pratik suklal chaudhari
// Date :                     3rd Aug 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
  int Countodddigits(int iNo)
  {
   int iDigit=0;
   int iCounteven=0;
   int iCountodd=0;
   while(iNo!=0)
   {
      iDigit=iNo%10;
      if ((iDigit%2)==0)
      {
        iCounteven++;
      }else
      {
          iCountodd++;
      }
      
      
      
      
      iNo=iNo/10;

   }
   
return iCountodd;
  
}

