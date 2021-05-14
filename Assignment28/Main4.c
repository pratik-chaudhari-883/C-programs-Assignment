/*
Problem statment -  Write a program which accept string from user and display only Digits from that string
input: "Marvallus564"
output : 564
*/    

#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(char Str[])
{
    
      int i=0,iLen=0,iCnt=0,iCnt2=0;
      while (Str[i]!='\0')
      {
         if ((Str[i] >= '0')&& (Str[i]<='9'))
         {
            printf("%c",Str[i]);
         }
         
         
         i++;

      }

      
          
}



int main()
{
   char Str[30];
        printf("Enter String..\n");
     scanf("%[^'\n']s",Str);

    DisplayDigits(Str);
       
       

    return 0;
}