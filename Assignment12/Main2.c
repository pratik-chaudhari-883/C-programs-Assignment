/*
Problem statment - Accept amount in US Doller and return its corresponding value in indian currency
 consider  1$ = 70 Rupees

input: 10
output: 700  

input: 1200
output: 84000
*/

#include<stdio.h>
int  DollertoINR(int);
//////////////////////////////////////////////////////////////
//
// Function name :   DollertoINR()
// Parameters :           integer 
// Return value :        None
// Description :           It is used to convert us doller into indian currency
// Author :                  Pratik suklal chaudhari
// Date :                     10 rd Aug 2020
//
/////////////////////////////////////////////////////////////

int  DollertoINR(int iNo)
{
   int iIndianrupees=0;


   if (iNo<0)
   {
      iNo=-iNo;
   }
   
    iIndianrupees=iNo*70;


    return iIndianrupees;
   

}

int main()
{
    int  iValue=0;
    int iRet=0;
    

     printf("Enter US Doller ..\n");
     scanf("%d",&iValue);

     iRet=DollertoINR(iValue);

     printf("indian currency is :%d\n",iRet);


    return 0;
}