/*
Problem statment - Write program to return even factorial of given number 
 consider  1$ = 70 Rupees

input: 5
output: 8  (4*2)  
input:-5
output: 8  (4*2) 
*/

#include<stdio.h>
int  EvenFactorial(int);
//////////////////////////////////////////////////////////////
//
// Function name :   EvenFactorial()
// Parameters :           integer 
// Return value :        None
// Description :           It is used to return even factorial
// Author :                  Pratik suklal chaudhari
// Date :                     10 rd Aug 2020
//
/////////////////////////////////////////////////////////////

int  EvenFactorial(int iNo)
{
    int iCnt=0;
   int iFact=1;


   if (iNo<0)
   {
      iNo=-iNo;
   }
   
    for ( iCnt=1; iCnt <=iNo; iCnt++)
    {
         
             if ((iCnt%2)==0)
             {
                 iFact=iFact*iCnt;
             }
             
         
    }
    


    return iFact;
   

}

int main()
{
    int  iValue=0;
    int iRet=0;
    

     printf("Enter Number ..\n");
     scanf("%d",&iValue);

     iRet=EvenFactorial(iValue);

     printf("Even Factorial is  :%d\n",iRet);


    return 0;
}