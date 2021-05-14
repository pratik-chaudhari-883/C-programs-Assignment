/*
1. program to divide two numbers.
*/
#include<stdio.h>
int Division(int , int );

int Division(int iNo1 , int iNo2)
{
    int iAns=0;

    if(iNo2 >iNo1)
    {
        return -1;
    }
    
    iAns=iNo1/iNo2;
    return iAns;

}

int main()
{
    int iValue1= 15;
    int iValue2= 5;
    int iRet=0;

    iRet=Division(iValue1,iValue2);
    printf("Division is %d",iRet);

    return 0;
}
/*
1. program to divide two numbers.
//output
\Users\HP>cd Desktop/assignments/assignment1

C:\Users\HP\Desktop\assignments\assignment1>gcc prog1.c -o Myexe

C:\Users\HP\Desktop\assignments\assignment1>Myexe
Division is 3
C:\Users\HP\Desktop\assignments\assignment1>

*/