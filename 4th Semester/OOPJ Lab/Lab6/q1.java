public class q1 
{
    public static void main(String[] args)
    {
        apple a = new apple();
        cherry c = new cherry();
        banana b = new banana();
        a.show();
        c.show();
        c.display();
        b.show();
        b.disp();
    }
}
class apple
{
    public void show()
    {
            System.out.println("This is class apple being called.");
    }

} 
class cherry extends apple
{
    public  void display()
    {
            System.out.println("This is class cherry being called.");   
    }
}
class banana extends apple 
{
    public  void disp()
    {
        System.out.println("This is class banana being called.");
    }
}
   