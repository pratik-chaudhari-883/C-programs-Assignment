/*
Problem statment -  Write a program which accept string from user and count the white spaces in that string 
input: "Marvallus 564"
output : 1
*/    

#include<stdio.h>
#include<stdlib.h>

int CountWhiteSpaces(char Str[])
{
    
      int i=0,icount=0;
      while (Str[i]!='\0')
      {
         if ((Str[i]==' '))
         {
            icount++;
         }
         
         
         i++;

      }

      return icount;
          
}



int main()
{
   int iRet=0;
   char Str[30];
        printf("Enter String..\n");
     scanf("%[^'\n']s",Str);

    iRet=CountWhiteSpaces(Str);
       
       printf("Number of white spaces are : %d",iRet);

    return 0;
}