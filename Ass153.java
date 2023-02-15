import java.util.*;

class Ass153
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String : ");

        String str = sobj.nextLine();
        StringDemo obj = new StringDemo();

        int iRet = obj.CountSmall(str);
        System.out.println("Count frequency : "+iRet);
    }
} 

class StringDemo
{
    public int CountSmall(String str)
    {
        int i = 0; 
        int iCountCap = 0, iCountSamll = 0;
        for(i = 0; i < str.length(); i++)
        {
            if((str.charAt(i) >= 'A') && (str.charAt(i) <= 'Z'))
            {
                iCountCap++;
            }
            else if((str.charAt(i)>= 'a') && (str.charAt(i) <= 'z'))
            {
                iCountSamll++;
            }   
        }
        return iCountSamll-iCountCap;
    }
}