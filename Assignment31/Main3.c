/*
problem statment - write a program which accept string from user and copy that characters of thet string
into the another string and convert all small charactor in capital
input - pratik
output - PRATIK
*/
#include<stdio.h>

void ConvCapitStr(char Src[], char Dest[])
{
  int i=0,iCnt=0;
   if ((Src==NULL))
   {
       return;
   }
      while(Src[i]!='\0')
      {
          if ((Src[i] >='a')&&(Src[i] <= 'z'))
          {
              Dest[iCnt]=Src[i]-32;
               i++;
              iCnt++;
          }else
          {
              Dest[iCnt]=Src[i];
              i++;
              iCnt++;
          }
          
          
      }
      
        
    
    Dest[iCnt]='\0';
   
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