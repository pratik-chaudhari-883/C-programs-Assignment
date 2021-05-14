/*
Problem statment -  Accept N Number from user and return the product of all Odd number  
input 6
elements 15 66 3 70 10 88 
output 45
elements 44 66 72 70 10 88 
output 10
*/    

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
     int iCnt=0;
     int iProduct=1;
         for(iCnt=0; iCnt<iLength; iCnt++)
         {
               if((Arr[iCnt]%2==1))
               {
                    iProduct=iProduct*Arr[iCnt];
               }
         }
               if(iProduct==1)
               {
                    iProduct=iProduct*0;
               }
         return iProduct;
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

   

   printf("Enter Values..\n");
   for(iCnt=0; iCnt<iSize; iCnt++)
   {
        printf("Enter Element:%d\t",iCnt+1);
        scanf("%d",&ptr[iCnt]);
   }

   
    iRet=Product(ptr,iSize);
  printf("product of all odd number is %d",iRet);
 
  
    free(ptr);

    return 0;
}