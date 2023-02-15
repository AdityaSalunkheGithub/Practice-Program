import java.util.*;

class Ass220
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of array : ");
        int iNo = sobj.nextInt();

        MyArray obj = new MyArray(iNo);

        obj.Accept();
        obj.Pattern();
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
        Scanner sobj = new Scanner(System.in);
        int i = 0;

        System.out.println("Array : ");

        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Pattern()
    {
        int i = 0;
        int j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 1; j <= Arr[i]; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
        System.out.println();

    }
}