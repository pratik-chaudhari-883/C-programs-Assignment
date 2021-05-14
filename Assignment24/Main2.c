/*
Problem statment -  Accept N Number from user and return the smallest   number  
input 6
elements 15 66 3 70 10 88 
output 88
elements 44 66 72 70 10 88 
output 88
*/    

#include<stdio.h>
#include<stdlib.h>

int SmallestNumber(int Arr[], int iLength)
{
     int iCnt=0;
     int iLarge=0;

          iLarge=Arr[0];
         for(iCnt=0; iCnt<iLength; iCnt++)
         {

             if (Arr[iCnt]<iLarge)
             {
                  iLarge=Arr[iCnt];
             }
             

         }
         return iLarge;
}



int main()
{
     
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

   

   printf("Enter Values..\n");
   for(iCnt=0; iCnt<iSize; iCnt++)
   {
        printf("Enter Element:%d\t",iCnt+1);
        scanf("%d",&ptr[iCnt]);
   }

   
    iRet=SmallestNumber(ptr,iSize);
  printf(" smallest number is %d",iRet);
 
  
    free(ptr);

    return 0;
}