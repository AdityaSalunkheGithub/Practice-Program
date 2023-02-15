#include<stdio.h>
#include<stdbool.h>

bool ChkAplha(char ch)
{
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkAplha(cValue);

    if(bRet == true)
    {
        printf("It is character\n");
    }
    else
    {
        printf("It is not character\n");
    }
    return 0;
}