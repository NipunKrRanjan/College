package Assignment;
interface Payments
{
    public void makePayment();
    public void refundPayment();
}
class Credit implements Payments
{
    public void makePayment()
    {
        System.out.println("Make payment");
    }
    public void refundPayment()
    {
        System.out.println("Refund Payment");
    }
}
class PayPal implements Payments
{
    public void makePayment()
    {
        System.out.println("Make payment");
    }
    public void refundPayment()
    {
        System.out.println("Refund Payment");
    }
}
public class q5
{
    public static void main(String[] args) {
        Credit c=new Credit();
        c.makePayment();
        c.refundPayment();
        PayPal p=new PayPal();
        p.makePayment();
        p.refundPayment();
    }
}
