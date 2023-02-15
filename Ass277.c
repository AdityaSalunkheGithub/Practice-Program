#include<stdio.h>

int Maximum(int No)
{
    static int Max = 0;
    static int Digit = 0;
    
    if(No > 0)
    {
        Digit = No % 10;
        if(Digit > Max)
        {
            Max = Digit;
        }
        No = No /10;
        Maximum(No);
    }
    return Max;
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter value : \n");
    scanf("%d",&Value);

    iRet = Maximum(Value);

    printf("Maximum digit : %d\n",iRet); 

    return 0;
}