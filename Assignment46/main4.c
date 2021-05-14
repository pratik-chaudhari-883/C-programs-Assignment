
/*
problem statment-write a recursive  program which accept number from user return its Factorial 
input-5
output- 120
*/
#include<stdio.h>
int Fact(int iValue)
{
  static int iFact=1;
  if (iValue!=0)
  {
    iFact=iFact*iValue;
     iValue--;
   Fact(iValue);
    }
   
    return iFact;
}
int main()
{
  int iRet=0,iNo=0;

  printf("Enter Number...\n");
  scanf("%d",&iNo);
  iRet=Fact(iNo);

  printf("Number of charctor in string are  %d ",iRet);

    return 0;
}