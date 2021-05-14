/*
pronlem statment-Accept number from user if number is less than 10 then print "hello" otherwise print "Demo"
*/
#include<stdio.h>
void Display(int);
 int main()
 {
     int iValue=0;
     printf("Enter Any Number");
     scanf("%d",&iValue);
     Display(iValue);

     return 0;
 }

 void Display(int iNo)
 {
     if(iNo<10)
     {
         printf("Hellow");
     }
     else
     {
         printf("Demo");
     }
     
 }
 /*
 output
 
C:\Users\HP\Desktop\assignments\assignment1>gcc prog8.c -o myexe

C:\Users\HP\Desktop\assignments\assignment1>myexe
Enter Any Number5
Hellow
C:\Users\HP\Desktop\assignments\assignment1>myexe
Enter Any Number12
Demo
C:\Users\HP\Desktop\assignments\assignment1>

 */