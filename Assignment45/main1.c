
/*
problem statment-write a recursive  program of a below pattern
input-5
output-   * * * * *
*/
#include<stdio.h>
void Display(int iValue)
{
  
    if(iValue!= 0)
    {
       printf("*\t",iValue);
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