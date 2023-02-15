#include<stdio.h>

void DisplayR(int No)
{

    if(No >= 1)
    {
        printf("%d\t",No);
        No--;
        DisplayR(No);
    }
}

int main()
{
    int Value = 0;

    printf("enter number : \n");
    scanf("%d",&Value);

    DisplayR(Value);

    return 0;
}