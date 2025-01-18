public class q3
{
    public static void main(String[] args)
    {
        m1 a=new m1();
        m2 b=new m2();
        m3 c=new m3();
        a.disp();
        b.disp();
        c.disp();
        a.disp();
    }
}
class m1
{
    void disp()
    {
        System.out.println("Method 1 is being called.");
    }
}
class m2 extends m1
{
    void disp()
    {
        System.out.println("Method 2 is being override and called.");
    }
}
class m3 extends m1
{
    void disp()
    {
        System.out.println("Method 3 is being override and called.");
    }
}
