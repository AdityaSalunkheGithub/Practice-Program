import java.util.*;

class Ass199
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
    public void Pattern(int iRow , int iCol)
    {
        int i = 0; 
        int j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(((i + j) == (iCol + 1)) || (i == 1) || (i == iRow) || (j == 1) || (j == iCol))
                {
                    System.out.print("*\t");
                } 
                else if((i + j) < (iCol+1))
                {
                    System.out.print("#\t");
                }
                else if((i + j) > (iCol+1))
                {
                    System.out.print("$\t");
                }
            }
            System.out.println();
        
        }
    }
}