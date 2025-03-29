import java.util.Scanner;
public class Lab11_Q1_2
{
    public void counter(int lowerLimit,int upperLimit)
    {
        for(int i=lowerLimit;i<=upperLimit;i++)
        {
            System.out.println(i);
            try 
            {
                Thread.sleep(5);
            }
            catch (Exception e) 
            {
                System.out.println("Error");
            }
        }
    }
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter thread name:");
        String name=sc.nextLine();
        System.out.println("Enter Lower Limit:");
        int lower=sc.nextInt();
        System.out.println("Enter Upper Limit:");
        int upper=sc.nextInt();
        Lab11_Q1_2 a1=new Lab11_Q1_2();
        Thread t1=new Thread(()->{
            System.out.println("Threadname"+name);
            System.out.println("Counter:");
            a1.counter(lower, upper);
        });
        t1.start();
    }
}
