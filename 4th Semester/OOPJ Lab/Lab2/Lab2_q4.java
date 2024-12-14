class Rectangle
{
    int length,breadth;
    int arrec(int l,int b)
    {
        return l*b;
    }
    int perrec(int l,int b)
    {
        return 2*(l+b);
    }
}
class Circle
{
    double r;
    double arcir(double radius)
    {
        return 3.14*radius*radius;
    }
    double prcir(double radius)
    {
        return 3.14*r;
    }
}
class Square
{
    int side;
    int arsq(int s)
    {
        return s*s;
    }
    int prsq(int s)
    {
        return 4*s;
    }
}
public class Lab2_q4
 {
    public static void main(String[] args) {
        Rectangle r1=new Rectangle();
        Circle c1=new Circle();
        Square s1=new Square();
        r1.breadth=10;
        r1.length=20;
        c1.r=100;
        s1.side=20;
        System.out.println("Area and perimeter of rectangle:"+r1.arrec(r1.length, r1.breadth)+r1.perrec(r1.length,r1.breadth));
        System.out.println("Area and perimeter of circle:"+c1.arcir(c1.r)+c1.prcir(c1.r));
        System.out.println("Area and perimeter of square:"+s1.arsq(s1.side)+s1.prsq(s1.side));
    }   
}
