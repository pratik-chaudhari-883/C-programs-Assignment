/*
Problem statment -  Write a program which accept string from user and also accept one charector and check that charactor 
is present in that string or not 
input: "Marvallus 564"
output : 1
*/    

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkCharactor(char Str[], char ch)
{
    
    
      int i=0,icount=0;
      while (Str[i]!='\0')
      {
         if(Str[i] == ch)
         {
         
            break;
         }
         
         i++;

      }

         if(Str[i]==ch)
         {
            return TRUE;
         }
         else
         {
            return FALSE;
         }
         
   
          
}



int main()
{
   BOOL bRet=FALSE;
   char Str[30];
   char ch='\0';
        printf("Enter String..\n");
     scanf("%[^'\n']s",Str);

printf("Enter charactor which you want to search ..\n");
     scanf(" %c",&ch);

    bRet=chkCharactor(Str,ch);
       
            if (bRet==TRUE)
            {
                printf("charector is found ");
            }
            else
            {
               printf("charector is not found");
            }
            
               

    return 0;
}