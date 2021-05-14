/*
Problem statment - Write a program Which accept range from user and display all number in reverce oder from that range
*/

#include<stdio.h>
void ReversRangeDisplay(int,int );
//////////////////////////////////////////////////////////////
//
// Function name :   ReversRangeDisplay()
// Parameters :           integer 
// Return value :        None
// Description :           It is used to display number from range
// Author :                  Pratik suklal chaudhari
// Date :                     10 rd Aug 2020
//
/////////////////////////////////////////////////////////////

void ReversRangeDisplay(int iNo1 , int iNo2)
{
   int iCnt=0;

   if (iNo1>iNo2)
   {
      printf("Invalid Range");
   }
   else
   {
      for ( iCnt =iNo2; iCnt>= iNo1; iCnt--)
    {
       printf("%d\t",iCnt);
    }
   }
   
   
    
    
}

int main()
{
    int  iValue1=0, iValue2=0;
    

     printf("Enter Range..\n");
     scanf("%d%d",&iValue1,&iValue2);

     ReversRangeDisplay(iValue1,iValue2);


    return 0;
}