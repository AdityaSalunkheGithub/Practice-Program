#include<stdio.h>

int Factorial(int No)
{
    static int Fact = 1;
    static int i = 1;
    if(i <= No)
    {
        Fact = Fact * i;
        i++;
        Factorial(No);
    }
    return Fact;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = Factorial(Value);

    printf("Factorial : %d\n",iRet);

    return 0;
}