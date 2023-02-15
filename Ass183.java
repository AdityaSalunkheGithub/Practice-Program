import java.util.*;

class Ass183
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of rows : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iNo2 = sobj.nextInt();

        Pattern obj = new Pattern();

        obj.Pattern(iNo1,iNo2);
    }
}

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;

        for(i = 1; i <= iRow; i++)
        {
            j = iCol;
            for(j = iCol; j >= 1; j--)
            {
                System.out.print(j+"\t");
            }
            System.out.println();
        }

    }
}