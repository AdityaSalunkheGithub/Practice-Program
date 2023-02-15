#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//  0000 0000 0000 0000 0000 1000 0100 0000
//0X00000840 

bool Chekbit(UINT No)
{
    UINT Mask1 = 0X00000100;
    UINT Mask2 = 0X00000800;

    UINT Ans1 = 0;
    UINT Ans2 = 0;

    Ans1 = No & Mask1;
    Ans2 = No & Mask2;

    if(Mask1 == Ans1 || Mask2 == Ans2)
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
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&Value);

    bRet = Chekbit(Value);

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