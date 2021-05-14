/*
Problem statment -  Accept N Number from user and chek whether that number contains 11 in it or not 
input 6
elements 85  66  11 80  93  88  90
output 11 is present 
*/    

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckEleven(int [], int);

//////////////////////////////////////////////////////////////
//
// Function name :   CheckEleven();
// Parameters :           integer 
// Return value :       Bool
// Description :           It is used to calculate diffrence between odd and even friquency
// Author :                  Pratik suklal chaudhari
// Date :                     18 rd Aug 2020
//
/////////////////////////////////////////////////////////////
BOOL  CheckEleven(int Arr[], int iSize)
{

     
     int iCnt=0;
     int iCount=0;

     for(iCnt=0; iCnt<iSize; iCnt++)
     {
          if (Arr[iCnt]==11)
          {
              iCount++;
              break;
          }
          
     }

     if (iCount==1)
     {
          return TRUE;
     }
     else
     {
          return FALSE;
     }
     
     

}



int main()
{
     int iValue=0;
     int iCnt=0;
     BOOL bRet= FALSE;

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

bRet= CheckEleven(ptr,iValue);
if(bRet==TRUE)
{
     printf("11 is present");
}
else
{
      printf("11 is not  present");
}

free(ptr);

    return 0;
}