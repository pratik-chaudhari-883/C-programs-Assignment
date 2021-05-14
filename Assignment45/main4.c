
/*
problem statment-write a recursive  program of a below pattern
input-5
output- ABCD
*/
#include<stdio.h>
void Display(int iValue)
{
   static int iNo=1;
   static int iNo2='A';
    if(iNo!=(iValue+1))
    {
       printf("%c\t",iNo2);
       iNo++;
       iNo2++;
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