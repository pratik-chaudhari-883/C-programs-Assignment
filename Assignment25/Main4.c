/*
Problem statment -  Accept charector from user and check whether smallcase or not 
input f
output  true
input F
output FALSE
*/    

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL CheckSmallcase(char cCh)
{
     int iCnt=0;
     

         if (cCh>=97 && cCh<=122)
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

 bRet= CheckSmallcase(cValue);
          if(bRet==TRUE)
          {
               printf("it is Smallcase");
          }
          else
          {
               printf("it is not Smallcase");
 
          }
          

    return 0;
}