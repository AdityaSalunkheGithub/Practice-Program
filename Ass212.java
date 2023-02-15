import java.util.*;

class Ass212
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of array : ");
        int iNo = sobj.nextInt();

        MyArray aobj = new MyArray(iNo);

        aobj.Accept();
        aobj.Display();
        aobj.SumArray();

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

    public void SumArray()
    {
        int iCnt = 0;
        int iDigit = 0;
        int iSum = 0;

        System.out.println("Sum of digit in Array is : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = 0;
            while(Arr[iCnt] > 0)
            {
                iDigit = Arr[iCnt] % 10;

                iSum = iSum + iDigit;

                Arr[iCnt] = Arr[iCnt] /10;
            }
            System.out.print(iSum+"\t");
        }
        System.out.println();

    }
}