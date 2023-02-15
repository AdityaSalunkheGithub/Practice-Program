#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iNo1,int iNo2)
{ 
    int i = 0;

    for(i = 0; i<iLength; i++)
    {
        if(Arr[i] > iNo1 && Arr[i] < iNo2)
        {
            printf("%d\t",Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;
    

    printf("Enter elements : ");
    scanf("%d",&iSize);

    printf("Enter Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

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

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}