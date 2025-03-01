import java.util.Scanner;
class HrsException extends Exception
{
    public HrsException(String s)
    {
        super(s);
    }
}
class MinException extends Exception
{
    public MinException(String s)
    {
        super(s);
    }
}
class SecException extends Exception
{
    public SecException(String s)
    {
        super(s);
    }
}
public class Lab9_Q2 
{
    static void hrcheck(int hr)throws HrsException
    {
        if(hr<0 || hr>24)
        {
            throw new HrsException("Hour is invalid");
        }
    }
    static void mincheck(int min)throws MinException
    {
        if(min<0 || min>60)
        {
            throw new MinException("Minute is invalid");
        }
    }
    static void seccheck(int sec)throws SecException
    {
        if(sec<0 || sec>60)
        {
            throw new SecException("Second is invalid");
        }
    }
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter hours:");
        int hr=sc.nextInt();
        System.out.println("Enter minutes:");
        int min=sc.nextInt();
        System.out.println("Enter seconds:");
        int sec=sc.nextInt();
        try
        {
            hrcheck(hr);
        }
        catch(HrsException e)
        {
            System.out.println(e.getMessage());
        }
        try
        {
            mincheck(min);
        }
        catch(MinException e)
        {
            System.out.println(e.getMessage());
        }
        try {
            seccheck(sec);
        }
         catch (SecException e)
        {
            System.out.println(e.getMessage());
        }
    }
}
