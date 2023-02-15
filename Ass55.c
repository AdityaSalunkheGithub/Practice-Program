#include<stdio.h>

void RangeDisplayRev(int iNo1, int iNo2)
{
    int i = 0;

    if(iNo1 > iNo2)
    {
        printf("invlid range\n"); 
    }
    
    for(i = iNo2; i>=iNo1; i--)
    {  
         printf("%d\t",i);  
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter starting point \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point \n");
    scanf("%d",&iValue2);

    

    RangeDisplayRev(iValue1, iValue2);

    return 0;

}