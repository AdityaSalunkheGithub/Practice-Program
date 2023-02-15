#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0, iOddFact = 1, iEvenFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i>=1; i--)
    {
        if(i % 2 != 0)
        {
            iOddFact = iOddFact * i;
        }
        else
        {
            iEvenFact = iEvenFact * i;
        }
    }

    return iEvenFact - iOddFact;   
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :  ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("\nFactorial difference is : %d",iRet);

    return 0;
}