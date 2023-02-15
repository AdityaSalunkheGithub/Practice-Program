#include<stdio.h>

void DisplayR()
{
    static char ch = 'a';

    if(ch <= 'f')
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