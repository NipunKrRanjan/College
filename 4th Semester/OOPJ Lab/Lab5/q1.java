public class q1
{
    int m1,m2,m3,m4,m5;
    int sum;
    public q1(int m1,int m2,int m3,int m4,int m5)
    {
        sum=m1+m2+m3+m4+m5;
    }
    void display()
    {
        System.out.println("Sum of marks is: "+sum);
    }
    public static void main(String[] args)
    {
        q1 s1=new q1(90, 92, 93, 89, 91);
        q1 s2=new q1(77,75,80,86,88);
        q1 s3=new q1(55,60,70,80,90);
        q1 s4=new q1(100,99,99,98,97);
        q1 s5=new q1(45,50,55,60,65);
        s1.display();
        s2.display();
        s3.display();
        s4.display();
        s5.display();
    }
}