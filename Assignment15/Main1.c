/*
Problem statment - Write a program Which accept number from user and Display below pattern
input: 5
output: A B C D E
        A B C D E
        A B C D E
        A B C D E

input: 3
output: A B C
        A B C
        A B C
input: -5
output: A B C D E
        A B C D E
        A B C D E
        A B C D E





*/    

#include<stdio.h>
void Pattern(int,int);
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

void Pattern(int iRow, int iCol)
{
   int iCnt2=0,iCnt1=0;
   int iCount=0;

   if (iRow<0)
   {
      iRow=-iRow;
   }

   for(iCnt1=1; iCnt1<=iRow; iCnt1++)
   {
       printf("\n");
       iCount=0;   
        for (iCnt2=65; iCnt2<=90; iCnt2++)
       {
              printf("%c\t",iCnt2);
              iCount++;

               if(iCount>=iCol)
              {
                   break;
              }  
        }  
       
   }

}

int main()
{
    int  iValue1=0,iValue2=0;
    

     printf("Enter Rows..\n");
     scanf("%d",&iValue1);
      printf("Enter columan..\n");
     scanf("%d",&iValue2);

     Pattern(iValue1, iValue2);


    return 0;
}