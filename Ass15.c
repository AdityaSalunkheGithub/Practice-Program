#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cWar)
{
    if(cWar== 'a','A' || cWar == 'e','E'||cWar == 'i','I'||cWar == 'o','O'||cWar == 'u','U' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%c",cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel\n");

    }
    else
    {
        printf("It is not Vowel\n");

    }


    return 0;
}