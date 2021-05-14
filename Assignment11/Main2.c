/*
Problem statment - Write a program Which accept range from user and display all  even number between number  that range
*/

#include<stdio.h>
void EvenRangeDisplay(int,int );
//////////////////////////////////////////////////////////////
//
// Function name :   EvenRangeDisplay()
// Parameters :           integer 
// Return value :        None
// Description :           It is used to display all even  number from range
// Author :                  Pratik suklal chaudhari
// Date :                     10 rd Aug 2020
//
/////////////////////////////////////////////////////////////

void EvenRangeDisplay(int iNo1 , int iNo2)
{
   int iCnt=0;

   if (iNo1>iNo2)
   {
      printf("Invalid Range");
   }
   else
   {
      for ( iCnt =iNo1; iCnt<= iNo2; iCnt++)
    {
       if((iCnt%2)==0)
       {
       printf("%d\t",iCnt);
       }
    }
   }
   
   
    
    
}

int main()
{
    int  iValue1=0, iValue2=0;
    

     printf("Enter Range..\n");
     scanf("%d%d",&iValue1,&iValue2);

     EvenRangeDisplay(iValue1,iValue2);


    return 0;
}