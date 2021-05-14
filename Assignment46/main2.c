
/*
problem statment-write a recursive  program which accept number from user and return sumation of its digits 
input-555
output- 15
*/
#include<stdio.h>
int DisplaySum(int iValue)
{
  static int isum=0;
    if(iValue!= 0)
    {
       isum=isum+(iValue%10);
       iValue=iValue/10;
       
       DisplaySum(iValue);
    }
    return isum;
}
int main()
{
  int iValue=0,iRet=0;
  printf("Enter Value...\n");
  scanf("%d",&iValue);
  iRet=DisplaySum(iValue);

   printf("Sumation of digits is %d",iRet);
    return 0;
}