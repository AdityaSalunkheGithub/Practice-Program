import java.util.*;

class Ass187
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        Pattern obj = new Pattern();

        obj.Pattern(str);
    }
}

class Pattern
{
    public void Pattern(String str)
    {
        int i = 0;
        int j = 0;
         for(i = 0; i < str.length(); i++)
         {
            j = 0;
            for(j = 0; j < str.length(); j++)
            {
                if((i + j) < 5)
                {
                    System.out.print(str.charAt(j)+"\t");
                }
            }
            System.out.println();
         }
    }
}