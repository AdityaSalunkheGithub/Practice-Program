#include<iostream>
using namespace std;

template<class T>
T Min(T *Arr, int iSize)
{
    T iMin = Arr[0];
    int i = 0;
    
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
    
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0f,3.7f,9.8f,8.7f};
    int iRet = Min(Arr,5);
    printf("%d\n",iRet);
    float fRet = Min(Brr,4);
    printf("%f\n",fRet);
    
    return 0;
}