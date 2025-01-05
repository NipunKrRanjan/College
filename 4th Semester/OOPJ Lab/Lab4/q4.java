import java.io.IOException;
import java.util.Scanner;
class factorial
{
    int result(int n)
    {
        if(n==0)
        {
            return 1;
        }
        else
        {
            int a=1;
            for(int i=1;i<=n;i++)
            {
                a=a*i;
            }
            return a;
        }
    }
}
public class q4 {
    public static void main(String[] args)throws IOException
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the value of n:");
        int n=sc.nextInt();
        int n1=2,n2=10,sum1=0,sum2=0;
        factorial f1=new factorial();
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
            {
                int a=f1.result(n1);
                sum1=sum1+a;
                n1=n1*2;
            }
            else
            {
                int b=f1.result(n2);
                sum2=sum2+b;
                n2=n2*2;
           }
        }
        int sum=sum1-sum2;
        System.out.println("The result is:"+sum);
    }
}
