class A
{
    private void print()
    {
    System.out.println("Private method of class A");
    }
    A()
    {
        print();
    }
}
public class L8_Q2
{
    public static void main(String args[])
    {
        A obj=new A();
    }
}
