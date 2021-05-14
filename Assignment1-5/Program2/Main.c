/*
    Problem statement :Write a program which accept number from user check wether that number ia grater than 100 or not 
    number is even or odd.
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue=0;
    BOOLEAN bRet=FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet=GraterNumber(iValue);


    if(bRet==TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    
    
    


    
    return 0;                               // It indicates successfull termination.
}




