#include<stdio.h>

void OddDisplay(int iNo)
{
    int i = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i=1; i<=iNo; i++)
    {
        if((i % 2) != 0)
        {
            printf("%d\t",i);
        }
    }
} 

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);
    
    OddDisplay(iValue);

    return 0;
}