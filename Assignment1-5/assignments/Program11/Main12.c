/*
Problem statment - Write a program Which accept width and height of rectangle from user and calculate it Area (Area=Width*Height)
*/

#include<stdio.h>
double  RectArea(float,float );

//////////////////////////////////////////////////////////////
//
// Function name :     RectArea()
// Parameters :           float
// Return value :        double
// Description :           It is used to calculate Area of Circle 
// Author :                  Pratik suklal chaudhari
// Date :                     10 rd Aug 2020
//
/////////////////////////////////////////////////////////////

double RectArea(float fWidth ,float fHeight)
{

   double dArea=0.0;
   

      if (fWidth==0 || fHeight==0 )
      {
          return 0.0;
      }
      if (fWidth<0)
      {
          fWidth=-fWidth;
      }
      if (fHeight<0)
      {
          fHeight=-fHeight;
      }
      
      
 
  dArea =fWidth*fHeight;
 
    return dArea;  
      
}

int main ()
{
    float fValue1=0.0,fValue2=0.0;
    double dRet=0.0;

    printf("Enter Width and Height of Rectangle  ..\n");
    scanf("%f%f",&fValue1,&fValue2);

  dRet=RectArea(fValue1,fValue2);
    printf("Area of Circle:%lf",dRet);
    return 0;
}