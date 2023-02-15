#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;

}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter Distance in KM : ");
    scanf("%d",&iValue1);

    iRet = KMtoMeter(iValue1);

    printf("Meters : %d",iRet);

    return 0;
}