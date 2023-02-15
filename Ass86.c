#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    char ch = 'A';

    for (i = 1; i<=iNo; i++ )
    {
        printf("%c\t",ch);
        ch++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}