 /*
Problem statment -  Write a program which accept 2 string from user and concat that string
after first string

*/    

#include<stdio.h>

void StrConcat(char *Src, char *Dest)
{
    
   if((Src == NULL) ||(Dest == NULL))
    {
        return;
    }
    
   while(*Dest!='\0')
   {
      Dest++;
      
   }
      // Src--;
   
   while(*Src !='\0')
   {
      
          *Dest=*Src;
            Dest++; 
      
         Src++;
         
   }
   
   
   *Dest= '\0';  
}



int main()
{
   
   char arr[30];
   char brr[30];
        printf("Enter first String..\n");
        scanf("%[^'\n']s",arr);
        printf("Enter second String..\n");
        scanf(" %[^'\n']s",brr);

    StrConcat(arr,brr);      
   printf(" concat string  %s\n",brr);        

    return 0;
}