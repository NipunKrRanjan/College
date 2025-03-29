import java.util.*;
public class Lab11_Q1 extends Thread
{
    int Lw,Up;
    String name;
    public Lab11_Q1(String nam,int lower,int upper)
    {
       this.name=nam;
       this.Lw=lower;
       this.Up=upper;
    } 
    public void run()
    {
        System.out.println("Thread-"+name);
        System.out.println("Counter: ");
        for(int i=Lw;i<=Up;i++)
        {
            System.out.println(i);
            try 
            {
                Thread.sleep(5);
            } 
            catch (Exception e) 
            {
                System.out.println("Thread interuppted");
            }
            
        }
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the name of thread:");
        String name=sc.nextLine();
        System.out.println("Enter the uppper limit:");
        int u=sc.nextInt();
        System.out.println("Enter the lower limit:");
        int l=sc.nextInt();
        Lab11_Q1 cr=new Lab11_Q1(name,u,l);
        cr.start();
        sc.close();
    }
}
