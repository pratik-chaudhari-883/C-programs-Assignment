/*
Problem statment -  Accept charector from user and check whether it digit or not 
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
     

         if (cCh>=49 && cCh<=57)
         {
              return TRUE;
         }
         else
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
               printf("it is Digit");
          }
          else
          {
               printf("it is not Digit");
 
          }
          

    return 0;
}