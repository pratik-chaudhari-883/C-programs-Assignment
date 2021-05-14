/*
pronlem statment-Accept one number from user and print number of * on screen
*/
#include<stdio.h>
void  Accept(int);


void  Accept(int iNO)

{
    int i=0;
    for (i=1;i<=iNO;i++)
    {
        printf("*");
    }


}
 
 int main()
 {
  int iValue=0;
  iValue=14;
  Accept(iValue);
    return 0;
 }
 /*
 C:\Users\HP\Desktop\assignments\assignment1>gcc prog5.c -o myexe

C:\Users\HP\Desktop\assignments\assignment1> myexe
Enter any Number... 14
**************
C:\Users\HP\Desktop\assignments\assignment1>


 */