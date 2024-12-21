package Lab3;
import java.io.*;
import java.util.Scanner;
class Armstrong
{
    boolean check(int num)
    {
        double sum=0;
        int n = num;
        int i=1,l=0;
        while(n!=0)
        {
            l++;
            n=n/10;
        }
        n=num;
        while(n!=0)
        {
            int r= n%10;
            sum=sum+Math.pow(r,l);
            n=n/10;
        }
        if(sum==num)
            return true;
        else
            return false;
    }
}
public class q1 
{
    public static void main(String[] args)throws IOException
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int a=sc.nextInt();
        Armstrong num=new Armstrong();
        num.check(a);
        if(num.check(a))
            System.out.println("Entered number is Armstrong");
        else
        System.out.println("Entered number is not Armstrong");
    }  
}