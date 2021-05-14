/*
Problem statment - Write a program Which accept N and print Fist 5 multiple of N*/
#include "header.h"
int main ()
{
    int iValue=0;
    

    printf("Enter Number..\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    
    return 0;
}