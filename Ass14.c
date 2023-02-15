#include<stdio.h>

void DisplayConvert(char cWar)
{
    if(cWar+32)
    {
        printf("%c",cWar-32);
    }
    else if(cWar-32)
    {
        printf("%c",cWar+32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter char\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}