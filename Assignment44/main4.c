
/*
problem statment-write a recursive  program of a below pattern
output-   A B C D F
*/
#include<stdio.h>
void Display()
{
    static int iNo='A';
    if(iNo!= 'G')
    {
       printf("%c\t",iNo);
       iNo++;
       Display();
    }
    
}
int main()
{
  Display();


    return 0;
}