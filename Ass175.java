import java.util.*;

class Ass171
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string : ");
        String str1 = sobj.nextLine();
        
        StringDemo obj = new StringDemo();

        boolean bRet = obj.CheckPallindrome(str1);
        if(bRet == true)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
    }
}

class StringDemo
{
    public boolean CheckPallindrome(String str)
    {
        
        char strArr[] = str.toCharArray();
        
        for (int i = 0; i < strArr.length; i++) 
        {
            // here is the actual logic
            
            if (strArr[i] >= 'A' && strArr[i] <= 'Z'&&strArr[i] >= '0'&&strArr[i] >= '9') 
            {
                strArr[i] = (char) ((int) strArr[i] + 32);
            }
        }

        int iStart = 0;
        int iEnd = strArr.length-1;
        boolean Flag = true;

        while(iStart < iEnd)
        {
            if(strArr[iStart] != strArr[iEnd])
            {
                Flag = false;
                break;
            }
            iStart++;
            iEnd--;
        }
        return Flag;
    }
}