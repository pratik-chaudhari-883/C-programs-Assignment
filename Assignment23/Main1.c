/*
Problem statment -  Accept N Number from user and accept one another number as no check wether that number is present or not 
number
input 6
no    66
elements 85  66  3  80  93  88 
output TRUE 
*/    

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
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
BOOL PresentNo(int Arr[], int iSize, int iNo)
{

     int iNumber =0;
     int iCnt=0;

     for(iCnt=0; iCnt<iSize; iCnt++)
     {
          if(Arr[iCnt]==iNo)
          {
             break;
          }
     }

       if(iCnt==iSize)
       {
            return-1;
       }
       if(Arr[iCnt]==iNo)
       {
            return TRUE;
       }else
       {
             return FALSE;
       }
       

    
}











int main()
{
     int iValue=0;
     int iCnt=0;
     BOOL bRet=0;
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

bRet=PresentNo(ptr,iValue,iNo);


          if(bRet==TRUE)
          {
               printf("Number is present");
          }else
          {
               printf("Number is not present");
          }
          
free(ptr);

    return 0;
}