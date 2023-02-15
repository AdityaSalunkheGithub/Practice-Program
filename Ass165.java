import java.util.*;

class Ass162
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number : ");
        int iNo = sobj.nextInt();

        Digit obj = new Digit();
        int iRet = obj.CountDifference(iNo);
        System.out.println("diff bet sum of odd and sum of even : "+iRet);
    }
}

class Digit
{
    public int CountDifference(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;
        int EvenSum = 0;
        int OddSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                EvenSum = EvenSum + iDigit;
            }
            else
            {
                OddSum = OddSum + iDigit;
            }
            iNo = iNo / 10;
        }
        return EvenSum - OddSum;
    }
}