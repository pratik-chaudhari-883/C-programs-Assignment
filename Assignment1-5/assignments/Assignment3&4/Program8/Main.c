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
    
     DisplayNonFact(iValue);   // Function call
    

    
    return 0;                               // It indicates successfull termination.
}




/*output
:\Users\HP\Desktop\Assignment3\Program8>gcc Main.c Helper.c -o myexe

C:\Users\HP\Desktop\Assignment3\Program8>myexe
Enter number
12
    5    7      8       9       10      11
C:\Users\HP\Desktop\Assignment3\Program8>myexe
Enter number
13
 2      3       4       5       6       7       8       9       10      11      12
C:\Users\HP\Desktop\Assignment3\Program8>myexe
Enter number
10
  3     4        6      7       8       9
C:\Users\HP\Desktop\Assignment3\Program8>

*/