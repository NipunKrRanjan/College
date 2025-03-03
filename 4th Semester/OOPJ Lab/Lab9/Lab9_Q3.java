import java.util.Scanner;
class CheckArgument extends Exception
{
    public CheckArgument(String s)
    {
        super(s);
    }
}
public class Lab9_Q3 
{
    static int count=0,sum=0;
    static void calculate()
    {
        count++;
    }
    static int store(int a)
    {
        sum+=a*a;
        return sum;
    }
    static int check()throws CheckArgument
    {
        if(count<4)
        {
            throw new CheckArgument("Argument exception occured");
        }
        else
        {
            return 1;
        }
    }
    public static void main(String[] args) 
    {
        int b = 0;
        Scanner sc=new Scanner(System.in);
        while (true) 
        { 
           System.out.println("Enter choice\n1:To input number \n2:To exit");
           int ch=sc.nextInt();
           if(ch==1)
           {
            System.out.println("Enter number:");
            int a=sc.nextInt();
            calculate();
            b=store(a);
           } 
           else
           {
            break;
           }
        }
        int c = 0;
        try
        {
           c=check();
        }
        catch(CheckArgument e)
        {
            System.out.println("Argument exception occured");
        }
        if(c==1)
        {
            System.out.println("Sum of squares of numbers is:"+b);
        }
    }
}
