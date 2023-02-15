#include<iostream>
using namespace std;

template<class T>
T SearchLast(T *arr, int iSize, T No)
{
    int i = 0;
    int iCnt = 0;

    for(i = iSize-1; i >= 0; i--)
    {   
        if(arr[i] == No)
        {
           break; 
        }
    }   
    return i+1;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(arr,9,40);
    printf("Last occurance : %d\n",iRet);
    return 0;
}