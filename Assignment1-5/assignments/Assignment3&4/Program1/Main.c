/*
    Problem statement : Write a program which  accept  one number from user and print that number of even number on screen
    
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue = 0;                             // Local variable
    
    printf("Enter number\n");       // Display on screen
    scanf("%d",&iValue);              // Accept the input from keyboard
    
     DisplayEven(iValue);   // Function call
    

    
    return 0;                               // It indicates successfull termination.
}




