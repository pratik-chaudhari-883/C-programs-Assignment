/*
Problem statment -  Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.  
*/    

#include<stdio.h>
#include<stdlib.h>
void Display()
{
     int iCnt=0;
     int iDec=0;
     int iHexi=0;
     int ioct=0;

     printf("Decimal\t\t\tHexadecimal\t\t\toctal");
     for (iCnt=0; iCnt<256; iCnt++)
     {
      printf("%d\t\t\t%x\t%O\n",iDec,iHexi,ioct);
      iDec++;
      iHexi++;
      ioct++;
     }
     
        
         
         
}



int main()
{

     
  Display();

    return 0;
}