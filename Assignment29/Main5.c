/*
Problem statment -  Write a program which accept string from user and reverce that string in place 

input: "Marvallus 564"
element v
output : friquency is 1
*/    

#include<stdio.h>
#include<stdlib.h>

void RevString(char Str[])
{
    
    
   
      int iStart=0,iEnd=0,Temp=0;


      while (Str[iEnd] != '\0')
      {
         iEnd++;
      }
      
        iEnd--;
        iStart=0;
      while (Str[iStart]!='\0')
      {
         
      Str[Temp]=Str[iStart];
      Str[iStart]=Str[iEnd];
      Str[iEnd]=Str[Temp];

        iStart++;
        iEnd--;

      }
          
}



int main()
{
   
   char Str[30];
   
        printf("Enter String..\n");
     scanf("%[^'\n']s",Str);


    RevString(Str);      
   printf("Reverce string is %s",Str);        

    return 0;
}