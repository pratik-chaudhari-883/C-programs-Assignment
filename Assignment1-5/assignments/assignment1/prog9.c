/*
pronlem statment-Accept two number from user and display first number in second number of time  
*/
#include<stdio.h>
void Display(int,int );

void Display(int iNo1 , int ifrequency)
{
        int iCnt=0;
        if(ifrequency<0)
        {
            ifrequency= -ifrequency;
        }
        

            if(ifrequency==0)
            {
              printf(" ");
              } 

        for(iCnt=1; iCnt<=ifrequency; iCnt++)
        {
            printf("%d",iNo1);
        }
}

int main()
{
    int iValue1=0;
    int iCount=0;
    printf("Enter Two Numbers");
    scanf("%d%d",&iValue1,&iCount);
    Display(iValue1,iCount);

    return 0;

}
/*      output
        C:\Users\HP\Desktop\assignments\assignment1>gcc prog9.c -o myexe

C:\Users\HP\Desktop\assignments\assignment1>myexe
Enter Two Numbers-2 5
-2-2-2-2-2
C:\Users\HP\Desktop\assignments\assignment1>myexe
Enter Two Numbers12 5
1212121212
C:\Users\HP\Desktop\assignments\assignment1>myexe
Enter Two Numbers21 -3
212121
C:\Users\HP\Desktop\assignments\assignment1>myexe
Enter Two Numbers-2 0

C:\Users\HP\Desktop\assignments\assignment1>

*/