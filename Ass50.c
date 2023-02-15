#include<stdio.h>

double SquareMeter(int iNo)
{
    double iSqMeter = 1;

    iSqMeter = iNo * 0.0929;

    return iSqMeter;

}

int main()
{
    int iValue1 = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue1);

    dRet = SquareMeter(iValue1);

    printf("Sq meter : %lf",dRet);

    return 0;
}