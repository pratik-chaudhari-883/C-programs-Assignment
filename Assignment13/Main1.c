/*
Problem statment - Write a program Which accept number from user and Display below pattern
input: 5
output: A B C D E

input: 3
output: A B C

input: -5
output: A B C D E
*/

#include<stdio.h>
void Pattern(int);
//////////////////////////////////////////////////////////////
//
// Function name :   Pattern()
// Parameters :           integer 
// Return value :        None
// Description :           It is used to display capital letter  pattern
// Author :                  Pratik suklal chaudhari
// Date :                     10 rd Aug 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
   int iCnt=0;
   int iCount=0;

   if (iNo<0)
   {
      iNo=-iNo;
   }

   
   for (iCnt=65; iCnt<=90; iCnt++)
      {
          printf("%c\t",iCnt);
          iCount++;

          if(iCount>=iNo)
          {
             break;
          }

   
      
     
      
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