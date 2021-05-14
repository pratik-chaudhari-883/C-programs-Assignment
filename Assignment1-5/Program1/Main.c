/*
    Problem statement :Write a program which accept name from user and print that Name
    number is even or odd.
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    char Name[30];
    printf("Please Enter full name\n");
    scanf("%s",&Name);
    printf("Your name is %s",Name);


    
    return 0;                               // It indicates successfull termination.
}




