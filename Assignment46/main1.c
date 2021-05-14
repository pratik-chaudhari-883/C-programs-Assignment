
/*
problem statment-write a recursive  program of a below pattern
input-5
output-   5 * 4 * 3 * 2 * 1 *
*/
#include<stdio.h>
void Display(int iValue)
{
  
    if(iValue!= 0)
    {
       printf("%d\t*\t",iValue);
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