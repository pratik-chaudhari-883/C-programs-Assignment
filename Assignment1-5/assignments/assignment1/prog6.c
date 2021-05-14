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
        printf("*\n");
    }


}
 
 int main()
 {
  int iValue=0;
  printf("Enter any Number... ");
  scanf("%d",&iValue);
  
  Accept(iValue);
    return 0;
 }


/*        output
C:\Users\HP\Desktop\assignments\assignment1>gcc prog6.c -o myexe

C:\Users\HP\Desktop\assignments\assignment1>myexe
Enter any Number... 12
*
*
*
*
*
*
*
*
*
*
*
*

C:\Users\HP\Desktop\assignments\assignment1>

*/































