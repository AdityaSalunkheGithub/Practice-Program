import java.util.*;

class Ass156
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter size of array : ");
        int iNo = sobj.nextInt(); 

        ArrayX aobj = new ArrayX(iNo);

        aobj.Accept();
        aobj.Display();

        int iRet = aobj.Difference();
        System.out.println("Difference bet sum of even and sum of odd : "+iRet);
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
        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter element : "+(i+1));
            Arr[i] = sobj.nextInt();
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

    public int Difference()
    {
        int iCnt = 0; 
        int EvenSum = 0, OddSum = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                EvenSum = EvenSum + Arr[iCnt];
            }
            else
            {
                OddSum = OddSum + Arr[iCnt];
            }
        }
        return EvenSum - OddSum;
    }
}