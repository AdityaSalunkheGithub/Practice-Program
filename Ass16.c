#include<stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iFact = 1;

    for(i=1; i<=iNo; i++)
    {
        iFact=iFact*i;
        
    }
    return iFact;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d\n",iRet);

    return 0;
}