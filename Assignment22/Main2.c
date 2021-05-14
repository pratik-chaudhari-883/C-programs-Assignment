/*
Problem statment -  Accept N Number from user and return diffrence between friquency  of even and Odd number  
number
input 6
elements 85  66  3  80  93  88  90
output 1 (4-3) 
*/    

#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////
//
// Function name :   EvenFriquency();
// Parameters :           integer 
// Return value :        integer
// Description :           It is used to calculate diffrence between odd and even friquency
// Author :                  Pratik suklal chaudhari
// Date :                     18 rd Aug 2020
//
/////////////////////////////////////////////////////////////
int EvenFriquency(int Arr[], int iSize)
{

     int iEvenfriquency=0,iOddfriquency=0;
     int iCnt=0;

     for(iCnt=0; iCnt<iSize; iCnt++)
     {
          if((Arr[iCnt]%2)==0)
          {
               iEvenfriquency++;
          }else
          {
               iOddfriquency++;
          }
          
     }



     return (iEvenfriquency-iOddfriquency);
}











int main()
{
     int iValue=0;
     int iCnt=0;
     int iRet=0;

    int *ptr=NULL;
   printf("Enter values of N..\n");
   scanf("%d",&iValue);

   if(iValue<=0)
   {
        return-1;
   }
   ptr=(int*)malloc(sizeof(int)*iValue);

   printf("Enter Values..\n");

   for(iCnt=0; iCnt<iValue; iCnt++)
   {
        scanf("%d",&ptr[iCnt]);
   }

iRet=EvenFriquency(ptr,iValue);
printf("Freiquency of Even number is %d",iRet);

    return 0;
}