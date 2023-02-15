#include<stdio.h>
#include<stdbool.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;

    if(iNo3 == 0)
    {
        iMult = iNo1*iNo2;
    }
    else if(iNo2 == 0)
    {
        iMult = iNo1*iNo3;
    }
    else if(iNo1 == 0)
    {
        iMult = iNo2*iNo3;
    }
    else if(iNo1&&iNo2 ==0)
    {
        iMult = iNo3;
    }
    else if(iNo2&&iNo3 ==0)
    {
        iMult = iNo1;
    }
    else if(iNo1&&iNo3 ==0)
    {
        iMult = iNo2;
    }
    else
    {
        iMult = iNo1*iNo2*iNo3;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0, ivalue2 = 0, ivalue3 = 0;
    int iRet = 0;

    printf("Please Enter three number:\n");
    scanf("%d  %d  %d",&iValue1, &ivalue2, &ivalue3);

    iRet = Multiply(iValue1, ivalue2, ivalue3);

    printf("%d",iRet);

    

    return 0;
}