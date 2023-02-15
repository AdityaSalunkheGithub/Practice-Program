import java.util.*;

class Ass201
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number elements in first array : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter number of elements in second elements : ");
        int iNo2 = sobj.nextInt();

        MyArray obj = new MyArray(iNo1, iNo2);

        obj.Accept();
        obj.Display();
    }
}

class MyArray
{
    public int Arr1[];
    public int Arr2[];

    public MyArray(int iSize1,int iSize2)
    {
        Arr1 = new int[iSize1];
        Arr2 = new int[iSize2];
    }

    public void Accept()
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter element for first array : "+(iCnt+1));
            Arr1[iCnt] = sobj.nextInt();
        }

    
        for(iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter element for Second array : "+(iCnt+1));
            Arr2[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;
        System.out.println("Display array of First element : ");
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            System.out.print(Arr1[iCnt]+"\t");
        }
        System.out.println();

        System.out.println("Display array of second element : ");
        for(iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            System.out.print(Arr2[iCnt]+"\t");
        }
        System.out.println();
    }
}