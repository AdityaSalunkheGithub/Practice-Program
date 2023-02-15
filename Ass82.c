#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{ 
    int i = 0, iMin = Arr[i];

    for(i = 0; i < iLength ; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    

    printf("Enter elements : ");
    scanf("%d",&iSize);

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

    iRet = Minimum(p, iSize);

    printf("samllest number is : %d",iRet);
    
    free(p);

    return 0;
}