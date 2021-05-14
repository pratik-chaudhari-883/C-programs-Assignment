/*
Problem statment - Write a program Which accept distance in kilometer and convert it into meter(1kilometer = 1000meter)
*/

#include<stdio.h>
int KMtoMeter(int);

//////////////////////////////////////////////////////////////
//
// Function name :     Rnt KMtoMeter()
// Parameters :           integer
// Return value :        integer 
// Description :           It is used to convert kilometer to Meter
// Author :                  Pratik suklal chaudhari
// Date :                     10 rd Aug 2020
//
/////////////////////////////////////////////////////////////

 int KMtoMeter(int iNo)
 {

   int iMeter=0;
   if(iNo<0)
   {
       iNo=-iNo;
   }
   if (iNo==0)
   {
       return 0;
   }
   
   iNo*1000;
    return(iNo*1000);
      
}

int main ()
{
    int iValue=0;
    int iRet=0.0;

    printf("Enter in Kilometer  ..\n");
    scanf("%d",&iValue);

  iRet=KMtoMeter(iValue);
    printf("your distance is :%d",iRet);
    return 0;
}