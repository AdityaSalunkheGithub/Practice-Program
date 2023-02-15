import java.util.*;

class Ass177
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of rows : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iNo2 = sobj.nextInt();

        Pattern obj = new Pattern();

        obj.Pattern(iNo1, iNo2);
    }
}

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i = 0; 
        int j = 0; 
        char ch1 = 'A';
        char ch2 = 'a';
        for(i = 1; i <= iRow; i++)
        {
            ch1 = 'A';
            ch2 = 'a';
            for(j = 1; j <= iCol; j++)
            {
                if(i % 2 == 0)
                {
                    System.out.print(ch2+"\t");  
                }
                else
                {
                    System.out.print(ch1+"\t");  
                }
                ch1++;
                ch2++;
            }
            System.out.println();
        }
    } 
}