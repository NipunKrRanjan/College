import java.util.Scanner;
public class L8_Q6
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter two numbers to be divided:");
        int a=sc.nextInt();
        int b=sc.nextInt();
        try
        {
            int c=a/b;
            System.out.println("Result is:"+c);
        }
        finally
        {
            System.out.println("Program successfull");
        }
    }
}


