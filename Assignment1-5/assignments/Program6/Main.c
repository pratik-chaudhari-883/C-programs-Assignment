/*
Problem statment - Write a program Which accept Number from user and print that number of $ & *
*/
#include "header.h"
int main ()
{
    int iValue=0;
    

    printf("Enter Number..\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}