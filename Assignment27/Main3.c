/*
Problem statment -  Write a program which accept string from user and return diffrence between number of small 
charactor and capital
input: HEllo
output : 1 (3-2)
*/    

#include<stdio.h>
#include<stdlib.h>
int DiffCapiandSmall(char Str[])
{
     int iCnt1=0,iCnt2=0;
      int i=0;


      while (Str[i]!='\0')
      {
        if ((Str[i]>='a') && (Str[i]<='z'))
        {
              iCnt1++;
        }
        if ((Str[i]>='A') && (Str[i]<='Z'))
        {
              iCnt2++;
        }

          i++;
      }
      
     
     
        return (iCnt1-iCnt2) ;
         
         
}



int main()
{
   char Str[30];
   int iRet=0;
     printf("Enter String..\n");
     scanf("%[^'\n']s",Str);

      iRet=DiffCapiandSmall(Str);
      printf("Diffrence between number of Capital and Small letters are %d",iRet);

    return 0;
}