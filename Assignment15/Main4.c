/*
Problem statment - Write a program Which accept number from user and Display below pattern
input: iRow=3 iCol=3
output: 3 3 3
        2 2 2
        1 1 1







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
   int iLetter=0;

   if (iRow<0)
   {
      iRow=-iRow;
   }
iLetter=iRow;
   for ( iCnt1 = 1; iCnt1 <=iRow; iCnt1++)
   {
          
           
           for ( iCnt2 =1; iCnt2 <= iCol; iCnt2++)
           {
                printf("%d\t",iLetter);
           }
           iLetter--;
            printf("\n");
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