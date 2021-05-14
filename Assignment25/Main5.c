/*
Problem statment - Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM 
*/    

#include<stdio.h>
#include<stdlib.h>

void  Examshedule(char cChDiv)
{
     int iCnt=0;
     

    if (cChDiv=='A')
    {
         printf("your Exam at 7 AM");
    }else if(cChDiv=='B')
    {
         printf("your Exam at 8:30 AM");
    }else if(cChDiv=='C')
    {
         printf("your Exam at 9:20 AM");
    }else if(cChDiv=='D')
    {
         printf("your Exam at 10:30 AM");
    }else
    {
         printf(" There is no such Division");
    }
    
        
         
         
         
}



int main()
{
     
     char cValue='\0';
     int iCnt=0;
    
   printf(" Enter Any Charector..\n");
   scanf("%c",&cValue);

           Examshedule(cValue);
          
          

    return 0;
}