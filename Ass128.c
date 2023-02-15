#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <= 'Z')
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

    strtogglex(arr);

    printf("modifing string : %s\n",arr);    
    return 0;
}