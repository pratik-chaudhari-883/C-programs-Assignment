/*
Problem statment -  Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is. 
*/    

#include<stdio.h>
#include<stdlib.h>
void Display(char cValue)
{
     int iCnt=0;
   
if(cValue>=65&&cValue<=90)
  {
    printf("%c",cValue+32);
  }else if(cValue>=97&&cValue<=122)
  {
    printf("%c",cValue-32);
  }else
  {
    printf("%c",cValue);
  }
       
         
         
}



int main()
{
     
      char cValue ='\0';
     printf("Enter a charector ..\n");
     scanf("%c",&cValue);
     
  Display(cValue);

    return 0;
}