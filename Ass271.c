#include<stdio.h>

void DisplayR(int No)
{
    if(No >= 1)
    {
        printf("%d\t*\t",No);
        No--;
        DisplayR(No);
    }
}

int main()
{
    int Value = 0;

    printf("Enter value : \n");
    scanf("%d",&Value);
    
    DisplayR(Value);
    return 0;
}