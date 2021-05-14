/*
Problem statment - Write program to return odd factorial of given number 
 consider  1$ = 70 Rupees

input: 5
output: 15  
input:-5
output: 15 
*/

#include<stdio.h>
int  OddFactorial(int);
//////////////////////////////////////////////////////////////
//
// Function name :   OddFactorial()
// Parameters :           integer 
// Return value :        None
// Description :           It is used to return Odd factorial
// Author :                  Pratik suklal chaudhari
// Date :                     10 rd Aug 2020
//
/////////////////////////////////////////////////////////////

int  OddFactorial(int iNo)
{
    int iCnt=0;
   int iFact=1;


   if (iNo<0)
   {
      iNo=-iNo;
   }
   
    for ( iCnt=1; iCnt <=iNo; iCnt++)
    {
         
             if ((iCnt%2)==1)
             {
                 iFact=iFact*iCnt;
             }
            //  else
            //  {
                 
            //  }
             
             
         
    }
    


    return iFact;
   

}

int main()
{
    int  iValue=0;
    int iRet=0;
    

     printf("Enter Number ..\n");
     scanf("%d",&iValue);

     iRet=OddFactorial(iValue);

     printf("Even Factorial is  :%d\n",iRet);


    return 0;
}