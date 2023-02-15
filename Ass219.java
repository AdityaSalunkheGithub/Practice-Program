import java.util.*;

class Ass219
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter character : ");
        String str = sobj.nextLine();

        MyArray obj = new MyArray();

        int iRet = obj.Difference(str);
        System.out.println("Difference : "+iRet);
    }
}

class MyArray
{
    public int Difference(String str)
    {
        int i = 0;
        int CountCapital = 0, CountEven = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < str.length(); i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                CountCapital++;
            }
            else if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                CountEven++;
            }
        }
        return CountCapital - CountEven;
    }
}