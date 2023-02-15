#include<stdio.h>

int EvenFactorial(int iNo)
{
    int i = 0, iEvenFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i>=1; i--)
    {
        if(i % 2 == 0)
        {
            iEvenFact = iEvenFact * i;
            printf("%d\t",i);
        }
    }

    return iEvenFact;   
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :  ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("\nEven Factorialof number is : %d",iRet);

    return 0;
}