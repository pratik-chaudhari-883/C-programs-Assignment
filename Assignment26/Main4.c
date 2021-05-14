/*
Problem statment -  Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE
*/    

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL SpacialSymball(char cValue)
{
     int iCnt=0;
     int iCount=0;

    

     if(cValue>=33 && cValue<=40)
     {
       return TRUE;
     }else
     {
       return FALSE;
     }
     

}



int main()
{
     
      char cValue ='\0';
      BOOL bRet=0;
     printf("Enter a charector ..\n");
     scanf("%c",&cValue);
     
 bRet=SpacialSymball(cValue);
     if(bRet==TRUE)
      {
        printf("it is spacial symball");
      }else
      {
       printf("it is not  spacial symball"); 
      }
      

    return 0;
}