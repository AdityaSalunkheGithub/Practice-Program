#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, ivalue2 = 0;
    bool bRet = false;

    printf("Please Enter two number: \n");
    scanf("%d, %d",&iValue1, &ivalue2);

    bRet = ChkEqual(iValue1, ivalue2);

    if(bRet == true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not equal\n");
    }

    return 0;
}