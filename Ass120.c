#include<stdio.h>

void Display( char i)
{    
    printf("Decimal : %d \nHexadecimal : %x \nOctal : %o\n",i,i,i,i);   
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}