/*
    Problem statement : Write a program which  accept  one number from user and print even factor of that number.


*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue = 0;                             // Local variable
    
    printf("Enter number\n");       // Display on screen
    scanf("%d",&iValue);              // Accept the input from keyboard
    
     DisplayEvenFact(iValue);   // Function call
    

    
    return 0;                               // It indicates successfull termination.
}






