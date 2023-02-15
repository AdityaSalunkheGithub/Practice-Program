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
        
        System.out.println("Enter number :  ");
        int iNo = sobj.nextInt(); 

        StringDemo obj = new StringDemo();

        String SRet = obj.StrNCatX(str1, str2, iNo);
        System .out.println("The Added string is : "+SRet);

    }
}

class StringDemo
{
    public String StrNCatX(String src, String dest, int iCnt)
    {
        int i = 0;
       
        for(i = 0; i < iCnt; i++)
        {
           src = src + dest.charAt(i); 
        }

        
        return src;
    }   
}