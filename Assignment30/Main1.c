/*
Problem statment -  Write a program which accept string from user and copy the containtent of string 
in another string


*/    

#include<stdio.h>

void StringCpyX(char *Src, char *Dest)
{
    
   if((Src == NULL) ||(Dest == NULL))
    {
        return;
    }
    
   while (*Src!='\0')
   {
          *Dest=*Src;
          Src++;
          Dest++;

   }
   
   *Dest='\0';  


      
}



int main()
{
   
   char arr[30];
   char brr[30];
        printf("Enter String..\n");
     scanf("%[^'\n']s",arr);


    StringCpyX(arr,brr);      
   printf("String after copy is %s",brr);        

    return 0;
}