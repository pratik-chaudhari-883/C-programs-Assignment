/*
Problem statment -  Write a program which accept string from user and check Whether it contains vowels in it or not 
input: "marvallus"
output : TRUE
*/    

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL checkVowels(char Str[])
{
    
      int i=0;


      while (Str[i]!='\0')
      {
        if((Str[i]=='a')||(Str[i]=='A')||(Str[i]=='e')||(Str[i]=='E')||(Str[i]=='i')||(Str[i]=='I')||(Str[i]=='o')
        ||(Str[i]=='O')||(Str[i]=='u')||(Str[i]=='U'))
        {
              return TRUE;
        }
        else
        {
          return FALSE;
        }
        
       i++;
      }
      
     
     
      
         
         
}



int main()
{
   char Str[30];
   BOOL bRet=0;
     printf("Enter String..\n");
     scanf("%[^'\n']s",Str);

      bRet=checkVowels(Str);
       if(bRet==TRUE)
       {
         printf("it contain vowels");
       }else
       {
         printf("it not contain vowels");
       }
       

    return 0;
}