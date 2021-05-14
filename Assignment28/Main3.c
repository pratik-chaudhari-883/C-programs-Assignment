/*
Problem statment -  Write a program which accept string from user and convert it into toggle case
input: "Marvallus"
output : mARVALLUS
*/    

#include<stdio.h>
#include<stdlib.h>

void Strltogglex(char Str[])
{
    
      int i=0,iLen=0,iCnt=0,iCnt2=0;
      while (Str[i]!='\0')
      {
         if(Str[i]>= 65 && Str[i]<= 90)
         {

            Str[i]=Str[i]+32;
         
         }else if(Str[i]>= 97 && Str[i]<=122)
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

    Strltogglex(Str);
       
       

    return 0;
}