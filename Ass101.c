#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iDigit = 1;


    
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1;j<=iCol; j++)
        {
            if(iDigit <= 9)
            {
                printf("%d\t",iDigit);   
            }
            else if()

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