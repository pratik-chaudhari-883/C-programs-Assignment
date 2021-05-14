/*
Problem statment -  Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
Output :
*/    

#include<stdio.h>
#include<stdlib.h>
void Display(char cValue)
{
     int iCnt=0;
   
if(cValue>=65&&cValue<=90)
  {
       for(iCnt=cValue; iCnt<=90;iCnt++)
       {
         printf("%c",iCnt);
       }
  }else if(cValue>=97&&cValue<=122)
  {
    for(iCnt=cValue; iCnt<=122;iCnt++)
    {
    printf("%c",iCnt);
    }
  }else
  {
    printf("");
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