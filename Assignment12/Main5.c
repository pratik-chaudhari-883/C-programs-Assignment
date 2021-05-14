/*
Problem statment - Write program to return diffrence brtween  odd and even factorial 
 consider  1$ = 70 Rupees

input: 5
output: -7    
input:--5
output: -7
    
input:10
output:2895
*/

#include<stdio.h>
int DiffOddEvenFact(int);
//////////////////////////////////////////////////////////////
//
// Function name :  DiffOddEvenFact()
// Parameters :           integer 
// Return value :        None
// Description :           It is used to return diffrence between Odd and even  factorial
// Author :                  Pratik suklal chaudhari
// Date :                     10 rd Aug 2020
//
/////////////////////////////////////////////////////////////

int DiffOddEvenFact(int iNo)
{
    int iCnt=0;
   int iEven=1,iOdd=1;


   if (iNo<0)
   {
      iNo=-iNo;
   }
   
    for ( iCnt=1; iCnt <=iNo; iCnt++)
    {
         
             if ((iCnt%2)==0)
             {
                 iEven=iEven*iCnt;
             }
             else if((iCnt%2)==1)
             {
                 iOdd=iOdd*iCnt;
             }
             
             
         
    }
    


    return(iEven-iOdd);
   

}

int main()
{
    int  iValue=0;
    int iRet=0;
    

     printf("Enter Number ..\n");
     scanf("%d",&iValue);

     iRet=DiffOddEvenFact(iValue);

     printf(" diffrence between Even and Odd  Factorial is  :%d\n",iRet);


    return 0;
}