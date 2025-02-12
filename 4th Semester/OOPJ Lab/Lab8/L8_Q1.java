import java.util.Scanner;
public class L8_Q1
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
        catch(ArithmeticException e)
        {
            System.out.println("ArtihmeticException caught by tyr-catch-finally block");
        }
        finally
        {
            System.out.println("Program successfull");
        }
    }
}
