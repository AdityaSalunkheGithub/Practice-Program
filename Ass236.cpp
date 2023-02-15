#include<iostream>
using namespace std;

template<class T>
void Display(T Value, int iSize)
{
    int i = 0;
    for(i = 1; i <= iSize; i++)
    {
        cout<<Value<<"\t";
    }   
    cout<<"\n";
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);
    
    return 0;
}