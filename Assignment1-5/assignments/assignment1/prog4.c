/*
program - Accept one number check wether number is divisible by 5 or not.
*/
#include<stdio.h>
typedef int BOOL;//*
#define TRUE 1
#define FALSE 0
BOOL check(int);

BOOL check(int iNo)
{
    if ((iNo%5)==0)
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
    int iValue=0;
    BOOL bRet=FALSE;//*
    printf("Enter the Number ");
    scanf("%d",&iValue);

    bRet=check( iValue);//*
        if(bRet==TRUE)
        {
                printf("%d is Divisible by 5",iValue);
        }
        else
        {
              printf("%d is not Divisible by 5",iValue);
        }
        

    return 0;
}
/*
output 
C:\Users\HP\Desktop\assignments\assignment1>gcc prog4.c -o myexe

C:\Users\HP\Desktop\assignments\assignment1>myexe
Enter the Number 15
15 is Divisible by 5
C:\Users\HP\Desktop\assignments\assignment1>

*/