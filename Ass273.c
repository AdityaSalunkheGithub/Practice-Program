#include<stdio.h>

int strlenR(char *str)
{
    static int i = 0;
    
    if(*str != '\0')
    {
        i++;
        str++;
        strlenR(str);
    }
    return i;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    iRet = strlenR(arr);

    printf("Count : %d\n",iRet);


    return 0;
}