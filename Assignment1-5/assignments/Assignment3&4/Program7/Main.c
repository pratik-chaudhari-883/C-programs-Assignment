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
    
     DisplayFact(iValue);   // Function call
    

    
    return 0;                               // It indicates successfull termination.
}




/*output
Users\HP\Desktop\Assignment3\Program7>gcc Main.c Helper.c -o myexe

C:\Users\HP\Desktop\Assignment3\Program7>myexe
Enter number
12
12      6       4       3       2       1
C:\Users\HP\Desktop\Assignment3\Program7>gcc Main.c Helper.c -o myexe

C:\Users\HP\Desktop\Assignment3\Program7>myexe
Enter number
12
6       4       3       2       1
C:\Users\HP\Desktop\Assignment3\Program7>myexe
Enter number
13
1
C:\Users\HP\Desktop\Assignment3\Program7>myexe
Enter number
10
5       2       1
C:\Users\HP\Desktop\Assignment3\Program7>

*/