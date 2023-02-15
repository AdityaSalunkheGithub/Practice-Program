import java.util.*;

class Ass162
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number : ");
        int iNo = sobj.nextInt();

        Digit obj = new Digit();
        int iRet = obj.CountOdd(iNo);
        System.out.println("Odd count is : "+iRet);
    }
}

class Digit
{
    public int CountOdd(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 != 0)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }
}