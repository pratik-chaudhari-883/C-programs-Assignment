/*
Problem statment -  Write a program which accept string from user and also accept one charector and return 
Last occurance of that charactor 

input: "Marvallus 564"
element v
output : friquency is 1
*/    

#include<stdio.h>
#include<stdlib.h>

int LastOcc(char Str[], char ch)
{
    
    
      int i=0,iPos= -1;
      while (Str[i]!='\0')
      {
         if(Str[i] == ch)
         {
         
              iPos=i;
         }
         
         i++;

      }
       
       
          return iPos;
       
       

          
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

    iRet=LastOcc(Str,ch);
          
          if (iRet == -1)
          {
             printf("There is no such charactor ");
          }else
          {
              printf("index of larst Occurance is %d",iRet);
               
          }
          
          
       
           

    return 0;
}