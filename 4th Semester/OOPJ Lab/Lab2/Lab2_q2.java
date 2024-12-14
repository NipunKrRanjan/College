class Student
{
    int rollno,m1,m2,m3,m4,m5;
    int fullmark(int s1,int s2,int s3,int s4,int s5)
    {
        return s1+s2+s3+s4+s5;
    }
}
public class Lab2_q2 {
    public static void main(String[] args) {
        Student s1=new Student();//object of the class Student
        s1.rollno=727;
        s1.m1=90;
        s1.m2=98;
        s1.m3=95;
        s1.m4=100;
        s1.m5=99;
        int sum=s1.fullmark(s1.m1, s1.m2, s1.m3, s1.m4, s1.m5);
        System.out.println("Total marks is:"+sum);
    }
    
}
