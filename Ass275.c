#include<stdio.h>

int MultR(int No)
{
    static int digit = 0;
    static int mult = 1;
    if(No != 0)
    {
        digit = No % 10;
        mult = mult * digit;
        No = No / 10;
        MultR(No); 
    }
    return mult;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = MultR(Value);

    printf("mult : %d\n",iRet);

    return 0;
}