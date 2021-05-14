/*
pronlem statment-Accept one number from user and print number of * on screen
*/

#include<stdio.h>
void Display(int);

int main()
{
    int iValue=0;
    printf("Enter Number..");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}

void Display(int iNo)
{
    while (iNo>0)
    {
        printf("*\n");
        iNo--;
    }
    
}
/*
    output
    
C:\Users\HP\Desktop\assignments\assignment1>gcc prog7.c -o myexe

C:\Users\HP\Desktop\assignments\assignment1>myexe
Enter Number..5
*
*
*
*
*

C:\Users\HP\Desktop\assignments\assignment1>


    

*/