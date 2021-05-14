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
  void DisplayDigit(int iNo)
{
   int iDigit=0;
   if(iNo<=0)
   {
      iNo=-iNo;
   }
   while (iNo!=0)
   {
      iDigit=iNo%10;
      printf("%d",iDigit);
      iNo=iNo/10;

   }
   

  
}

