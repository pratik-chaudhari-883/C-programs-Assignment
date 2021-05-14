
/*
problem statment-write a recursive  program to count white spaces
input-well com
output- 1
*/
#include<stdio.h>
int  CountSpace(char *Str)
{
  static int iCnt=0;
  
    if(*Str!='\0')
    {
       if (*Str ==' ')
       {
         iCnt++;
       }
       
       Str++;
       CountSpace(Str);
    }
   
    return iCnt;
}
int main()
{
  char arr[30]={'\0'};
  int iRet=0;
  printf("Enter string...\n");
  scanf("%[^'\n']s",arr);
iRet=CountSpace(arr);
  

  printf("white spaces in your string are %d",iRet);

    return 0;
}