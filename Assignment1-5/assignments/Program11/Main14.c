
/*
Problem statment - Write a program Which accept temprature in fahrenheit and convert it into celsius (1celsius =( Fahrenheit -32)*(5/9)
*/

#include<stdio.h>
double FHtoCs(float);

//////////////////////////////////////////////////////////////
//
// Function name :    FHtoCs()
// Parameters :           float 
// Return value :        double 
// Description :           It is used to convert temprature fahrehent to celcius
// Author :                  Pratik suklal chaudhari
// Date :                     10 rd Aug 2020
//
/////////////////////////////////////////////////////////////

double FHtoCs(float  fFahrenheit)
{
 
double dCelcius=0.0;
dCelcius=(fFahrenheit-32)*(5/9);
  printf("%lf",dCelcius);
    return dCelcius;  
      
}

int main ()
{
    float  fValue=0.0;
    double dRet=0.0;

    printf("Enter temprature in Fahrenheit ..\n");
    scanf("%f",&fValue);

  dRet=FHtoCs(fValue);
    printf(" temprature in celcius is :%lf",dRet);
    return 0;
}
