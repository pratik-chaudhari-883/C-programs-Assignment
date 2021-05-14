#include "Header.h"             // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function name :      DisplyEven
// Parameters :           Integer
// Return value :         BooL
// Description :           It is used to print check vowel
// Author :                  Pratik suklal chaudhari
// Date :                     1 Aug 2020
//
//////////////////////////////////////////////////////////////
BOOL CheckVowel(char cValue)
{

    if(cValue>='A'&& cValue<='Z')
    {
        cValue=cValue+32;          //input validation
    }

    if (cValue=='a'||cValue=='e'||cValue=='i'||cValue=='o'||cValue=='u')
    {
        return TRUE ;
    }
    else
    {
        return FALSE;
    }
    

}