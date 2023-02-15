#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iLength, int iNo)
{
    int i = 0, iCount = 0;

    for(i = 0; i<iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            iCount++;
        }
    }
    return iCount;   
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter Elements : \n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    iRet = Frequency(p,iSize,iValue);

    printf("%d Number occured %d times",iValue,iRet);

    free(p);

    return 0;
}