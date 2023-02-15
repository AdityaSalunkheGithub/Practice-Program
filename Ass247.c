#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT No)
{
    UINT Mask = 0XFFFFCBF;
    UINT Ans = 0;

    Ans = No & Mask;

    return Ans;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = OffBit(Value);

    printf("Updated value is : %d\n",iRet);

    return 0;
}