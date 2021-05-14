/*
Problem statment - Write a program Which accept number from user and Display below pattern
input: 5
output: 5  #  4  #  3  #  2  #  1  #

input: 3
output: 3  #  2  #  1  #

input: -5
output: 5  #  4  #  3  #  2  #  1  #

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
  

   if (iNo<0)
   {
      iNo=-iNo;
   }

   
   for (iCnt=iNo; iCnt>0; iCnt--)
      {


          printf("%d\t#\t",iCnt);
      
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