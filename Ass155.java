import java.util.*;

class Ass155
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String : ");

        String str = sobj.nextLine();
        StringDemo obj = new StringDemo();

        obj.Reverse(str);
    }
} 

class StringDemo
{
    public void Reverse(String str)
    {
        int i = 0;
        int temp = 0;

        for(i = (str.length()-1); i >= 0 ; i--)
        {
            System.out.print(str.charAt(i));
        }
    }
}