/*
Problem statment -  Write a program which accept string from user and convert it into uppercase
input: "Marvallus"
output : marvallus
*/    

#include<stdio.h>
#include<stdlib.h>

void Strlwrx(char Str[])
{
    
      int i=0,iLen=0,iCnt=0,iCnt2=0;
      while (Str[i]!='\0')
      {
         if(Str[i]>= 97 && Str[i]<=122)
         {

            Str[i]=Str[i]-32;
         
         }
         
         
         i++;

      }

      printf("modifide string is %s",Str);
          
}



int main()
{
   char Str[30];
        printf("Enter String..\n");
     scanf("%[^'\n']s",Str);

    Strlwrx(Str);
       
       

    return 0;
}