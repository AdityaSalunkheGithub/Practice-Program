#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int i = 0, iEvenCount = 0, iOddCount = 0;

    for(i = 0; i<iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
           iEvenCount++;        
        }
        else
        {
            iOddCount++;
        }
    }
    return iEvenCount-iOddCount;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter Elements : \n");
    scanf("%d",&iSize);

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

    iRet = Frequency(p,iSize);

    printf("Result is : %d\n",iRet);

    free(p);

    return 0;
}