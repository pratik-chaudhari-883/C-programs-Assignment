/*
Problem statement-  Accept number from user and toggle 7th and 10th    bit of that number and return modifide number 
 
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT; 
#define TRUE 1
#define FALSE 0

UINT  CheckBit(UINT iNo)
{
   int iMask=0x00000240;
   
   UINT iResult=0;
       if (iNo<0)
       {
           iNo=-iNo;
       }
       
   iResult=iNo^iMask;

   return iResult;

}

int main()
{
    UINT iValue=0;
 
       int iRet=FALSE;
    printf("Enter Number..\n");
    scanf("%d",&iValue);

    iRet=CheckBit(iValue);
     printf("Now 7th and 10th bits are  toggle %d\t",iRet);      
      
    return 0;
}