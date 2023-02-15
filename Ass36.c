#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo < 100 )
    {
        printf("Medium\n");
    }
    else 
    {
        printf("Greater\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}