/*
Problem statement-  Accept number from user and check whether first and last  bit is on or off.
 
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
   int iMask=0x80000001;
   int iResult=0;
       if (iNo<0)
       {
           iNo=-iNo;
       }
       
   iResult=iNo&iMask;

   if (iResult==iMask)
   {
       return TRUE;
   }else
   {
       return FALSE;
   }
   
   

}

int main()
{
    UINT iValue=0;
   BOOL bRet=FALSE;
    printf("Enter Number..\n");
    scanf("%d",&iValue);

    bRet=CheckBit(iValue);
      if (bRet==TRUE)
      {
          printf(" First and Last bit is on");
      }else
      {
                    printf("First and  bit is off");

      }
      
      
    return 0;
}