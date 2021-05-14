
/*
problem statment-write a recursive  program of a below pattern
input-5
output- 1 2 3 4 5
*/
#include<stdio.h>
void Display(int iValue)
{
  static int iNo=1;
    if(iNo!= (iValue+1))
    {
       printf("%d\t",iNo);
       iNo++;
       Display(iValue);
    }
    
}
int main()
{
  int iValue=0;
  printf("Enter Value...\n");
  scanf("%d",&iValue);
  Display(iValue);


    return 0;
}