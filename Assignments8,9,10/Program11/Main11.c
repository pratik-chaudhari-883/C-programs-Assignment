/*
Problem statment - Write a program Which accept radius of circle from user and calculate its area consider value PI 3.14 (Area= PI*radius*radius)
*/

#include<stdio.h>
double CircleRadius(float);

//////////////////////////////////////////////////////////////
//
// Function name :     CircleRadius()
// Parameters :           float
// Return value :        double
// Description :           It is used to calculate Area of Circle 
// Author :                  Pratik suklal chaudhari
// Date :                     10 rd Aug 2020
//
/////////////////////////////////////////////////////////////

double CircleRadius(float fRadius)
{

   double dArea=00.0;
   float fPi=3.14;

      if (fRadius==0)
      {
          return 0.0;
      }
      if (fRadius<0)
      {
          fRadius=-fRadius;
      }
      
 
  dArea =fPi*fRadius*fRadius;
   printf("%lf",dArea);
      
    return dArea;  
      
}

int main ()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter Radius of circle ..\n");
    scanf("%f",&fValue);

  dRet=CircleRadius(fValue);
    printf("Area of Circle:%lf",dRet);
    return 0;
}