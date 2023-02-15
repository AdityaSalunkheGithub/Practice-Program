import java.util.*;

class Ass216
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        MyArray obj = new MyArray();

        obj.ArrayReplace(str);
    }
}

class MyArray
{
    public void ArrayReplace(String str)
    {
        int i = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < str.length(); i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                System.out.print((char)(Arr[i] + 32) +"\t");
            }
            else if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                System.out.print((char)(Arr[i] - 32) +"\t");
            }
        }
        System.out.println();
    }
}