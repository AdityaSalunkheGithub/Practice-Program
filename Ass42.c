
#include<stdio.h>

int DollerToINR(int iNo)
{
    int iINR = 0;

    iINR = iNo*70;

    return iINR;   
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number USD :  ");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Value of INR is : %d",iRet);

    return 0;
}