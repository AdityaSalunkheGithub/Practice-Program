#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int Arr[], int iLength, int iNo)
{ 
    int i = 0;
    for(i = 0; i<iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            break;
        }
    }
    if(Arr[i] == iNo)
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
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    bool bRet = false;

    printf("Enter elements : ");
    scanf("%d",&iSize);

    printf("Enter number : ");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    bRet = Check(p, iSize, iValue);

    if(bRet == true)
    {
        printf("Number is present");
    }
    else
    {
        printf("number is not present");
    }
    
    free(p);

    return 0;
}