import java.util.*;

class Ass162
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number : ");
        int iNo = sobj.nextInt();

        Digit obj = new Digit();
        int iRet = obj.Multiply(iNo);
        System.out.println("Multiplication : "+iRet);
    }
}

class Digit
{
    public int Multiply(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;
        int Mult = 1;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit != 0)
            {
                Mult = Mult * iDigit;
            }
            iNo = iNo / 10;
        }
        return Mult;
    }
}