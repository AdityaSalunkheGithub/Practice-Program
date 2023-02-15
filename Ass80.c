#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{ 
    int i = 0, iOddMUlt = 1;

    for(i =iLength; i >=0 ; i--)
    {
        if(Arr[i] % 2 != 0)
        {
           iOddMUlt = iOddMUlt * Arr[i];
        }
        
    }
    return iOddMUlt;
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

    iRet = Product(p, iSize);

    printf("Product is : %d",iRet);
    
    free(p);

    return 0;
}