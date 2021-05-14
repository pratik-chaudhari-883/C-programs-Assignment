 /*
Problem statment -  Write a program which accept string from user and copy the capital  charactor  of string


*/    

#include<stdio.h>

void StringCpyXCapital(char *Src, char *Dest)
{
    
   if((Src == NULL) ||(Dest == NULL))
    {
        return;
    }
    
   while(*Src!='\0')
   {
      if ((*Src >= 'A')&&(*Src <= 'Z'))
      {
          *Dest=*Src;
           Dest++;   
           
      }
      
         
         Src++;
         

   }
   
   *Dest='\0';  


      
}



int main()
{
   
   char arr[30];
   char brr[30];
        printf("Enter String..\n");
     scanf("%[^'\n']s",arr);


    StringCpyXCapital(arr,brr);      
   printf("capital letter are  %s",brr);        

    return 0;
}