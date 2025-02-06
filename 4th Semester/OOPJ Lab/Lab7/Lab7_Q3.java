class A
{
    void show()
    {
        System.out.println("Present in class A");
    }
}
class B extends A
{
    void show()
    {
        System.out.println("Present in class B");
    }
}
class C extends A
{
    void show()
    {
        System.out.println("Present in class c");
    }
}
public class Lab7_Q3
{
    public static void main(String[] args) {
        A a=new A();
        B b=new B();
        C c=new C();
        A ref;
        ref=a;
        ref.show();
        ref=b;
        ref.show();
        ref=c;
        ref.show();
    }
}
