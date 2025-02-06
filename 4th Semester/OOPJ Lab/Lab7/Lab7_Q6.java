class Bike
{
    void show()
    {
        System.out.println("This is a bike.");
    }
}
class Honda extends Bike
{
    void show()
    {
        System.out.println("This is a Honda Bike");
    }
}
public class Lab7_Q6 
{
    public static void main(String[] args)
    {
        Bike b=new Honda();//Uper Casting                                   
        b.show();
    }
}
