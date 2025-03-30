package Assignment;
interface Printable
{
    public void print();
}
interface Scannable
{
    public void scan();
}
class MultiFunctionPrinter implements Printable,Scannable
{
    public void print()
    {
        System.out.println("Inside the print method.");
    }
    public void scan()
    {
        System.out.println("Inside the scan method");
    }
}
public class q6 
{
    public static void main(String[] args) 
    {
        MultiFunctionPrinter m1=new MultiFunctionPrinter();
        m1.print();
        m1.scan();
    }
}
