/*
    Problem statement :Write a program which accept two  number from user check wether that numbers are equal or not
    
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue1=0;
    int iValue2=0;
    BOOLEAN bRet=FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue1);

    printf("Enter second number..\n");
    scanf("%d",&iValue2);


        bRet=chkEqual(iValue1,iValue2);
    if(bRet==TRUE)
    {
        printf("Number are equal");
    }
    else
    {
        printf("Number are  not equal");
    }
    
    
    


    
    return 0;                               // It indicates successfull termination.
}




