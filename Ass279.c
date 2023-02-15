#include<stdio.h>

int Minimum(int No)
{
    static int Min = 9;
    static int Digit = 0;
    
    if(No > 0)
    {
        Digit = No % 10;
        if(Digit < Min)
        {
            Min = Digit;
        }
        No = No /10;
        Minimum(No);
    }
    return Min;
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter value : \n");
    scanf("%d",&Value);

    iRet = Minimum(Value);

    printf("Minimum digit : %d\n",iRet); 

    return 0;
}