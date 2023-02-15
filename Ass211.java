import java.util.*;

class Ass211
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of array : ");
        int iNo = sobj.nextInt();

        MyArray aobj = new MyArray(iNo);

        aobj.Accept();
        aobj.Display();
        aobj.ReverseArray();

    }
}

class MyArray
{
    public int Arr[];

    public MyArray(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter element : "+(iCnt+1));
            Arr[iCnt] = sobj.nextInt();   
        }
    }

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Elements in the array : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

    public void ReverseArray()
    {
        int iCnt = 0;
        int iDigit = 0;

        System.out.println("Reverse Array is : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            while(Arr[iCnt] > 0)
            {
                iDigit = Arr[iCnt] % 10;

                System.out.print(iDigit);

                Arr[iCnt] = Arr[iCnt] /10;
            }
            System.out.print("\t");
        }
        System.out.println();

    }
}