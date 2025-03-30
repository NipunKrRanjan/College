package Assignment;
import java.util.Scanner;
public class q11 
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string:");
        String str=sc.nextLine();
        String og=str;
        str=str.toLowerCase();
        int f = 0;
        for(int i=0;i<str.length();i++)
        {
            f=0;
            for(int j=0;j<str.length();j++)
            {
                if(str.charAt(i)==str.charAt(j)&&i!=j)
                {
                    f=1;
                    break;
                }
            }
            if(f!=1)
            {
                System.out.println("First non-repeated charachter:"+og.charAt(i));
                break;
            }
        }
        if(f==1)
        {
            System.out.println("No charachter that is not being repeated");
        }
    }
}
