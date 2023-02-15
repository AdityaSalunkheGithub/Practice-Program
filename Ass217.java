import java.util.*;

class Ass217
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Array of character : ");
        String str = sobj.nextLine();

        MyArray aobj = new MyArray();

        int iRet = aobj.ArrayCountVowels(str);
        System.out.println("Vowel Count : "+iRet);
    }
}

class MyArray
{

    public int ArrayCountVowels(String s)
    {
        int iCnt = 0, iCount = 0;

        for(iCnt = 0; iCnt < s.length(); iCnt++)
        {
            if(s.charAt(iCnt) == 'a' || s.charAt(iCnt) == 'A'|| s.charAt(iCnt) == 'e'|| s.charAt(iCnt) == 'e'|| s.charAt(iCnt) == 'i'|| s.charAt(iCnt) == 'I'|| s.charAt(iCnt) == 'o'|| s.charAt(iCnt) == 'O'|| s.charAt(iCnt) == 'u'|| s.charAt(iCnt) == 'U')
            {
                iCount++;
            }
        }
        return iCount;
    }
}