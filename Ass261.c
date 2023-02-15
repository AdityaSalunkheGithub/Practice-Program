#include<stdio.h>

void DisplayR()
{
    static int No = 1;

    if(No  <= 4)
    {
        printf("*\t");
        No++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}