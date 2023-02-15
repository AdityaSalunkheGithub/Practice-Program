#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10; 
        if(iDigit % 2 != 0)
        {
            iOddSum = iOddSum + iDigit;
        }
        else
        {
            iEvenSum = iEvenSum + iDigit;
        }
        
    }
    return iEvenSum-iOddSum;

    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}