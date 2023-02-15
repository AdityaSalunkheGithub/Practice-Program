#include<stdio.h>

void DisplayR(int No)
{
    static int i = 1;

    if(i <= No)
    {
        printf("*\t");
        i++;
        DisplayR(No);
    }
}

int main()
{
    int Value = 0;

    printf("Enter Number : \n");
    scanf("%d",&Value);

    DisplayR(Value);

    return 0;
}