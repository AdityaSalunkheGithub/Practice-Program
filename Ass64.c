
#include<stdio.h>

int MultDigit(int iNo)
{
    int iDigit = 0, iMult = 1;
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10; 
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }        
    }
    return iMult;

    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf("%d",iRet);

    return 0;
}