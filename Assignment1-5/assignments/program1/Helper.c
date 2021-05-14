#include "header.h"
//////////////////////////////////////////////////////////////
//
// Function name :      ChkEvenOdd
// Parameters :           Integer
// Return value :         None
// Description :           It is used to check number is even / odd
// Author :                  Pratik suklal chaudhari
// Date :                     3rd Aug 2020
//
//////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }
    
    if (iNo<50)
    {
        printf("Number is smaller");
    }
    else  if (iNo>50 && iNo<100)
    {
        printf("Number is medium");
    }
    else
    {
        printf("Number is Greater");
    }
    
    

}