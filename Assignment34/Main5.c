/*
Problem statement-  Accept number from user and and also toggle that bit 
 
*/
#include<stdio.h>

typedef unsigned int UINT; 
#define TRUE 1
#define FALSE 0

UINT ToggleBit(UINT iNo, int iPos)
{
   
   int iMask=0xF000000F;
        int iResult=0;
       if (iNo<0)
       {
           iNo=-iNo;
       }
         
    if((iPos < 1) || (iPos > 32))
    {
        return 0;
    }
    
   iResult=iNo^iMask;

  return iResult;
   
   

}

int main()
{
    UINT iValue=0;
    int iPos=0;
 
       int iRet=0;
    printf("Enter Number..\n");
    scanf("%d",&iValue);

    iRet=ToggleBit(iValue,iPos);
     printf("Bit is Toggle");
     
      
    return 0;
}