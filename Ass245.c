#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//0000  0000    0000    0000    0000    0000    0000    0000
//1000  0000    0000    0000    0000    0000    0000    0001
// 8      0       0       0       0       0       0      1
//0X80000001

bool CheckBit(UINT No)
{
    UINT iMask = 0X80000001;
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
        printf("1th & last bit is on\n");
    }
    else
    {
        printf("1th & last bit is off\n");
    }

    return 0;
}