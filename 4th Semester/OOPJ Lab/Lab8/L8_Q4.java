abstract class a
{
    abstract void dislay();
}
public class L8_Q4 
{
    public static void main(String[] args) {
        a obj=new a() {
            void dislay() {
                System.out.println("Anonymous class called");
            }
        };
        obj.dislay();
    }
}
