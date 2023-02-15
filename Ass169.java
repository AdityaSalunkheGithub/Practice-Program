import java.util.*;

class Ass167
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of elements : ");
        int iNo = sobj.nextInt();
        System.out.println("enter Starting number : ");
        int iStart = sobj.nextInt();

        System.out.println("enter Ending number : ");
        int iEnd = sobj.nextInt();

        Number obj = new Number(iNo);

        obj.Accept();
        obj.Display();

        obj.DisplayX(iStart,iEnd);
        
    }
}

class Number
{
    public int Arr[];

    public Number(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter element : "+(iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;
        
        System.out.println("Elements in array : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

    public void DisplayX(int Start, int End)
    {
        int iCnt = 0;
        System.out.print("Range : ");
       
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] > Start) && Arr[iCnt] < End)
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
    }
}