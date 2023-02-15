#include<stdio.h>

void Reverse(int No)
{
    static int Digit = 0;
    
    if(No > 0)
    {
        Digit = No % 10;
        printf("%d",Digit);
        No = No /10;
        Reverse(No);
    }
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter value : \n");
    scanf("%d",&Value);

    Reverse(Value);

    return 0;
}