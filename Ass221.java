import java.util.*;

class Ass221
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string 1 : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter string 2 : ");
        String str2 = sobj.nextLine();

        MyString obj = new MyString();

        boolean bRet = obj.ChkString(str1, str2);
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

class MyString
{
    public boolean ChkString( String s1, String s2)
    {
        int i = 0, j = 0;

        if(s1.length() != s2.length())
        {
            return false;
        }
        
        String s3 = s1 + s1;
        if(s3.indexOf(s2) != -1)
        {
            return true;
        }
        else
        {
            return false;
        }        
    }
}