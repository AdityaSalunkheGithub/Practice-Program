#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//0000  0000    0000    0000    0000    0000    0000    0000
//0000  1000    0001    0000    0100    0000    0100    0000
// 0      8       1       0       4       0       4      0
//0X08104040
bool CheckBit(UINT No)
{
    UINT iMask = 0X08104040;
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
        printf("7th & 15th & 21th & 28th bit is on\n");
    }
    else
    {
        printf("7th & 15th & 21th & 28th bit is off\n");
    }

    return 0;
}