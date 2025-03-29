public class Lab11_Q2
{
    public synchronized void display()
    {
        System.out.println("I\nLove\nJAVA\nVery\nMuch");
    }
    public static void main(String[] args) 
    {
        Lab11_Q2 d1=new Lab11_Q2();
        Thread t1=new Thread(()->{
            d1.display();
        });
        Thread t2=new Thread(()->{
            d1.display();
        });
        t1.start();
        t2.start();
        try
        {
            t1.join();
            t2.join();
        }
        catch(Exception e)
        {
            System.out.println("Error");
        }
    }
}
