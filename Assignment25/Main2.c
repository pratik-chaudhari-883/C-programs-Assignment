/*
Problem statment -  Accept charector from user and check whether it is capital or not  
input F
output  true
input &
output FALSE
*/    

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL CheckUppercase(char cCh)
{
     int iCnt=0;
     int iLarge=0;

         if (cCh>=65 && cCh<=90)
         {
              return TRUE;
         }else
         {
              return FALSE;
         }
         
         
         
}



int main()
{
     
     char cValue='\0';
     int iCnt=0;
     BOOL bRet=FALSE;
    

   
   printf(" Enter Any Charector..\n");
   scanf("%c",&cValue);

 bRet= CheckUppercase(cValue);
          if(bRet==TRUE)
          {
               printf("it is capital");
          }else
          {
               printf("it is small");
 
          }
          

    return 0;
}