#include<stdio.h>

double FhtoCs(float fTemp)
{
    double fCs = 1;

    fCs = (fTemp - 32)*(5/9);

    return fCs;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("%lf",dRet);

    return 0;
}