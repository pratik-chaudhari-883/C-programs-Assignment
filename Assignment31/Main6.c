/*
problem statment - write a program which accept string from user and copy that characters of thet string
into the another string and convert in into toggle case 
input - pRATIK
output -pratik 
*/
#include<stdio.h>

void ConvCapitStr(char *Src, char *Dest)
{
  //int i=0,iCnt=0;
   if ((Src==NULL))
   {
       return;
   }
     while(*Src!='\0')
     {
         if ((*Src >= 'a')&&(*Src <= 'z'))
         {
             *Dest=*Src-32;
              Src++;
              Dest++;
         }else
         {
             *Dest=*Src;
              Src++;
              Dest++;
         }
         
         
     }
    
    
    *Dest='\0';
   
}



int main()
{
     char arr[30] = {'\0'};   // Bharaleli book
    char brr[30] = {'\0'};   // Blank book
   

    printf("Enter the string..\n");
    scanf("%[^'\n']s",arr);

    ConvCapitStr(arr,brr);

    printf("convrted string is %s\n",brr);

}