#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    float fArea = 0;

    fArea = PI * fRadius * fRadius;

    return fArea;

}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter Number : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("%lf",dRet);

    return 0;
}