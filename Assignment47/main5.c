
/*
problem statment-write a recursive  program to accept number from user and return it reverce number 
input-121
output- 121
*/
#include<stdio.h>
int  ReversNumber(int iNo)
{
  static int iDigit=0,Rev=0;
    
      
    if(iNo != 0)
    {
       iDigit=iNo%10;
      
       iNo=iNo/10;
       Rev=Rev*10+iDigit;
       
       ReversNumber(iNo);
    }
   
    return Rev;
}
int main()
{
  int iValue=0;
  int iRet=0;
  printf("Enter Number..\n");
  scanf("%d",&iValue);

iRet=ReversNumber(iValue);
  

  printf("Reverse number is %d",iRet);

    return 0;
}