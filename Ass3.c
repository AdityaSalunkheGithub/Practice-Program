#include<stdio.h>

void Display()
{
    int i = 0;
    int length = 5;
    for(i = 1; i<=5;)
    {
        printf("%d\n",i);
        i++;
    }
}

int main()
{
    Display();

    return 0;
}