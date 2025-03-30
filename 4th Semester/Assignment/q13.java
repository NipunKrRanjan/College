package Assignment;

import java.util.Scanner;

class NegativeException extends Exception
{
    public NegativeException(String s)
    {
        super(s);
    }
}
public class q13
{
    public static void check(int n)throws NegativeException
    {
        if(n<0)
            throw new NegativeException("Exception occured, Negative number");
    }
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int n=sc.nextInt();
        try
        {
            check(n);
        }
        catch(NegativeException e)
        {
            System.out.println(e.getMessage());
        }
    }
}
