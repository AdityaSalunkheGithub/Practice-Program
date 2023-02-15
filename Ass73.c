#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int Arr[], int iLength)
{
    int i = 0;
    for(i = 0; i<iLength; i++)
    {
        if(Arr[i] == 11)
        {
            break;
        }
    }
    if(Arr[i] == 11)
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
    int iSize = 0, iCnt = 0;
    bool bRet = false;
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

    bRet = Check(p,iSize);

    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

    free(p);

    return 0;
}