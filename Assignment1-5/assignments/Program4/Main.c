/*
Problem statment - Write a program Which accept Number from usand display it table
*/
#include "header.h"
int main ()
{
    int iValue=0;
    

    printf("Enter Number..\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);
    
    return 0;
}