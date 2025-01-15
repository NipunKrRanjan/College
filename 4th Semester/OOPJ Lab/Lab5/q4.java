
import java.io.IOException;
import java.util.Scanner;

public class q4 {
    public static void main(String[] args)throws IOException
     {
        Scanner sc=new Scanner(System.in);
        double arr[]=new double[10];
        double sum=0.0;
        System.out.println("Enter ten number:");
        for (int i = 0; i < 10; i++)
        {
            arr[i]=sc.nextDouble();
            sum=sum+arr[i];
        }
        System.out.println("The average of 10 numbers:"+sum/10.0);
    }
}
