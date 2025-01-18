public class q4 
{
    public static void main(String[] args) 
    {
        Animal a=new Animal();
        Tiger t=new Tiger();
        Cat c=new Cat();
        a.show();
        t.show();
        c.show();
    }
}
class Animal
{
    void show()
    {
        System.out.println("This is a living being.");
    }
}
class Tiger extends Animal
{
    void show()
    {
        System.out.println("Has whishkers.");
    }
}
class Cat extends Tiger
{
    void show()
    {
        System.out.println("Can meow.");
    }
}
