/*
Problem statement-  Accept number from user and off 7th bit of that number 
 
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT; 
#define TRUE 1
#define FALSE 0

UINT  CheckBit(UINT iNo)
{
   int iMask=0x00000040;
   UINT iRet=0;
   int iResult=0;
       if (iNo<0)
       {
           iNo=-iNo;
       }
       
   iResult=iNo&iMask;

   if (iResult==iMask)
   {
       iRet=iNo^iMask;
       return iRet;
   }else
   {
       printf("7th Bit is alrady off");
       return iNo;
   }
   
   

}

int main()
{
    UINT iValue=0;
 
       int iRet=FALSE;
    printf("Enter Number..\n");
    scanf("%d",&iValue);

    iRet=CheckBit(iValue);
     printf("Now 7th bit is off %d\t",iRet);      
      
    return 0;
}