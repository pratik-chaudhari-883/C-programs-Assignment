
/*
problem statment-write a recursive  program which accept number from user return its product of digt 
input-523
output- 30
*/
#include<stdio.h>
int Product(int iNo)
{
  static int iProduct=1;
  static int iValue=0;
  iValue=iNo;
  if (iNo>0)
  {
    iProduct=iProduct*(iValue%10);
    iValue=iValue/10;
     iNo--;
   Product(iValue);
    }
   
    return iProduct;
}
int main()
{
  int iRet=0,iNo=0;

  printf("Enter Number...\n");
  scanf("%d",&iNo);
  iRet=Product(iNo);

  printf("Number of charctor in string are  %d ",iRet);

    return 0;
}