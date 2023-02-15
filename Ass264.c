#include<stdio.h>

void DisplayR()
{
    static char ch = 'A';

    if(ch <= 'F')
    {
        printf("%c\t",ch);
        ch++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}