
/*
problem statment-write a recursive  program to accept number from user and return Smallest digits
input-45687
output- 8
*/
#include<stdio.h>
int  SmallDigit(int iNo,int iSmall)
{
  static int iDigit=0,temp=0;
     if (temp==0)
     {
      temp=iSmall; 
     }
      
    if(iNo != 0)
    {
       iDigit=iNo%10;
      
       iNo=iNo/10;
       if (temp>iDigit)
       {
          temp=iDigit;
       }
       
       
       SmallDigit(iNo,iSmall);
    }
   
    return temp;
}
int main()
{
  int iValue=0,iSmall=0;
  int iRet=0;
  printf("Enter Number..\n");
  scanf("%d",&iValue);
  iSmall=(iValue%10);
iRet=SmallDigit(iValue,iSmall);
  

  printf("Smallest Digit is  %d",iRet);

    return 0;
}