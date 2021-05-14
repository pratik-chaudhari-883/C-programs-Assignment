/*
Problem statment -  Accept N Number from user and return the  diffrence between smallest and lagest   number  
input 6
elements 15 66 3 70 10 88 
output 85
elements 5 66 72 70 10 88 
output  83
*/    

#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[], int iLength)
{
     int iCnt=0;
     int iLarge=0;
     int iSmall=0;

          iLarge=Arr[0];
          iSmall=Arr[0];
         for(iCnt=0; iCnt<iLength; iCnt++)
         {

             if (Arr[iCnt]>iLarge)
             {
                  iLarge=Arr[iCnt];
             }
 
             if (Arr[iCnt]<iSmall)
             {
                  iSmall=Arr[iCnt];
             }

         }
         return (iLarge-iSmall);
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

   
    iRet=Diffrence(ptr,iSize);
  printf(" smallest number is %d",iRet);
 
  
    free(ptr);

    return 0;
}