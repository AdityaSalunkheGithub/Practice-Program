#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int iLength)
{
    int i = 0; 
    for(i = 0; i<iLength; i++)
    {
        if(Arr[i] % 5 == 0)
        {
            printf("%d\t",Arr[i]);
        }
    }
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("enter number: %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    /*if(p == NULL)
    {
        printf("unable to allocate memory \n");
        return -1;
    }*/
    Display(p , iSize);

    free(p);

    return 0;
}