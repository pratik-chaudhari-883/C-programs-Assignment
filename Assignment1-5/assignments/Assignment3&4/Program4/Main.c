/*
    Problem statement : Write a program which  accept  one number from user and print that number of even number on screen
    number is even or odd.
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{

char cValue='\0';

printf("Enter Any Charctor");
scanf("%c",&cValue);
DisplayConvert(cValue);
    return 0;     // It indicates successfull termination.
}

/*output
:\Users\HP\Desktop\Assignment3\Program4>gcc Main.c Helper.c -o myexe

C:\Users\HP\Desktop\Assignment3\Program4>myexe
Enter Any CharctorA
a
C:\Users\HP\Desktop\Assignment3\Program4>myexe
Enter Any Charctora
A
C:\Users\HP\Desktop\Assignment3\Program4>

*/


