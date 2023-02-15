import java.util.*;

class Ass217
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Array of character : ");
        String str = sobj.nextLine();
        System.out.println("Enter character : ");
        char ch = sobj.next().charAt(0);
        
        MyArray aobj = new MyArray();

        int iRet = aobj.Search(str, ch);
        System.out.println("Search : "+iRet);
    }
}

class MyArray
{

    public int Search(String s, char ch)
    {
        int iCnt = 0, iCount = 0;

        for(iCnt = 0; iCnt < s.length(); iCnt++)
        {
            if(s.charAt(iCnt) == ch || s.charAt(iCnt) == (ch - 32))
            {
                iCount++;
            }
        }
        return iCount;
    }
}