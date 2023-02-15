#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//0000  0000    0000    0000    0000    0000    0000    0000
//0000  0000    0000    0000    0100    0000    0000    0000
//00004000
//0X00004000
bool CheckBit(UINT No)
{
    UINT iMask = 0X00004000;
    UINT Ans = 0;

    Ans = No & iMask;

    if(Ans == iMask)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter value : \n");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("15th bit is on\n");
    }
    else
    {
        printf("15th bit is off\n");
    }

    return 0;
}