#include<stdio.h>

typedef unsigned int UINT;


UINT TogglebitRange(UINT No, UINT Start, UINT End)
{
    UINT Mask1 = 0XFFFFFFFF;
    UINT Mask2 = 0XFFFFFFFF;
    UINT Mask = 0;

    UINT Ans = 0;

    Mask1 = Mask1 << (Start - 1);
    Mask2 = Mask2 >> (32 - End);

    Mask = Mask1 & Mask2;

    Ans = No ^ Mask;

    return Ans;    
}

int main()
{
    UINT Value = 0;
    UINT Position1 = 0;
    UINT Position2 = 0;
    UINT Ret = 0;

    printf("Enter the number : \n");
    scanf("%d",&Value);

    printf("Enter the 1st position : \n");
    scanf("%d",&Position1);
    printf("Enter the 2nd position : \n");
    scanf("%d",&Position2);

    Ret = TogglebitRange(Value, Position1, Position2);

    printf("Toggled bit from position %d to %d of input number is : %d\n",Position1, Position2, Ret);

    return 0;
}