/*
problem statment-write a recursive  program to accept number from user and return lagest digits
input-45687
output- 8
*/
#include<stdio.h>
int  SmallChr(char *Str)
{  
  static int iCnt=0;

     if (*Str!='\0')
     {
       if ((*Str>='a')&&(*Str<='z'))
       {
         iCnt++;
       }
       Str++;
        SmallChr(Str);
     }
        return iCnt;
    }
   

int main()
{
  char arr[30]={'\0'};
  int iRet=0;
  printf("Enter String..\n");
  scanf("%[^'\n']s",arr);
 

iRet=SmallChr(arr);
  

  printf("in your string there are %d small chareter",iRet);

    return 0;
}