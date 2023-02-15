#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("%s\n",arr);    
    return 0;
}