#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;


bool Chekbit(UINT No, UINT Pos1, UINT Pos2)
{
    UINT Mask1 = 0X00000001;
    UINT Mask2 = 0X00000001;

    UINT Ans1 = 0;
    UINT Ans2 = 0;

    Mask1 = Mask1 >> (Pos1 - 1);
    Mask2 = Mask2 >> (Pos2 - 1);

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
    UINT Position1 = 0;
    UINT Position2 = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&Value);

    printf("Enter the 1st position : \n");
    scanf("%d",&Position1);
    printf("Enter the 2nd position : \n");
    scanf("%d",&Position2);

    bRet = Chekbit(Value, Position1, Position2);

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