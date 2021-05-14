/*
Problem statement-  Accept number from user and check whether 7th and 8th,9th,is bit is on or off.
 
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
   int iMask=0x000001C0;
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
          printf("7th,8th,9th bit is on");
      }else
      {
                    printf("7th,8th,9th bit is off");

      }
      
      
    return 0;
}