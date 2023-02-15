#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    int i = 0;

    for(i = iSize-1; i >= 0; i--)
    {   
        cout<<arr[i]<<"\t";        
    }   
    cout<<"\n";

}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }    
    cout<<"\n";

    Reverse(arr,9);

    char brr[] = {'a','b','c','d','e','f'};

    for(int i = 0; i < 6; i++)
    {
        cout<<brr[i]<<"\t";
    }  
    cout<<"\n";
   

    Reverse(brr,6);


    return 0;
}