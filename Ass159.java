import java.util.*;

class Ass157
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the numbers of elements : ");
        int iNo = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo);

        aobj.Accept();
        aobj.Display();
        aobj.DisplayDivOf5and3();
    }
}

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
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
        for(iCnt = 0;  iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

    public void DisplayDivOf5and3()
    {
        int iCnt = 0;
        
        System.out.println("Numbers that divisible by 5 and 3 is : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(((Arr[iCnt] % 5) == 0)&&((Arr[iCnt] % 3) == 0))
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
        System.out.println();
    }
}