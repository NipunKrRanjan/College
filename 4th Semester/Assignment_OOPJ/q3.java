package Assignment;
interface Flyable
{
   public void fly();
}
interface Swimmiable
{
    public void swim();
}
class Duck implements Swimmiable,Flyable
{
    public void fly()
    {
        System.out.println("Inside fly method");
    }
    public void swim()
    {
        System.out.println("Inside Swim method");
    }
}
public class q3
{
    public static void main(String[] args) {
        Duck d=new Duck();
        d.fly();
        d.swim();
    }
}
