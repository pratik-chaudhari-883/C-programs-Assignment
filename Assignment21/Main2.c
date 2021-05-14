/*
Problem statment -  Accept N Number from user and display all such elements which are divisible by 5

input 6
elements 85  66  3  80  93  88 
output 53 
*/    

#include<stdio.h>
#include<stdlib.h>
void  Display(int [],int);
//////////////////////////////////////////////////////////////
//
// Function name :   int Display()
// Parameters :           integer 
// Return value :        float
// Description :           It is used to calculate Bill
// Author :                  Pratik suklal chaudhari
// Date :                     18 rd Aug 2020
//
/////////////////////////////////////////////////////////////

void Display(int arr[],int iLength)
{
     int iCnt=0;
   for(iCnt=0; iCnt<iLength; iCnt++)
   {
        if((arr[iCnt]%2)==0)
        {
          printf("%d\t",arr[iCnt]);
        }
        
   }
        
      
   
   
  

}


int main()
{
    int  iValue=0;
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
     

     Display(ptr,iValue);
        
free(ptr);
    return 0;
}