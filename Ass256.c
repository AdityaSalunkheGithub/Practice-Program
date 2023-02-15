#include<stdio.h>

typedef unsigned int UINT;

UINT CountOnBit(UINT No)
{
    UINT Count = 0;

    while(No)
    {
        Count = Count + (No & 1);
        No = No >> 1;
    }
    return Count;

}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = CountOnBit(Value);

    printf("Count of on bit is : %d\n",iRet);

    return 0;
}