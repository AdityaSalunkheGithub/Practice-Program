#include<stdio.h>
#include<stdlib.h>
int FirstOcc(int Arr[], int iLength, int iNo)
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
        return i;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    

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

    iRet = FirstOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("there is no such number %d", iRet);
    }
    else
    {
        printf("first occurance of number id %d",iRet);
    }
    
    free(p);

    return 0;
}