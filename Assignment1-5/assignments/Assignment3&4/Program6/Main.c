/*
    Problem statement : Write a program which  accept  one number from user and Display it multiplication of Factors
    number is even or odd.
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{
    int iValue = 0;                             // Local variable
    
    printf("Enter number\n");       // Display on screen
    scanf("%d",&iValue);              // Accept the input from keyboard
    
     DisplayMultiFact(iValue);   // Function call
    

    
    return 0;                               // It indicates successfull termination.
}




/*output
C:\Users\HP\Desktop\Assignment3\Program6>gcc Main.c Helper.c -o myexe

C:\Users\HP\Desktop\Assignment3\Program6>myexe
Enter number
12
1       2       3       4       6       Multiplication of Even factor is 144
C:\Users\HP\Desktop\Assignment3\Program6>myexe
Enter number
13
1       Multiplication of Even factor is 1
C:\Users\HP\Desktop\Assignment3\Program6>myexe
Enter number
10
1       2       5       Multiplication of Even factor is 10
C:\Users\HP\Desktop\Assignment3\Program6>

*/