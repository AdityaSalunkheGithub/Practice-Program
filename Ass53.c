#include<stdio.h>

int RangeSum(int iNo1, int iNo2)
{
    int i = 0, iSum = 0;
    for(i = iNo1; i<=iNo2; i++)
    if(iNo1 < 0)
    {
        break;
    }
    else
    {
        iSum = iSum + i;  
    }
    
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point \n");
    scanf("%d",&iValue2);

    if(iValue1 > iValue2)
    {
        printf("invalid range\n");
    }
    if(iValue1 < 0)
    {
        printf("invalid range\n");
    }

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d",iRet);

    return 0;

}