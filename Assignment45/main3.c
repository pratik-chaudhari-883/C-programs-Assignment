
/*
problem statment-write a recursive  program of a below pattern
input-5
output- 1 2 3 4 5
*/
#include<stdio.h>
void Display(int iValue)
{
  
    if(iValue!= 0)
    {
       printf("%d\t",iValue);
       iValue--;
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