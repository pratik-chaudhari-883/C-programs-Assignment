/*
problem statment - write a program which accept string from user and copy that characters of thet string
into the another string in reverse order 
input - pratik
output - kitarp 
*/
#include<stdio.h>

void CopRevStr(char *Src, char *Dest)
{
  int i=0;
   if ((Src==NULL))
   {
       return;
   }
   
    while (*Src != '\0')
    {
        Src++;
    }
    
    Src--;
    while (*Dest != Src[0])
    {
        *Dest=*Src;
        Dest++;
        Src--;
       
    }
    *Dest='\0';
   
}






int main()
{
     char arr[30] = {'\0'};   // Bharaleli book
    char brr[30] = {'\0'};   // Blank book
   

    printf("Enter the string..\n");
    scanf("%[^'\n']s",arr);

    CopRevStr(arr,brr);

    printf("Reverse string is %s\n",brr);

}