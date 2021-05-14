/*
Problem statment -  Write a program which accept string from user and count number of small charactor
input: HEllo
output : 3
*/    

#include<stdio.h>
#include<stdlib.h>
int SmallCapital(char Str[])
{
     int iCnt=0;
      int i=0;


      while (Str[i]!='\0')
      {
        if ((Str[i]>='a') && (Str[i]<='z'))
        {
              iCnt++;
        }

          i++;
      }
      
     
     
        return iCnt;
         
         
}



int main()
{
   char Str[30];
   int iRet=0;
     printf("Enter String..\n");
     scanf("%[^'\n']s",Str);

      iRet=SmallCapital(Str);
      printf("number of Capital letters are %d",iRet);

    return 0;
}