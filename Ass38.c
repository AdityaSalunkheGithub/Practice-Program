#include<stdio.h>

int Factorial(int iNo)
{
    int i = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    for(i = iNo; i >= 1; i--)
    {
        iFact = iFact * i;
        printf("%d\t\n",i);

    } 
    return iFact;   
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is : %d",iRet);

    return 0;
}