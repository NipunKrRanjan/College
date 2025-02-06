interface A
{
    void print();
}
interface B 
{
    void show();
}
class C implements A,B
{
    public void print()
    {
        System.out.println("Interface A.");
    }
    public void show()
    {
        System.out.print("Interface B.");
    }
}
public class Lab7_Q4
{
    public static void main(String[] args) {
        C obj=new C();
        obj.print();
        obj.show();
    }
}
