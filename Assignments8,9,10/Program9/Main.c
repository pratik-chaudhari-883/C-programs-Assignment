/*
Problem statment - Write a program Which accept  N Number from user and print that Number to N number  
*/
#include "header.h"
int main ()
{
    int iValue=0;
    

    printf("Enter Number..\n");
    scanf("%d",&iValue);

    DisplayOddNumber(iValue);
    
    return 0;
}