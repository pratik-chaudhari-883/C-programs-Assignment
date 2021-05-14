/*
Problem statment -  Write a program which accept string from user and display in reverse order
input: "marvallus"
output : sullavram
*/    

#include<stdio.h>
#include<stdlib.h>

void Reversstring(char Str[])
{
    
      int i=0,iLen=0,iCnt=0,iCnt2=0;
      char Revstr[30];

          
      while (Str[i]!='\0')
      {
        i++;
        iLen++;
      }
      
      
     for(iCnt=iLen-1; iCnt>=0;iCnt--)
     {
          Revstr[iCnt2]=Str[iCnt];
          iCnt2++;
     }
      // for(iCnt2=0; iCnt2<'\0';iCnt2++)
      // {
      //    printf("%s",Revstr[iCnt2]);
      // }  

   printf("%s",Revstr);    
}



int main()
{
   char Str[30];
        printf("Enter String..\n");
     scanf("%[^'\n']s",Str);

    Reversstring(Str);
       
       

    return 0;
}