/*
Problem statment -   Design application for school management system.  As school is primary there are 4 standards 
from 1 to 4.  School fees of each standard is different.  For first standard fees are 8900, for second 
standard 12790, for third standard 21000 and for fourth standard fees are 23450.  We have to accept standard from 
user and display the corresponding fees. 
Input : 2   Output : 12790 
Input : 4   Output : 23450 
Input : 6   Output : Wrong input */    

#include<stdio.h>
int SchoolFees(int);
//////////////////////////////////////////////////////////////
//
// Function name :       SchoolFees()
// Parameters :           integer 
// Return value :           integer
// Description :           It is used to calculate School Fees 
// Author :                  Pratik suklal chaudhari
// Date :                     18 rd Aug 2020
//
/////////////////////////////////////////////////////////////

int SchoolFees(int iNo)
{
   int iFees=0;

      if (iNo==1)
      {
           iFees=8900;
      }else if (iNo==2)
      {
           iFees=12790;
      }else if (iNo==3)
      {
           iFees=21000;
      }else if (iNo==4)
      {
           iFees=23450;
      }else
      {
           iFees=5;
      }
      
      return iFees;
      
      
      

       
            
   
   
  return iFees;

}


int main()
{
    int  iValue1=0;
    int iRet=0;
    

     printf("Enter your staderd..\n");
     scanf("%d",&iValue1);
      

     iRet=SchoolFees(iValue1);
     if (iRet==5)
     {
          printf("Wrong Input");
     }else
     {
          printf("your  Fees is  %d",iRet);
     }
     
     


    return 0;
}