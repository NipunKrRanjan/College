import java.io.IOException;
import java.util.Scanner;
public class q2 
{
    public static void main(String[] args)throws IOException 
    {
        Scanner sc=new Scanner(System.in);
        double a=Math.random();
        int i=0;
        while(true)
        {
            System.out.println("Enter your guess:1 if you think the number is less than 0.5, 2 if you think the number is greater than 0.5");
            int guess=sc.nextInt();
            if(a<0.5 && guess==1)
            {
                System.out.println("You are correct");
                i=1;
                break;
            }
            else if(a>0.5 && guess==2)
            {
                System.out.println("You are correct");
                i=1;
                break;
            }
            else
            {
                System.out.println("You are wrong! Try again");
            }
        }
        if(i==1)
        { 
            System.out.println("The number was:"+a);
        }
    }   
}
