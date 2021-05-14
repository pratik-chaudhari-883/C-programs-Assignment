/*
Problem statment -    We have to design application for tourist company.  Tourist company provides cars on rent. 
 Depends on the running of car they apply rent. 
 If running is less than 100 kilometres then they charge 25 rupees per kilometre .  And if running is more 
 than 100 kilometres then they apply 15 rupees per kilometre after 100 kilometres.  We have to accept number of
  kilometres from user and return the estimated rent. 
Input : 73   Output : 1825
 Input : 132   Output : 2980 
 Input : 189   Output : 3835 */    

#include<stdio.h>
int CalculatecarRent(int);
//////////////////////////////////////////////////////////////
//
// Function name :       CalculatecarRent()
// Parameters :           integer 
// Return value :           integer
// Description :           It is used to calculate School Fees 
// Author :                  Pratik suklal chaudhari
// Date :                     18 rd Aug 2020
//
/////////////////////////////////////////////////////////////

int CalculatecarRent(int ikilomiter)
{
   int iRent=0;

      if (ikilomiter<100)
      {
           iRent=25*ikilomiter;
      }else if (ikilomiter>100)
      {
           iRent=15*ikilomiter;
      }
      
      
   
  return iRent;
}


int main()
{
    int  iValue1=0;
    int iRet=0;
    

     printf("Enter your runnig car Kilomiters..\n");
     scanf("%d",&iValue1);
      

     iRet=CalculatecarRent(iValue1);
     
          printf("your estimate cost is  %d",iRet);
     

    return 0;
}