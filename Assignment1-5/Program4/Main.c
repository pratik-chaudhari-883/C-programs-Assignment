/*
    Problem statement :Write a program which accept three   numbers and print its multiplication    
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue1=0, iValue2=0,iValue3=0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue1);

    printf("Enter second number..\n");
    scanf("%d",&iValue2);
    printf("Enter second number..\n");
    scanf("%d",&iValue3);

        iRet=Multi(iValue1,iValue2,iValue3);
    printf("Multiplication is %d",iRet);
    
    
    


    
    return 0;                               // It indicates successfull termination.
}




