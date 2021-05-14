
/*
problem statment-write a recursive  program which accept string from user count number of charactor 
input-Hellow
output- 5
*/
#include<stdio.h>
int CountStrChr(char *Str)
{
  static int i=0;
    if(*Str!= '\0')
    {
       Str++;
       i++;
       
      CountStrChr(Str);
    }
    return i;
}
int main()
{
  int iRet=0;
  char Arr[30]={'\0'};
  printf("Enter String...\n");
  scanf("%[^'\n']s",Arr);
  iRet=CountStrChr(Arr);

   printf("Number of charctor in string are  %d",iRet);
    return 0;
}