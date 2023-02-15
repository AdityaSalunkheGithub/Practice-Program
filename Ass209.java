import java.util.*;

class Ass209
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of first array : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter size of second array : ");
        int iNo2 = sobj.nextInt();

        MyArray obj = new MyArray(iNo1,iNo2);

        obj.Accept();
        obj.Display();

        int iRet[] = obj.CopyArray();
        System.out.println("Copied array is : ");
        for(int iCnt = 0; iCnt < iRet.length; iCnt++)
        {
            System.out.print(iRet[iCnt]+"\t");
        }
        System.out.println();

    }
}

class MyArray
{
    public int Arr1[];
    public int Arr2[];

    public MyArray(int iSize1, int iSize2)
    {
        Arr1 = new int[iSize1];
        Arr2 = new int[iSize2];
    }

    public void Accept()
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            System.out.println("Enter element : "+(iCnt +1));
            Arr1[iCnt] = sobj.nextInt();
        }

        for(iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            System.out.println("Enter element : "+(iCnt +1));
            Arr2[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;

        System.out.println("First array : ");

        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            System.out.print(Arr1[iCnt]+"\t");   
        }
        System.out.println();

        System.out.println("Second array : ");
        for(iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            System.out.print(Arr2[iCnt]+"\t");
        }
        System.out.println();

    }

    public int[] CopyArray()
    {
        int aLength = Arr1.length;
        int bLength = Arr2.length;

        int CopyArr[] = new int[aLength + bLength];

        System.arraycopy(Arr1, 0, CopyArr, 0, aLength);
        System.arraycopy(Arr2, 0, CopyArr, aLength, bLength);

        return CopyArr;

    }
}