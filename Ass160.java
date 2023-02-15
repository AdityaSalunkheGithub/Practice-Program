import java.util.*;

 class Ass160
 {
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of elements : ");
        int iNo = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo);
        aobj.Accept();
        aobj.Display();
        aobj.DisplayMultof11();

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
            System.out.println("Enter Element : "+(iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;
        System.out.println("Elements in array : ");
        for(iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

    public void DisplayMultof11()
    {
        int iCnt = 0;
        System.out.println("Multiple of 11 is : ");
        for(iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            if(Arr[iCnt] % 11 == 0)
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
        System.out.println();
    }
 }