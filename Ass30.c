#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float iPer = 1;
    
    iPer = (iNo1/iNo2)*100;

    return iPer;
}

int main()
{ 
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total Marks :  ");
    scanf("%d",&iValue1);
    printf("Please obtained Marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is: %f\n",fRet); 



    return 0;
}