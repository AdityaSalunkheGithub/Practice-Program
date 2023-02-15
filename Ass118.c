#include<stdio.h>

void Display(char ch)
{
    int i = 0;

    if(ch >= 97  && ch <= 122)
    {
        for(i = ch; i>=97; i--)
        {
            printf("%c\n",i);
        }
        ch--;
    }
    if(ch >= 65  && ch <= 90)
    {
        for(i = ch; i<=90; i++)
        {
            printf("%c\n",i);
        }
        ch++;
    }
    
    
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

}