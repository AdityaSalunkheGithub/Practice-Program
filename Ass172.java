import java.util.*;

class Ass171
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter First string : ");
        String str1 = sobj.nextLine();
        
        System.out.println("Enter Second string : ");
        String str2 = sobj.nextLine();
        
        StringDemo obj = new StringDemo();

        boolean bRet = obj.StrCmpX(str1, str2);
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

class StringDemo
{
    public boolean StrCmpX(String src, String dest)
    {
        int iCnt = 0;
        boolean Flag = false;
        for(iCnt = 0; (iCnt < src.length())&& (iCnt < dest.length()); iCnt++)
        {
            if(src.charAt(iCnt) == dest.charAt(iCnt))
            {
                return true;
            }
        }
        return Flag;
    }
}