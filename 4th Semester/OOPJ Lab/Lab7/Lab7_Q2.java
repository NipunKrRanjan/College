import java.util.Scanner;
class cube
{
    double vol(double side)
    {
        return side*side*side;
    }
    class square
    {
        double ar(double side)
        {
            return side*side;
        }
        double pr(double side)
        {
            return 4.0*side;
        }
    }
}
public class Lab7_Q2 
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the side of cube:");
        double side=sc.nextDouble();
        cube c=new cube();
        System.out.println("Volume of cube:"+c.vol(side));
        cube.square s=c.new square();
        System.out.println("Area of square:"+s.ar(side));
        System.out.println("Perimeter of square:"+s.pr(side));
    }
}
