#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iEvenCnt = 0, iOddCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt = iEvenCnt + Arr[iCnt];
        }
        else
        {
            iOddCnt = iOddCnt + Arr[iCnt];
        }
        
    } 
    return iEvenCnt - iOddCnt;

}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    printf("Number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("unable to allocate memory\n");
        return -1;
    }

    printf("Enter  %d Elements : \n",iLength);

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Difference(ptr, iLength);

    printf("Difference is : %d",iRet);

    free(ptr);

    return 0;
}