#include<iostream>
using namespace std;

template<class T>
T Frequency(T *arr, int iSize, T No)
{
    int i = 0;
    int iCnt = 0;

    for(i = 0; i <  iSize; i++)
    {   
        if(arr[i] == No)
        {
            iCnt++;
        }
    }   
    return iCnt;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(arr,9,10);
    printf("%d",iRet);
    return 0;
}