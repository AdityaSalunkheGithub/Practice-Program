#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    char ch[4] = {'A','B','C','D'};
    if(ch[0] == chDiv )
    {
        printf("Your exam at 7 AM\n");
    }
    else if(ch[1] == chDiv)
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if(ch[2] == chDiv)
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if(ch[3] == chDiv)
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("Devision is not there\n");
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter your devision \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}