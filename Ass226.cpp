#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int Size;

    public:
        Array(int value = 10)
        {
            cout<<"Inside constructor\n";

            this->Size = value;
            this->Arr = new int[Size];
        }

        Array(Array &ref)
        {
            cout<<"Inside copy constructor\n";

            this->Size = ref.Size;
            this->Arr = new int[this->Size];

            for(int i = 0; i < Size; i++)
            {
                this->Arr[i] = ref.Arr[i];
            }
        }

        ~Array()
        {
            cout<<"Inside destructor\n";

            delete []Arr;
        }

        inline void Accept();
        inline void Display();
};

void Array::Accept()
{
    cout<<"Please enter the values\n";

    for(int i = 0; i <this->Size; i++)
    {
        cin>>Arr[i];
    }
}

void Array::Display()
{
    cout<<"Elements are : \n";

    for(int i = 0; i < this->Size; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}

class ArrSearch : public Array
{
    public: 
        ArrSearch(int no = 10):Array(no)
        {}

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

int ArrSearch :: SearchFirst(int value)
{
    int i = 0;

    for(i = 0; i < Size; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }
    if(i == Size)
    {
        return -1;
    }
    else
    {
        return i+1;
    }
}

int ArrSearch :: Frequency(int value)
{
    int i = 0;

    for(int iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] == value)
        {
            i++;
        }
    }
    return i;
}

int ArrSearch :: SearchLast(int value)
{
    int i = 0; 
    for(i = Size-1; i >= 0; i--)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }
    if(i == Size)
    {
        return -1;
    }
    else
    {
        return i+1;
    }
}

int ArrSearch :: EvenCount()
{
    int iCnt = 0;
    for(int i = 0; i < Size; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch :: OddCount()
{
    int iCnt = 0;
    for(int i = 0; i < Size; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch :: SumAll()
{
    int iSum = 0;
    for(int i = 0; i < Size; i++)
    {
            
        iSum = iSum + Arr[i];

    }
    return iSum;
}

int main()
{
    cout<<"Inside main\n";

    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iRet = sobj1.Frequency(11);

    cout<<"Frequency is "<<iRet<<"\n";

    iRet = sobj1.SearchFirst(11);

    cout<<"First occurance is "<<iRet<<"\n";

    iRet = sobj1.SearchLast(11);

    cout<<"Last occurance is "<<iRet<<"\n";

    iRet = sobj1.OddCount();

    cout<<"Odd Count is "<<iRet<<"\n";

    iRet = sobj1.EvenCount();

    cout<<"Even count is "<<iRet<<"\n";

    iRet = sobj1.SumAll();

    cout<<"Sum of all is "<<iRet<<"\n";




    return 0;
}