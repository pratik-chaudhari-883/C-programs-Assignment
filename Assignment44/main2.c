
/*
problem statment-write a recursive  program of a below pattern
output-   1 2 3 4 5
*/
#include<stdio.h>
void Display()
{
    static int iNo=1;
    if(iNo!= 6)
    {
       printf("%d\t",iNo);
       iNo++;
       Display();
    }
    
}
int main()
{
  Display();


    return 0;
}