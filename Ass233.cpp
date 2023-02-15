#include<iostream>
using namespace std;

template<class T>
T Add(T *Arr, int iSize)
{
    T Sum ;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        Sum = Sum + Arr[i];
    }
    return Sum;
    
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0,3.7,9.8,8.7};
    int iSum = Add(Arr,5);
    printf("%d\n",iSum);
    float fSum = Add(Brr,4);
    printf("%f\n",fSum);
    
    return 0;
}