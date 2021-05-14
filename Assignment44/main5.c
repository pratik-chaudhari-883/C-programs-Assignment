
/*
problem statment-write a recursive  program of a below pattern
output-   a  b  c  d  e  f
*/
#include<stdio.h>
void Display()
{
    static int iNo='a';
    if(iNo!= 'g')
    {
       printf("%c\t\t",iNo);
       iNo++;
       Display();
    }
    
}
int main()
{
  Display();


    return 0;
}