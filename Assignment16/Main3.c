/*
Problem statment - Write a program Which accept number from user and Display below pattern
input: iRow=4, icol=4
output: 2  4  6  8  
        1  3  5  7
        2  4  6  8  
        1  3  5  7

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
   
  int iLetter=0;

   if (iRow<0)
   {
      iRow=-iRow;
   }

   for(iCnt1=1; iCnt1<=iRow; iCnt1++)
   {
       printf("\n");
       
      
        if((iCnt1%2)==0)
        {
            iLetter=1;
                for (iCnt2=1; iCnt2<=iCol; iCnt2++)
                {
                  
                  
                    printf("%d\t",iLetter);
                  
                    iLetter++;

                 }  

        }
        else
        {
           for (iCnt2=1; iCnt2<=iCol; iCnt2++)
                {
                iLetter=97;
              
                    printf("%c\t",iLetter);

                    iLetter++;

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