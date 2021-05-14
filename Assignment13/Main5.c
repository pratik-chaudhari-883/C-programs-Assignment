/*
Problem statment - Write a program Which accept number from user and Display below pattern
input: 8
output: 2 4 6 8 10 12 14 16



*/

#include<stdio.h>
void Pattern(int);
//////////////////////////////////////////////////////////////
//
// Function name :   Pattern()
// Parameters :           integer 
// Return value :        None
// Description :           It is used to display given pattern
// Author :                  Pratik suklal chaudhari
// Date :                     10 rd Aug 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
   int iCnt=0;
  int iPrint=0;

   if (iNo<0)
   {
      iNo=-iNo;
   }

   
   for (iCnt=1; iCnt<=iNo; iCnt++)
      {

         iPrint=2*iCnt;
          printf("%d\t",iPrint);
      
   }  
  

}

int main()
{
    int  iValue=0;
    

     printf("Enter Number..\n");
     scanf("%d",&iValue);

     Pattern(iValue);


    return 0;
}