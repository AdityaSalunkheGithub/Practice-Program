#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10; 
        if(iDigit == 0)
        {
            return true;
        }
        
    }

    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}