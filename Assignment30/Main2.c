 /*
Problem statment -  Write a program which accept string from user and copy the containtent of string 
in another string (if thord parameter is grater than scorce string then copy it into destination )


*/    

#include<stdio.h>

void StringCpyX(char *Src, char *Dest,int iCnt)
{
    
   if((Src == NULL) ||(Dest == NULL)||(iCnt==0))
    {
        return;
    }
    
   while ((*Src!='\0')&&(iCnt!= 0))
   {
          *Dest=*Src;
          Src++;
          Dest++;
          iCnt--;

   }
   
   *Dest='\0';  


      
}



int main()
{
   
   char arr[30];
   char brr[30];
        printf("Enter String..\n");
     scanf("%[^'\n']s",arr);


    StringCpyX(arr,brr,10);      
   printf("String after copy is %s",brr);        

    return 0;
}