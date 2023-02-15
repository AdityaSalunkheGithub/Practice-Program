import java.util.*;

class Ass215
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of students : ");
        int iNo = sobj.nextInt();

        MyArray aobj = new MyArray(iNo);

        aobj.Accept();
        aobj.Percentage();

    }
}

class MyArray
{
    public float Arr[];

    public MyArray(int iSize)
    {
        Arr = new float[iSize];
    }

    public void Accept()
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter Marks of student : "+(iCnt+1));
            Arr[iCnt] = sobj.nextFloat();   
        }
        System.out.println();
    }

    public void Percentage()
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] < 35)
            {
                System.out.println(Arr[iCnt] +" Fail");
            }
            else if(Arr[iCnt] < 50)
            {
                System.out.println(Arr[iCnt] +" Pass class");
            }
            else if(Arr[iCnt] < 60)
            {
                System.out.println(Arr[iCnt] +" Second class");
            }
            else if(Arr[iCnt] < 70)
            {
                System.out.println(Arr[iCnt] +" First class");
            }
            else if(Arr[iCnt] > 70 )
            {
                System.out.println(Arr[iCnt] +" First class with Distinction");
            }
        }
        System.out.println();
    }

}