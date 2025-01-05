class sum
{
    int sum,n;
    void getsum(int num)
    {
        n=num;
        int s=0;
        for(int i=1;i<=num;i++)
        {
            s=s+i;
        }
        sum=s;
    }
    void result()
    {
        System.out.println("Sum of "+n+" natural numbers is:"+sum);
    }
}
public class q3
{
    public static void main(String[] args) 
    {
        sum s1=new sum();
        s1.getsum(10);
        s1.result();
    }
}
