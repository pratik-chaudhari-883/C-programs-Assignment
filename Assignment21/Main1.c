/*
Problem statment -  Accept N Number from user and return diffrence between summation of even 
elements and odd elements
input 6
elements 85  66  3  80  93  88 
output 53 
*/    

#include<stdio.h>
#include<stdlib.h>
int Diffrence(int [],int);
//////////////////////////////////////////////////////////////
//
// Function name :   int Diffrence()
// Parameters :           integer 
// Return value :        float
// Description :           It is used to calculate Bill
// Author :                  Pratik suklal chaudhari
// Date :                     18 rd Aug 2020
//
/////////////////////////////////////////////////////////////

int Diffrence(int arr[],int iLength)
{
     int iEvensum=0;
     int iOddsum=0;
     int iDiffrence=0;
     int iCnt=0;
   for(iCnt=0; iCnt<iLength; iCnt++)
   {
        if((arr[iCnt]%2)==0)
        {
             iEvensum=iEvensum+arr[iCnt];
        }
        else
        {
             iOddsum=iOddsum+arr[iCnt];
        }
        
   }
        
        
        iDiffrence=iEvensum-iOddsum;

   
   
  return iDiffrence ;

}


int main()
{
    int  iValue=0;
    int iRet=0;
    int iCnt=0;
    int *ptr=NULL; 
    

     printf("Enter values of N..\n");
     scanf("%d",&iValue);


     ptr=(int*)malloc(sizeof(int)*iValue);

     if(ptr==NULL)
     {
          printf("Memory not allcocated ");
          return -1;
     }
      

  printf("Enter values...\n");
      for(iCnt=0; iCnt<iValue; iCnt++)
     {

               scanf("%d",&ptr[iCnt]);

      }
     

     iRet=Diffrence(ptr,iValue);
        printf("diffrence  between summation of even and odd number  is %d",iRet);

free(ptr);
    return 0;
}