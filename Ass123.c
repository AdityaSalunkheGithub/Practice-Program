#include<stdio.h>

int difference(char *str)
{
    int iCnt1 = 0, iCnt2 = 0;

    while(*str != '\0')
    {
        if(*str >='A' && *str <='Z')
        {
            iCnt1++;
        }
        else if(*str >= 'a' && *str <= 'z' )
        {
            iCnt2++;
        }
        str++;
    }
    return iCnt2 - iCnt1;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = difference(arr);

    printf("%d",iRet);

    return 0;
}