/*
Problem statment - Write a program Which accept Number from usand display it table in revers
*/
#include "header.h"
int main ()
{
    int iValue=0;
    

    printf("Enter Number..\n");
    scanf("%d",&iValue);

    DisplayTableRevers(iValue);
    
    return 0;
}