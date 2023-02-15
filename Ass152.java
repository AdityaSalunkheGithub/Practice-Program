import java.util.*;

class Ass152
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String : ");

        String str = sobj.nextLine();
        StringDemo obj = new StringDemo();

        int iRet = obj.CountSmall(str);
        System.out.println("Count number of small Char : "+iRet);
    }
} 

class StringDemo
{
    public int CountSmall(String str)
    {
        int i = 0; 
        int iCnt = 0;
        for(i = 0; i < str.length(); i++)
        {
            if((str.charAt(i) >= 'a') && (str.charAt(i) <= 'z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}