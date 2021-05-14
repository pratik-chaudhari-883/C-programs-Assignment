/*
Problem statment -  Accept N Number from user and display all such elements which are  multiply 10

input 6
elements 85  66  3  55  93  88 
output  66 55 88
*/    

#include<stdio.h>
#include<stdlib.h>
void  Display(int [],int);
//////////////////////////////////////////////////////////////
//
// Function name :   int Display()
// Parameters :           integer 
// Return value :        int 
// Description :           It is used to calculate Bill
// Author :                  Pratik suklal chaudhari
// Date :                     18 rd Aug 2020
//
/////////////////////////////////////////////////////////////

void Display(int arr[],int iLength)
{
     
     int iCnt=0;
     int iCnt2=0;
     int iNumber=0;
   for(iCnt=0; iCnt<iLength; iCnt++)
   {

        for(iCnt2=1;iCnt2<= arr[iCnt]; iCnt2++)
        {
           iNumber=11*iCnt2;

           if(iNumber==arr[iCnt])
           {
                printf("%d",arr[iCnt]);
                break;
           }
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
        

    return 0;
}