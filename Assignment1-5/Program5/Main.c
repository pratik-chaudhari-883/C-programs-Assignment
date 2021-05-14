/*
    Problem statement :Write a program which accept total  number and marks  and calculate percentage 
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue1=0;
    int iValue2=0;
    float fRet=0.0;
    printf("Enter  Total marks \n");
    scanf("%d",&iValue1);

    printf("Enter obtain marks ..\n");
    scanf("%d",&iValue2);
    

        fRet=CalcuPercentage(iValue1,iValue2);
        printf("Your percentage id %f",fRet);

    return 0;                               // It indicates successfull termination.
}




