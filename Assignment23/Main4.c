/*
Problem statment -  Accept N Number from user and accept one range and display that range 
input 6
istart 90 
iend  100
elements 90 91 92 93 94 95 96 97 98 99 100 
output 90 91 92 93 94 95 96 97 98 99 100 
*/    

#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int Arr[], int iLength,int iStart,int iEnd)
{
     int iCnt=0;
         for(iCnt=0; iCnt<iLength; iCnt++)
         {
               
               if(Arr[iCnt]>=iStart && Arr[iCnt]<=iEnd)
               {
                    printf("%d",Arr[iCnt]);
               }
         }
}



int main()
{
     int iValue1=0,iValue2=0;
     int iSize=0;
     int iCnt=0;
     int  iRet=0;
    

    int *ptr=NULL;
   printf("Enter values of N..\n");
   scanf("%d",&iSize);

  
   ptr=(int*)malloc(sizeof(int)*iSize);
    if(ptr==NULL)
   {
        printf("unable to allocate memory");
        return-1;
   }

    printf("Enter Number range ..\n");
   scanf("%d\n%d",&iValue1,&iValue2);


   printf("Enter Values..\n");
   for(iCnt=0; iCnt<iSize; iCnt++)
   {
        printf("Enter Element:%d",iCnt+1);
        scanf("%d",&ptr[iCnt]);
   }

   
     RangeDisplay(ptr,iSize,iValue1,iValue2);
  
 
  
    free(ptr);

    return 0;
}