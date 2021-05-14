/*
1. program to print Number 5 to 1 on screen 
*/
#include<stdio.h>
void Display();

void Display()
{
    int i=0;
    for(i=5; i>0;i--)
    {
        printf("%d\n",i);
        //i++;
    }
}

int main()
{
    Display();
    return 0;
}
/*
      output
      C:\Users\HP\Desktop\assignments\assignment1>gcc prog3.c -o myexe

C:\Users\HP\Desktop\assignments\assignment1>myexe
5
4
3
2
1

C:\Users\HP\Desktop\assignments\assignment1>



*/