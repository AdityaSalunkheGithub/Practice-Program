#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT No)
{
    UINT Mask = 0X0000000F;
    UINT Ans = 0;

    Ans = No | Mask;

    return Ans;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = OnBit(Value);

    printf("Updated value is : %d\n",iRet);

    return 0;
}