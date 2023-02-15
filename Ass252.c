#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT No, UINT Pos)
{
    UINT Mask = 0X00000001;
    UINT Ans = 0;

    Mask = Mask << (Pos -1);

    Ans = No ^ Mask;

    return Ans;
    
}

int main()
{
    UINT Value = 0;
    UINT Position = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    printf("Enter position : \n");
    scanf("%d",&Position);

    iRet = OffBit(Value, Position);

    printf("Updated value is : %d\n",iRet);

    return 0;
}