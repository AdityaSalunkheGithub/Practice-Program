import java.util.*;

class Ass152
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String : ");

        String str = sobj.nextLine();
        StringDemo obj = new StringDemo();

        boolean bRet = false;

        bRet = obj.ChkVowel(str);
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
    public boolean ChkVowel(String str)
    {
        int i = 0;
        boolean Flag = false;

        for(i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) == 'a'||str.charAt(i) =='i'||str.charAt(i) =='o'||str.charAt(i) =='e'||str.charAt(i) =='u')
            {
                return true;
            }
        }
        return Flag;
    }
}