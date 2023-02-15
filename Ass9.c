#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if (iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 0; iCnt<iFrequency; iCnt++)
    {
        printf("%d \t",iNo);
    }

}

int main()
{
    int iValue = 0, iCount = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter Frequency");
    scanf("%d",&iCount);

    Display(iValue,iCount);


    return 0;
}