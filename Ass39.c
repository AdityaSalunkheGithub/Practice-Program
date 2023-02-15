#include<stdio.h>

void Table(int iNo)
{
    int i = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i=1; i<=10; i++)
    {
        printf("%d\t",iNo*i);
    }
} 

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);
    
    Table(iValue);

    return 0;
}