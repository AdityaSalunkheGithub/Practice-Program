#include<iostream>
using namespace std;

template<class T>
T Max(T No1, T No2, T No3)
{
    T Max;
    if(No1 > No2 || No1 > No3)
    {
        Max = No1;
    }
    else if(No2 > No1 || No2 > No3)
    {
        Max = No2;
    }
    else if(No3 > No1 || No3 > No2)
    {
        Max = No3;
    }
    return Max;
}

int main()
{
    int no1 = 0, no2 = 0, no3 = 0;

    printf("Enter three numbers : \n");
    scanf("%d",&no1);
    scanf("%d",&no2);
    scanf("%d",&no3);

    int iRet = Max(no1,no2,no3);

    printf("Max no is : %d\n",iRet);

    float fno1 = 0.0f, fno2 = 0.0f, fno3 = 0.0f;

    printf("Enter three numbers : \n");
    scanf("%f",&fno1);
    scanf("%f",&fno2);
    scanf("%f",&fno3);

    float fRet = Max(fno1,fno2,fno3);

    printf("Max no is : %f\n",fRet);

    return 0;
}