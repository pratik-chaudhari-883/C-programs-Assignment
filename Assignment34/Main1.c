/*
Problem statement-  Accept number from user and and also accept possition check whether bit at that possition is on or off 
 
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT; 
#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo, int iPos)
{
   
   int iMask=0x00000001;

   int iResult=0;
       if (iNo<0)
       {
           iNo=-iNo;
       }
         
    if((iPos < 1) || (iPos > 32))
    {
        return 0;
    }
       iMask=iMask << (iPos-1);
   iResult=iNo&iMask;

   if (iResult==iMask)
   {
       
       return  TRUE;
   }else
   {
      
       return FALSE;
   }
   
   

}

int main()
{
    UINT iValue=0;
    int iPos=0;
 
       BOOL bRet=FALSE;
    printf("Enter Number..\n");
    scanf("%d",&iValue);
printf("Enter Bit possition..\n");
    scanf("%d",&iPos);

    bRet=CheckBit(iValue,iPos);
     if (bRet==TRUE)
     {
         printf("Given bit is on ");
     }else
     {
         printf("Given bit is off ");
     }
     
     
      
    return 0;
}