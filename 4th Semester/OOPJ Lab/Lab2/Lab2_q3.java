class Rectangle
{
    int length,breadth;
    int arrect(int l,int b)
    {
        return l*b;
    }
}
class Circle
{
    double r;
    double arcir(double radius)
    {
        return 3.14*radius*radius;
    }
}
public class Lab2_q3 {
    public static void main(String[] args) {
        Rectangle r1=new Rectangle();
        Circle c1=new Circle();
        r1.length=10;
        r1.breadth=20;
        c1.r=10.0;
        System.out.println("Length and breadth of rectangle is:"+r1.length+" "+r1.breadth+" and the area is:"+r1.arrect(r1.length,r1.breadth));
        System.out.println("Radius of circle:"+c1.r+" and the area is:"+c1.arcir(c1.r));
    }
    
}
