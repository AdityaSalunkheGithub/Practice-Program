#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str  == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the character\n");
    scanf("%c",&cValue);


    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

   
    iRet = CountChar(arr, cValue);

    printf("character frequency is %d\n",iRet);

    return 0;
}