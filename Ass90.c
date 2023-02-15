#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i<=iNo; i++)
    {
        printf("%d\t",2*i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}