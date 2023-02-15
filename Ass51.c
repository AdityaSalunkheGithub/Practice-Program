#include<stdio.h>

void RangeDisplay(int iNo1, int iNo2)
{
    int i = 0;
    for(i = iNo1; i<=iNo2; i++)
    {
        printf("%d\t",i);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter starting point \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point \n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;

}