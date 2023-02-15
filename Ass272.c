#include<stdio.h>

int SumR(int No)
{
    static int Sum = 0;
    int iDigit = 0;

    if(No != 0)
    {
        iDigit = No % 10;
        Sum = Sum + iDigit;
        No = No / 10;
        SumR(No);
    }
    return Sum;
}
int main()
{
    int Value = 0, iRet = 0;

    printf("Enter value : \n");
    scanf("%d",&Value);
    
    iRet = SumR(Value);

    printf("%d",iRet);
    return 0;
}