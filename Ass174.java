import java.util.*;

class Ass171
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string : ");
        String str1 = sobj.nextLine();
        
        StringDemo obj = new StringDemo();

        obj.StrRevTogX(str1);
    }
}

class StringDemo
{
    public void StrRevTogX(String str)
    {
        
        char strArr[] = str.toCharArray();
        
        for (int i = 0; i < strArr.length; i++) 
        {
            // here is the actual logic
            if (strArr[i] >= 'a' && strArr[i] <= 'z') 
            {
                strArr[i] = (char) ((int) strArr[i] - 32);
            }
            else if (strArr[i] >= 'A' && strArr[i] <= 'Z') 
            {
                strArr[i] = (char) ((int) strArr[i] + 32);
            }
        }

        int iCnt = 0;
        for(iCnt = (strArr.length-1); iCnt >= 0; iCnt--)
        {
            System.out.print(strArr[iCnt]);
        } 
        System.out.println();
    }
}