#include<stdio.h>

void DisplayASCII()
{
    
    int i = 0;

    printf("ASCII table\n");
    
    
    printf("Charcter Decimal Hex  Octal");

    for(i = 0; i <=255; i++)
    {
        printf("%c \t %d \t %x \t %o\n",i,i,i,i);
    }


}

int main()
{
    DisplayASCII();
    return 0;
}