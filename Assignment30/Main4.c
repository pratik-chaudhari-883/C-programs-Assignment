 /*
Problem statment -  Write a program which accept string from user and copy the small  charactor  of string


*/    

#include<stdio.h>

void StringCpyXSmall(char *Src, char *Dest)
{
    
   if((Src == NULL) ||(Dest == NULL))
    {
        return;
    }
    
   while(*Src!='\0')
   {
      if ((*Src >= 'a')&&(*Src <= 'z'))
      {
          *Dest=*Src;
            Dest++; 
      }
         Src++;
         
   }
   
   *Dest= '\0';  
}



int main()
{
   
   char arr[30];
   char brr[30];
        printf("Enter String..\n");
     scanf("%[^'\n']s",arr);


    StringCpyXSmall(arr,brr);      
   printf("Small letter are  %s",brr);        

    return 0;
}