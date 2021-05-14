

/*
    Problem statement : Write a program which  accept  one number from user and print that number of even number on screen
    number is even or odd.
*/

#include "Header.h"     // Header file inclusion

// Entry point funcction from where execution starts
int main()
{

char cValue='\0';
BOOL bRet=FALSE;

printf("Enter Any Charctor");
scanf("%c",&cValue);
bRet= CheckVowel(cValue);

    if (bRet==TRUE)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not  vowel");
    }
    


    return 0;     // It indicates successfull termination.
}
/*output
C:\Users\HP\Desktop\Assignment3\Program5>gcc Main.c Helper.c -o myexe

C:\Users\HP\Desktop\Assignment3\Program5>myexe
Enter Any Charctor b
it is not  vowel
C:\Users\HP\Desktop\Assignment3\Program5>myexe
Enter Any Charctor a
it is not  vowel
C:\Users\HP\Desktop\Assignment3\Program5>myexe
Enter Any CharctorA
it is vowel
C:\Users\HP\Desktop\Assignment3\Program5>myexe
Enter Any Charctor B
it is not  vowel
C:\Users\HP\Desktop\Assignment3\Program5>

*/
