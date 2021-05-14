
/*
problem statment-write a recursive  program to accept number from user and return lagest digits
input-45687
output- 8
*/
#include<stdio.h>
int  LargDigit(int iNo,int ilarg)
{
  static int iDigit=0,temp=0;
     if (temp==0)
     {
      temp=ilarg; 
     }
      
    if(iNo != 0)
    {
       iDigit=iNo%10;
      
       iNo=iNo/10;
       if (temp<iDigit)
       {
          temp=iDigit;
       }
       
       
       LargDigit(iNo,ilarg);
    }
   
    return temp;
}
int main()
{
  int iValue=0,ilarg=0;
  int iRet=0;
  printf("Enter Number..\n");
  scanf("%d",&iValue);
  ilarg=(iValue%10);
iRet=LargDigit(iValue,ilarg);
  

  printf("Largest Digit is  %d",iRet);

    return 0;
}