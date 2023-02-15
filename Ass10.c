/*
#include<stdio.h>


#define TRUE 1
#define FALSE 0


typedef int BOOL;
BOOL CheckEven(int iNo)
{
    if((iNo % 2 ) == 0)
    {
        printf("even number");
    }
    else
    {
        printf("Odd number");
    }

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("enter number");
    scanf("%d",iValue);

    bRet = CheckEven(iValue);
    if(bRet == TRUE)
    {
        printf("Entered number is Even\n");
    }
    else
    {
        printf("Entered number is Odd\n");
    }

    return 0;

}
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter one number\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("It is even number\n");
    }
    else 
    {
        printf("It is odd number\n");
    }
    return 0;
}


// %    Mod
// ==   Equality
