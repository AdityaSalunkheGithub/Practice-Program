#include<stdio.h>

int StrRevX(char *str)
{
   char *start = str;
   char *end = str;
   char temp = '\0';

   while(*end != '\0')
   {
        end++;
   }
   end--;

   while(start < end)
   {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
   }
}
int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is %s\n",arr);

    return 0;
}