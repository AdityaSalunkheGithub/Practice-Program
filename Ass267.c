#include<stdio.h>

void DisplayR(int No)
{
    static int i = 1; 

    if(i <= No)
    {
        printf("%d\t",i);
        i++;
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