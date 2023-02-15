#include<stdio.h>

void Reverse(char *str)
{
    printf("%s\n",strrev(str));
}

int main()
{
    char arr[20];
    

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}