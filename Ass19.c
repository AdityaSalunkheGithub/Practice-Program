#include<stdio.h>

int NonFactSum(int iNo)
{
    int iCnt = 0;
    int iNonFact = 0;
    
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo %iCnt != 0)
        {
            iNonFact = iNonFact + iCnt;
        }
    }
    return iNonFact;
    
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number\n");
    scanf("%d",&iValue);

    iRet = NonFactSum(iValue);

    printf("Summation of Non Factors is: %d",iRet);

    return 0;
}
