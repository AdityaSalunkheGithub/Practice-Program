#include<stdio.h>

void Display(char ch)
{
    
    if(ch >= 'a' && ch <= 'z') 
    {
        printf("%c",ch - 32);
    }  
    else if(ch >= 'A' && ch <= 'Z') 
    {
        printf("%c",ch + 32);
    }
    else
    {
        printf("%c",ch);
    }  
    
}
int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}