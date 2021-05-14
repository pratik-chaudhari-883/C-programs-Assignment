/*
Problem statment - Write a program Which accept range from user and return addition of all even  number between   that range
*/

#include<stdio.h>
int EvenAddRangeDisplay(int,int );
//////////////////////////////////////////////////////////////
//
// Function name :    EvenAddRangeDisplay( )
// Parameters :           integer 
// Return value :        None
// Description :           It is used to display addition of all even  number
// Author :                  Pratik suklal chaudhari
// Date :                     10 rd Aug 2020
//
/////////////////////////////////////////////////////////////

int EvenAddRangeDisplay(int iNo1 , int iNo2)
{
   int iCnt=0;
   int iAdd=0;
   if (iNo1>iNo2)
   {
      return 1;
   }
   
  
   if (iNo1<0)
   {
       return 0;
     
   }
   else
   {
      for ( iCnt =iNo1; iCnt<= iNo2; iCnt++)
    {
      if((iCnt%2)==0)
      {
       iAdd=iAdd+iCnt;
      }
    }
   
   }
  return iAdd;
    
}

int main()
{
    int  iValue1=0, iValue2=0;
    
     int iRet=0;
     printf("Enter Range..\n");
     scanf("%d%d",&iValue1,&iValue2);

    iRet=EvenAddRangeDisplay(iValue1,iValue2);
       if((iRet==0)||(iRet==1))
       {
          printf("Invalid Range");
       }
       else
       {
          printf("Addition of given range is:%d",iRet);
       }
       
    
   

    return 0;
}