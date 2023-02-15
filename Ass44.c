#include<stdio.h>

int OddFactorial(int iNo)
{
    int i = 0, iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i>=1; i--)
    {
        if(i % 2 != 0)
        {
            iOddFact = iOddFact * i;
            printf("%d\t",i);
        }
    }

    return iOddFact;   
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :  ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("\nOdd Factorialof number is : %d",iRet);

    return 0;
}