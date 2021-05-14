/*
Problem statment -  Design application for hotel. According to the management team of hotel they are giving discount 
on total bill amount of customer.  If bill bill amount is less than 500 then there is no discount , if bill amount 
is less than 1500 and more than 500 they give 10% discount.  And if the bill amount is more than 1500 then they 
give 15% discount.  Our application should accept total bill amount and depends on the discount policy we have to 
return the amount after applying discount. 
*/    

#include<stdio.h>
float CalculateBill(int);
//////////////////////////////////////////////////////////////
//
// Function name :   float CalculateBill()
// Parameters :           integer 
// Return value :        float
// Description :           It is used to calculate Bill
// Author :                  Pratik suklal chaudhari
// Date :                     18 rd Aug 2020
//
/////////////////////////////////////////////////////////////

float CalculateBill(int iNo)
{
   float  fDiscount=0.0;

        if (iNo<500)
        {
                printf("sorry you are not applicable for Discount");
                return iNo;
        }else if (iNo>500 && iNo<1500)
        {
             fDiscount=0.10*iNo;  
        }else 
        {
           fDiscount=0.15*iNo;
        }
        
        
        
   
   
  return (iNo-fDiscount);

}


int main()
{
    int  iValue1=0;
    float fRet=0.0;
    

     printf("Enter yoyr Bill Amount..\n");
     scanf("%d",&iValue1);
      

     fRet=CalculateBill(iValue1);
printf("your amount after calculateing Discount is %f",fRet);

    return 0;
}