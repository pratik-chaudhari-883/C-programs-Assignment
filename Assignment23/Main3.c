/*
Problem statment -  Accept N Number from user and accept one another number as no  and return index of first cccurence of that number
input 6
no    66
elements 85  66  3  80  93  88 
output 1
*/    

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//
// Function name :   PresentNo();
// Parameters :           integer 
// Return value :        integer
// Description :           It is used to fetch even friquency
// Author :                  Pratik suklal chaudhari
// Date :                     18 rd Aug 2020
//
/////////////////////////////////////////////////////////////
  int  LastPresentNo(int Arr[], int iSize, int iNo)
{
     int iCnt=0;
     int iNumber=0;

    for(iCnt=iSize-1; iCnt >=0; iCnt--)
    {
         if(Arr[iCnt]==iNo)
         {
               iNumber=iCnt;
               break;
         }
    }
       
     if(iCnt==-1)
     {
          return-1;
     }

     return iNumber;
    
}




int main()
{
     int iValue=0;
     int iCnt=0;
     int  iRet=0;
     int iNo=0;

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

   printf("Enter Number which you Want to search ..\n");
   scanf("%d",&iNo);

iRet=LastPresentNo(ptr,iValue,iNo);


         printf("index number of you number is %d",iRet);
free(ptr);

    return 0;
}