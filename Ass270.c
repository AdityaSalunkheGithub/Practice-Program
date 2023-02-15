#include<stdio.h>

void DisplayR(int No)
{
    static char ch = 'a';
    static int iCnt = 1;
    
    if(iCnt <= No)
    {
        printf("%c\t",ch);
        ch++;
        iCnt++;
        DisplayR(No);
    }
}

int main()
{
    int Value = 0;

    printf("Enter value: \n");
    scanf("%d",&Value);

    DisplayR(Value);

    return 0;
}