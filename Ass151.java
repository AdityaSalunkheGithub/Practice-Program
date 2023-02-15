import java.util.*;

class Ass151
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter the String : ");

        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        int iRet = obj.CountSmall(str);

        System.out.println("Count number of small character is : "+iRet);
    }
}

class StringDemo
{
    public int CountCap(String str)
    {
        int i = 0;
        int Count = 0;

        for(i = 0; i < str.length(); i++)
        {
            if((str.charAt(i) >= 'A') && (str.charAt(i) <= 'Z'))
            {
                Count++;
            }
        }
        return Count;
    }
}