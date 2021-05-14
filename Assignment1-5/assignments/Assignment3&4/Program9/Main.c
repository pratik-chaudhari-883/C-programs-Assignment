/*
    Problem statement : Write a program which  accept  one number from user and Display it multiplication of Factors
    number is even or odd.
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue = 0; 
    int iRet=0;                            // Local variable
    
    printf("Enter number\n");       // Display on screen
    scanf("%d",&iValue);              // Accept the input from keyboard
    
     iRet=DisplayNonFact(iValue);   // Function call
    

    printf("Non factor Summation is %d",iRet);
    return 0;                               // It indicates successfull termination.
}




/*output
:
*/