#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :      DisplyEven
// Parameters :           Integer
// Return value :         None
// Description :           It is used to convert uppercase letter in smallcase
// Author :                  Pratik suklal chaudhari
// Date :                     1 Aug 2020
//
//////////////////////////////////////////////////////////////


   
void DisplayConvert(char cValue)
{

  if (cValue>='A' && cValue<='Z')
  {
      cValue=cValue+32;
      printf("%c",cValue);
  }
  else if (cValue>='a' && cValue<='z')
  {
      cValue=cValue-32;
      printf("%c",cValue);
  }
}
 
    

