/*
Problem statment -   Design application for income tax department to calculate tax amount. According to the income 
tax department there is no income tax for the income less than 5 lakhs.  If income is in between 5 to 10 lakhs then 
there will be 10% tax.  If income is in between 10 to 20 lakhs then there will be 20% tax.  And for more than 
20 lakhs there will be 30% tax.  We have to accept gross income from user and return the tax amount.
*/    

#include<stdio.h>
float IncomTax(int);
//////////////////////////////////////////////////////////////
//
// Function name :   float IncomTax()
// Parameters :           integer 
// Return value :        float
// Description :           It is used to calculate incom tax
// Author :                  Pratik suklal chaudhari
// Date :                     18 rd Aug 2020
//
/////////////////////////////////////////////////////////////

float IncomTax(int iNo)
{
   float  fTax=0.0;

        if (iNo<500000)
        {
                printf("your not eligible for tax");
                return 0.0;
        }else if (iNo>500000 && iNo<1000000)
        {
             fTax=0.10*iNo;  
        }else if (iNo>1000000 && iNo<2000000)
        {
             fTax=0.20*iNo;  
        } else
        {
             fTax=0.30*iNo;
        }
            
   
   
  return fTax;

}


int main()
{
    int  iValue1=0;
    float fRet=0.0;
    

     printf("Enter yoyr Bill Amount..\n");
     scanf("%d",&iValue1);
      

     fRet=IncomTax(iValue1);
printf("your incom tax is  %f",fRet);

    return 0;
}