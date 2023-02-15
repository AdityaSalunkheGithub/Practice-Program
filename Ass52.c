#include<stdio.h>

void RangeDisplayEven(int iNo1, int iNo2)
{
    int i = 0;
    for(i = iNo1; i<=iNo2; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\t",i);
        }
    }
    if(iNo1>iNo2)
    {
        printf("invalid range\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter starting point \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point \n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;

}