import java.util.*;

class Ass209
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of first array : ");
        int iNo1 = sobj.nextInt();

        MyArray obj = new MyArray(iNo1);

        obj.Accept();
        obj.Display();

        boolean bRet = obj.ChkPlallindrome();
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

class MyArray
{
    public int Arr1[];

    public MyArray(int iSize1)
    {
        Arr1 = new int[iSize1];
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

    }

    public boolean ChkPlallindrome()
    {
        int iStart = 0;
        int iEnd = Arr1.length-1;
        boolean Flag = true;

        while(iStart < iEnd)
        {
            if(Arr1[iStart] != Arr1[iEnd])
            {
                Flag = false;
                break;
            }
            iStart++;
            iEnd--;            
        }
        return Flag;
    }
    
}