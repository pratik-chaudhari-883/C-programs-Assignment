/*
pronlem statment-Accept number from user check whether number is even or odd
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 2
BOOL ChkEven(int);

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter Any Number..\n");
    scanf("%d",&iValue);
    bRet=ChkEven(iValue);

    if (bRet==TRUE)
    {
        printf(" Number %d is Even Number ",iValue);
    }else
    {
        printf(" Number %d is Odd Number",iValue);
    }

    return 0;
}



BOOL ChkEven(int iNo)
{
    iNo=iNo%2;
    if(iNo==0)
    {
        return TRUE;
    }else
    {
        return FALSE;
    }
    
}
/*
    Output
    :\Users\HP\Desktop\assignments\assignment1>gcc prog10.c -o myexe

C:\Users\HP\Desktop\assignments\assignment1>myexe
Enter Any Number..
5
 Number 5 is Odd Number
C:\Users\HP\Desktop\assignments\assignment1>myexe
Enter Any Number..
6
 Number 6 is Even Number
C:\Users\HP\Desktop\assignments\assignment1>


*/