#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//0000  0000    0000    0000    0000    0000    0000    0000
//0000  0000    0000    0000    0000    0001    1100    0000
// 0      0       0       0       0       1       c      0
//0X000001C0

bool CheckBit(UINT No)
{
    UINT iMask = 0X000001C0;
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
        printf("7th & 8th & 9th bit is on\n");
    }
    else
    {
        printf("7th & 8th & 9th bit is off\n");
    }

    return 0;
}