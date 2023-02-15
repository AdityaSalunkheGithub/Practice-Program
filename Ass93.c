#include<stdio.h>

void Pattern(int iRow, int icol)
{
    int i = 0, j = 0; 
    for(i = 1; i<=iRow; i++)
    {
        for(j = icol; j>=1; j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows and Columns:\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}