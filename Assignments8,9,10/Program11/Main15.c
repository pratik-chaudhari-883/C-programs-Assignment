/*
Problem statment - Write a program Which accept area in square feet and return in squre meter (1squre feet = 0.0929 squre Meter)
*/

#include<stdio.h>
double SquareMeter(int);
//////////////////////////////////////////////////////////////
//
// Function name :   SquareMeter()
// Parameters :           integer 
// Return value :        double 
// Description :           It is used to convert square feet in to square miter 
// Author :                  Pratik suklal chaudhari
// Date :                     10 rd Aug 2020
//
/////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
 if (iValue<0)
 {
    iValue=-iValue;
 }
 if(iValue==0)
 {
    return 0.0;
 }
    iValue*0.0929;


   return(iValue*0.0929);
}

int main ()
{
    int  iValue=0;
    double dRet=0.0;

    printf("Enter distence in square feet  ..\n");
    scanf("%d",&iValue);

  dRet=SquareMeter(iValue);

    printf(" distence  in square Meterm is :%lf",dRet);
    return 0;
}