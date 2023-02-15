import java.util.*;

class Ass205
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number elements in first array : ");
        int iNo = sobj.nextInt();

        MyArray obj = new MyArray(iNo);

        obj.Accept();
        obj.Display();

        int iRet[] = obj.CopyArrRev();
        System.out.println("Cpoied array in reverse format : ");
        for(int iCnt = (iRet.length-1); iCnt >= 0; iCnt--)
        {
            System.out.print(iRet[iCnt]+"\t");
        }
        System.out.println();
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
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter element for array : "+(iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;
        System.out.println("Display array of element : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

    public int[] CopyArrRev()
    {
        int aLength = Arr.length;

        int CopyArr[] = new int[aLength];

        System.arraycopy(Arr, 0, CopyArr, 0, aLength);

        return CopyArr;
    }  
}