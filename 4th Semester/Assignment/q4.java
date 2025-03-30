package Assignment;
interface RemoteControl
{
    public void powerOn();
    public void powerOff();
}
class TV implements RemoteControl
{
    public void powerOn()
    {
        System.out.println("On method");
    }
    public void powerOff()
    {
        System.out.println("Off method");
    }
}
public class q4 
{
    public static void main(String[] args) {
        TV t=new TV();
        t.powerOn();
        t.powerOff();
    }
}
