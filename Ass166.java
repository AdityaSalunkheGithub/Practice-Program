import java.util.*;

class Ass166
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number of Elements : ");
        int iNo = sobj.nextInt();
        System.out.println("Enter Value : ");
        int iValue = sobj.nextInt();

        Number obj = new Number(iNo);

        obj.Accept();
        obj.Display();
        boolean bRet = false;
        bRet = obj.Check(iValue);
        if(bRet == true)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
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
        System.out.println("Elements in array are : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

    public boolean Check(int iValue)
    {
        int iCnt = 0;
        boolean Flag = false;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iValue)
            {
                return true;
            }
        }
        return Flag;
    }
}