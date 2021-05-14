
/*
problem statment-write a recursive  program of a below pattern
output-   * * * * *
*/
#include<stdio.h>
void Display()
{
    static int iNo=5;
    if(iNo!= 0)
    {
       printf("*\t");
       iNo--;
       Display();
    }
    
}
int main()
{
  Display();


    return 0;
}