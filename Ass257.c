#include<stdio.h>

typedef unsigned int UINT;

UINT CommonOnBit(UINT No1, UINT No2)
{
    UINT Count = 0;

    while(No1|| No2)
    {
        Count++;
        
        if((No1 & 1) == (No2 & 1))
        {
            printf("%d\t",Count);
        }

        No1 = No1 >> 1;
        No2 = No2 >> 1;
    }
}

int main()
{
    UINT Value1 = 0;
    UINT Value2 = 0;

    printf("Enter first number : \n");
    scanf("%d",&Value1);

    printf("Enter second number : \n");
    scanf("%d",&Value2);

    CommonOnBit(Value1, Value2);


    return 0;
}