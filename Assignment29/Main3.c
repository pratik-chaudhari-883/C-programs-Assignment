/*
Problem statment -  Write a program which accept string from user and also accept one charector and return 
first occurance of that charactor 

input: "Marvallus 564"
element v
output : friquency is 1
*/    

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(char Str[], char ch)
{
    
    
      int i=0,iFriquency=0;
      while (Str[i]!='\0')
      {
         if(Str[i] == ch)
         {
         
            break;
         }
         
         i++;

      }
       if (Str[i]==ch)
       {
          return i;
       }else
       {
          return -1;
       }
       

          
}



int main()
{
   int iRet=0;
   char Str[30];
   char ch='\0';
        printf("Enter String..\n");
     scanf("%[^'\n']s",Str);

printf("Enter charactor which you want to search ..\n");
     scanf(" %c",&ch);

    iRet=FirstOcc(Str,ch);
       
            printf("index of first Occurance is %d",iRet);
               

    return 0;
}