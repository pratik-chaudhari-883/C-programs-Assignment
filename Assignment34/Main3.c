/*
Problem statement-  Accept number from user and and also accept possition  and on that bit 
 
*/
#include<stdio.h>

typedef unsigned int UINT; 
#define TRUE 1
#define FALSE 0

UINT OnBit(UINT iNo, int iPos)
{
   
   int iMask=0x00000001;
     int iRet=0;
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

   if (iResult!=iMask)
   {
       
       iRet=iNo^iMask;
       return iRet;
   }else
   {
      printf("bit is alrady off");
       return iNo;
   }
   
   

}

int main()
{
    UINT iValue=0;
    int iPos=0;
 
       int iRet=0;
    printf("Enter Number..\n");
    scanf("%d",&iValue);
printf("Enter Bit possition..\n");
    scanf("%d",&iPos);

    iRet=OnBit(iValue,iPos);
     printf("bit is on %d",iRet);
     
      
    return 0;
}