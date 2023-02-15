#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos)
{
    UINT Mask = 0X000000001;
    UINT Ans = 0;

    Mask = Mask << (Pos - 1);

    Ans = No & Mask;

    if(Mask == Ans)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT Value = 0;
    UINT Position = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&Value);

    printf("Enter position : \n");
    scanf("%d",&Position);

    bRet = CheckBit(Value, Position);

    if(bRet == true)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");

    }

    return 0;
}