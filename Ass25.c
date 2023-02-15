#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iNonFact = 0, iFact = 0;
    
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo %iCnt != 0)
        {
            iNonFact = iNonFact + iCnt;
        }
        else
        {
            iFact = iFact + iCnt;
        }

    }
    return iFact-iNonFact;
    
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("diff btw sum of Factor and NonFacotr: %d",iRet);

    return 0;
}
