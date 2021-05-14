/*
Problem statment -  Accept N Number from user and display such number which contain three digits  
input 6
elements 15 663 3 70 10 888 
output  663  888
elements 5 66 72 710 100 88 
output 710 100
*/    

#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(int Arr[], int iLength)
{
     int iCnt=0,iCount=0;
     int iDigit;
     int iNo=0;

          for(iCnt=0; iCnt<iLength; iCnt++)
         {

               iNo=Arr[iCnt];
               iCount=0;
              while (iNo!=0)
              {
                   iDigit=iNo%10;
                   iNo=iNo/10 ;
                   iCount++;

              }
              if(iCount==3)
              {
                   printf("%d\t",Arr[iCnt]);
              }
              
         }
         
}



int main()
{
     
     int iSize=0;
     int iCnt=0;
     
    

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

   
    DisplayDigits(ptr,iSize);
  
 
  
    free(ptr);

    return 0;
}