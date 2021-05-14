/*
Problem statment -  Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : Decimal 65 
Octal 0101
Hexadecimal 0X41
*/    

#include<stdio.h>
#include<stdlib.h>

void Display(char cValue)
{
     int iCnt=0;
     int iCount=0;

    
 printf("Decimal value is: %d\n",cValue);
 printf("Octal value is: %o\n",cValue);
 printf("Hexadecimal  value is: %X\n",cValue);

     

}



int main()
{
     
      char cValue ='\0';
  
     printf("Enter a charector ..\n");
     scanf("%c",&cValue);
     
     Display(cValue);
 

    return 0;
}