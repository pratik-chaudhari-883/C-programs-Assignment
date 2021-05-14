/*
Problem statment - Write a program Which accept number of rows and number of columns from user Display below pattern
input: iRow=4    iCol=3
output:  3  2  1
         3  2  1
         3  2  1
         3  2  1

*/

#include<stdio.h>
void Pattern(int, int);
//////////////////////////////////////////////////////////////
//
// Function name :   Pattern()
// Parameters :           integer 
// Return value :        None
// Description :           It is used to display  pattern
// Author :                  Pratik suklal chaudhari
// Date :                     10 rd Aug 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
   int iCnt1=0;
   int iCnt2=0;
   

   if (iRow<0)
   {
      iRow=-iRow;
   }
   if (iCol<0)
   {
      iCol=-iCol;
   }
   
   
  for(iCnt1=1;iCnt1<=iRow;iCnt1++)
     {
        
          printf("\n");
         for(iCnt2=iCol;iCnt2>0;iCnt2--)
           {
             printf("%d\t",iCnt2);
              
              
     
           }

      }

}

int main()
{
    int  iValue1=0;
    int iValue2=0;
    

     printf("Enter Rows..\n");
     scanf("%d",&iValue1);

      printf("Enter Columns..\n");
     scanf("%d",&iValue2);

     Pattern(iValue1, iValue2);


    return 0;
}