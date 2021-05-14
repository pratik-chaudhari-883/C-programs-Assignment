/*
1. program to print 5 times "Marvellus" on screen  .
*/

#include<stdio.h>
void Display();

void Display()
{
    int i=0;
    for(i=1; i<=5;i++)
    {
        printf("Marvellus\n");
    }
}

int main()
{
    Display();
    return 0;
}

/*
1. program to print 5 times "Marvellus" on screen  .
output
C:\Users\HP\Desktop\assignments\assignment1>gcc prog2.c -o Myexe

C:\Users\HP\Desktop\assignments\assignment1>Myexe
Marvellus
Marvellus
Marvellus
Marvellus
Marvellus

C:\Users\HP\Desktop\assignments\assignment1>
*/