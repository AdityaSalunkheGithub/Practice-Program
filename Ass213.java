import java.util.*;

class Ass213
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Array of character : ");
        String str = sobj.nextLine();

        MyArray aobj = new MyArray();

        int iRet = aobj.ArrayCapital(str);
        System.out.println("Capital Count : "+iRet);
    }
}

class MyArray
{

    public int ArrayCapital(String s)
    {
        int iCnt = 0, iCount = 0;

        for(iCnt = 0; iCnt < s.length(); iCnt++)
        {
            if(s.charAt(iCnt) >= 'A' && s.charAt(iCnt) <= 'Z')
            {
                iCount++;
            }
        }
        return iCount;
    }
}