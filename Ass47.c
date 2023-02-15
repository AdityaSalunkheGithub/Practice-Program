#include<stdio.h>

double RectArea(float fWidth, float fHieght)
{
    double fArea = 0.0;

    fArea = fWidth * fHieght;

    return fArea;

}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);
    printf("enter height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area is : %lf",dRet);

    return 0;
}