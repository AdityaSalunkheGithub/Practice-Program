import java.util.*;

class Ass162
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number : ");
        int iNo = sobj.nextInt();

        Digit obj = new Digit();
        int iRet = obj.CountRange(iNo);
        System.out.println("3 to 7 count is : "+iRet);
    }
}

class Digit
{
    public int CountRange(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit > 3)&&(iDigit < 7))
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }
}