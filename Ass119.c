#include<stdio.h>
#include<stdbool.h>

bool chkSpecial(char ch)
{
    if(ch >=97 && ch <=122 || ch >=65 && ch <=90 || ch >=48 && ch<=57)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character\n");
    scanf("%c",&cValue);
    
    bRet = chkSpecial(cValue);

    if(bRet == true)
    {
        printf("it is special character\n");
    }
    else
    {
        printf("It is not special character\n");
    }

    return 0;
}